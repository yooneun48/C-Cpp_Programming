#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout << "�ʸ� �Է����ּ���" << endl;
	cout << "num1 : ";
	cin >> num1;
	int minute = num1 % 3600/60;
	int hour = num1 / 3600;
	int secound = (int)num1 % 60;
	cout << hour << "��" << minute << "��" << secound << "��";
}