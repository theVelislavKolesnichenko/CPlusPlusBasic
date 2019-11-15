#include <iostream>      //biblioteka                  //imam problem s kirilicata v visual studio 13 i se nalaga da polzam latinica(maimunica) ne mi dava da zadam ascii kodirovka
using namespace std;     //standartni nastroiki
int main(){                //main funkciq
	int a=13 , b=6;      //vuvejdame stoinosti narochno go pravq 13,za da moje kogato float-na "a" i ne e tochno delenieto da ima chisla sled zapetaqta
	double c;
	c = a / b;            //taka shte polucha c po uslovie
	cout << "c=a/b=" << c<<endl;
	double d = float (a) / b;         //tuk pochva b) podtochka
	cout << "d=a/b=" << d;
	return 0;           //vrushta 0 i prikluchva programata

}