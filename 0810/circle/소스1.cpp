#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout << "초를 입력해주세요" << endl;
	cout << "num1 : ";
	cin >> num1;
	int minute = num1 % 3600/60;
	int hour = num1 / 3600;
	int secound = (int)num1 % 60;
	cout << hour << "시" << minute << "분" << secound << "초";
}