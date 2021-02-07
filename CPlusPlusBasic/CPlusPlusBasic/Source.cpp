#include <iostream>
using namespace std;
const int n = 10;
struct link
{
	int key;
	link* next;
}*gr[n];

struct queue_elem
{
	int key;
	queue_elem* next;
}*first, * last, * p;

bool search_arc(link* [n], int, int);
void add_node(link* [n], int);
void add_arc(link* [n], int, int);
void bfs(int);

void main()
{
	int a;
	for (int i = 0; i < n; i++) gr[i] = NULL;
	while (1)
	{
		cout << "1. Add node\n";
		cout << "2. Add arc\n";
		cout << "3. Breadth-first Search(BFS)\n";
		cout << "Choose:";
		cin >> a;
		while (a < 1 || a > 3)
		{
			cout << "Error! Try again!";
			cin >> a;
		}
		if (a == 1)
		{
			cout << "Enter key of node:";
			cin >> a;
			add_node(gr, a);
		}
		else if (a == 2)
		{
			int b;
			cout << "Enter first node:";
			cin >> a;
			cout << "Enter second node:";
			cin >> b;
			add_arc(gr, a, b);
		}
		else
		{
			cout << "Enter beginning node:";
			cin >> a;
			bfs(a);
		}
	}
}

bool search_node(link* gr[n], int a)
{
	bool flag = false;
	for (int i = 0; i < n; i++) if (gr[i] && gr[i]->key == a) flag = true;
	return flag;
}

bool search_arc(link* gr[n], int key1, int key2)
{
	bool flag = false;
	if (search_node(gr, key1) && search_node(gr, key2))
	{
		int i = 0;
		while (gr[i]->key != key1) i++;
		link* p = gr[i];
		while (p->key != key2 && p->next != NULL) p = p->next;
		if (p->key == key2) flag = true;
	}
	return flag;
}

void add_node(link* gr[n], int key)
{
	if (search_node(gr, key)) cout << "Already exists!\n";
	else
	{
		int j = 0;
		while (gr[j] && j < n) j++;
		if (gr[n] == NULL)
		{
			gr[j] = new link;
			gr[j]->key = key;
			gr[j]->next = NULL;
		}
		else cout << "Overflow!\n";
	}
}

void add_arc(link* gr[n], int key1, int key2)
{
	int i = 0;
	link* p;
	if (search_arc(gr, key1, key2)) cout << "Already exists!\n";
	else
	{
		if (!search_node(gr, key1)) add_node(gr, key1);
		if (!search_node(gr, key2)) add_node(gr, key2);
		while (gr[i]->key != key1) i++;
		p = new link;
		p->key = key2;
		p->next = gr[i]->next;
		gr[i]->next = p;
	}
}

void queue_push(int a)
{
	p = last;
	last = new queue_elem;
	last->key = a;
	last->next = NULL;
	if (p) p->next = last;
	if (!first) first = last;
}

int queue_pop(int& a)
{
	if (first)
	{
		a = first->key;
		p = first;
		first = first->next;
		if (first == NULL) last = first;
		delete p;
		return 1;
	}
	else
		return 0;
}

int links_index(int a)
{
	link* p;
	for (int i = 0; i < n; i++)
	{
		p = gr[i];
		while (p)
		{
			if (p->key == a) return i;
			p = p->next;
		}
	}
}

bool empty_queue() {
	return first != NULL;
}

int convert(int k) {
	for (int i = 0; i < n; i++)
		if (gr[i] && gr[i]->key == k)
			return i;

	return -1;
}

void bfs(int k)   //k - ключовата стойност на началния възел
{ 
	int m[n];        //масив за регистриране на обходените върхове
	for (int i = 0; i <= n; i++) m[i] = 0;
	//init_queue();    //инициализация на помощната опашка
	queue_push(k);   //поместване в опашка на първия елемент
	while (empty_queue())   //докато опашката не е празна
	{ 
		int valid = queue_pop(k);    //извличане на поредния елемент от опашката  
		int j = convert(k); //функция, която връща индекса             
							//на елемента на масива от списъците на       		 
							// съседство, чиято стойност е k.    
		if (m[j]==0)		//Възелът не е посетен  
		{
			m[j]=1;cout<<k<<" ";
		}//регистриране и визуализация на възела    
	
		for (link *t=gr[j]->next; t != NULL && t->next!=NULL; t=t->next)       
			if(m[convert(t->key)]==0) //възелът не е посетен 
		
		queue_push(t->key);  //включване на възела в опашката  
	}
}


void bfs1(int k)
{
	if (search_node(gr, k))
	{
		int m[n] = { 0 }, j;
		first = last = NULL;
		queue_push(k);
		while (first)
		{
			queue_pop(k);
			j = links_index(k);
			if (m[j] == 0)
			{
				m[j] = 1;
				cout << k << ' ';
			}
			for (link* l = gr[j]; l->next; l = l->next)
				if (!m[links_index(l->key)]) queue_push(l->key);
			cout << endl;
		}
	}
	else cout << "Node doesnt exist!\n";
}