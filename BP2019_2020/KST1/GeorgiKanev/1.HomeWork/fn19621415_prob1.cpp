#include <iostream>
using namespace std;

int main() {
	int A, B;
	cout << "Enter A= ";
	cin >> A;
	cout << endl << "Enter B= ";
	cin >> B;
	float C = A / B;
	float D = (float)A / B;
	cout << endl << "A as an int= " << C << endl;
	//�P���y �t�u�|�u�~�y�u �~�p �t�r�u �������}�u�~�|�y�r�y ���� ���y�� int, �����|�����p�r�p�}�u �{�p���� ���u�x���|���p�� ���� �t�u�|�u�~�u����
	//�x�p�{�����s�|���~�u �t�� �~�p�z-�q�|�y�x�{������ �����|�� ���y���|��, ( 7/3 ���u �~�y �t�p�t�u 2 �r�}�u������ 2.333)
	//�t���{�p���� �����y �����t �������{�p �q) �����|�����p�r�p�}�u ���u�x���|���p�� ���� ���y�� float, �{���z���� �����x�r���|���r�p �y�x���y���r�p�~�u���� �~�p 
	//�����y�}�u���~������ ���y���|�� �{�p���� 2.333
	cout << endl << "A as a float= " << D << endl;
	return 0;

}