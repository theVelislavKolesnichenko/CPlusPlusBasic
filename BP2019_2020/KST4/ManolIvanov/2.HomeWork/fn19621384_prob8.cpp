#include<iostream>
using namespace std;
void sk(double t)
{
	double s = 987;
	double v;
	v = s / t;
	cout << v;
}
void vr(double v2)
{
	double s = 987;
	double t2;
	t2 = s / v2;
	cout << t2;
}
int main()
{
	double s1, v1, t1;
	s1 = 987;
	cout << "vuvedete stoinost za vreme" << endl;
	cin >> t1;
	cout << "skorostta na vlaka e ravna na "; sk(t1); cout << "km/h" << endl;
	cout << "vuvedete stoinost za skorost" << endl;
	cin >> v1;
	cout << "vremeto e ravno na "; vr(v1); cout<< "chasa" << endl;

}
