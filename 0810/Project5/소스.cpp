#include<iostream>
using namespace std;

int main()
{
	int temp=-1;

	while (0 != temp)
	{
		cout << "���ڸ� �Է��ϼ���." << endl;
		cout << "num : ";
		cin >> temp;

		switch (temp)
		{
		case 0:
			cout << "�����մϴ�" << endl;
			break;
		case 1:
			cout << "ONE" << endl;
			break;
		case 2:
			cout << "TWO" << endl;
			break;
		case 3:
			cout << "THREE" << endl;
			break;
		case 4:
			cout << "FOUR" << endl;
			break;
		case 5:
			cout << "FIVE" << endl;
			break;
		default:
			cout << "I DON'T KNOW" << endl;
			break;
		}
	}
}