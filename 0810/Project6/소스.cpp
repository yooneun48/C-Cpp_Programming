#include<iostream>
using namespace std;


void func(char);
int sum(int, int);

//int sum(int a, int b)
//{
//	int f = a + b;
//
//	return f;
//}

int main()
{
	char temp = -1;
	
	func(temp);

	
}
int sum(int a, int b)
{
	int f = a + b;

	return f;
}

void func(char temp)
{
	while (0 != temp)
	{
		cout << "숫자를 입력하세요" << endl;
		cout << "num : ";
		cin >> temp;//temp는 어떤 변수입니다 저장용
		switch (temp)
		{
		case 'M':case 'm':
			cout << "Morning" << endl;
			break;
		case 'A':case 'a':
			cout << "Afternoon" << endl;
			break;
		case 'E':case 'e':
			cout << "Evening" << endl;
			break;
		default:
			cout << "I don't konw" << endl;
			break;
		}
	}
}