#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	
	int menu;

	do {
		int a = rand() % 11;
		int b = rand() % 11;
		int c = rand() % 11;
		int noa = 5;
		int otvet = 0;
		int number;

		cout << "[+] ���� �������� [+]" << endl << endl;

		cout << "[1] ������ ����" << endl;
		cout << "[2] ������� ����" << endl;
		cout << "[0] ����� �� ����" << endl << endl;

		cout << "[-] �������� ��������: "; cin >> menu;
		cout << endl;

		if (menu == 0)
		{
			return 0;
		}
		else if ((menu != 0) and (menu != 2))
		{
			if (a == b)
			{
				b = rand() % 11;
			}
			else if ((b == c) and (c == b))
			{
				c = rand() % 11;
			}

			system("cls");
			cout << "[>] �������� �� 0 �� 10 [<]" << endl << endl;

			while ((noa > 0) and (otvet < 3))
			{
				cout << "[+] ��������� �����: " << "[" << otvet << "/3]" << endl;
				cout << "[+] �������� �������: " << "[" << noa << "]" << endl;
				cout << "[>] �������� �����: "; cin >> number;
				cout << endl;

				if (number == a)
				{
					cout << "[+] �� ������� �����!" << endl << endl;
					a = -1234567890;
					otvet++;
				}
				else if (number == b)
				{
					cout << "[+] �� ������� �����!" << endl << endl;
					b = -1234567890;
					otvet++;
				}
				else if (number == c)
				{
					cout << "[+] �� ������� �����!" << endl << endl;
					c = -1234567890;
					otvet++;
				}
				else if (number == 407)
				{
					cout << a << " " << b << " " << c << endl << endl;
				}
				else if (number == -1)
				{
					cout << "��� ������ ������� ����� ������: ";
					int _; cin >> _;
					return 0;
				}
				else if ((number < 0) or (number > 11))
				{
					cout << "[-] �� ����� ����� �� �� ��������� ���������. ";
					cout << "������� �� �����������. ���������� �����." << endl << endl;
				}
				else
				{
					cout << "[-] �� �� ������� �����." << endl << endl;
					noa--;
				}
			}
			if (otvet == 3)
			{
				cout << endl << endl;
				cout << "[>>] ������ [<<]" << endl;
				cout << "[+] ��������� �����: " << "[" << otvet << "/3]" << endl;
				cout << "[+] ���������� ���������� �������: " << "[" << noa << "]" << endl << endl;

				cout << "\x1b[47m\x1b[90m[-] ��� ����������� ������� ����� ������: ";
				int _; cin >> _;

				cout << "\x1b[40m\x1b[37m";
				system("cls");
			}
			else
			{
				cout << "�� ������� ������������ �����. ���������." << endl;
			}
		}
		else if (menu == 2)
		{
			cout << "[>>>] ������� [<<<]" << endl << endl;
			cout << "[1] ���� ����� �������� ����� ������ 0 ��� ������ 10, ��������� ������ � ������� �� ��������." << endl;
			cout << "[2] ���� ����� ��������� 3 ����� - ������." << endl;
			cout << "[3] ���� ����� �� ��������� 3 ����� - ���������." << endl;
			cout << "[4] ������ ���� ����� �� ��������� ��������� ���������� �������." << endl;
			cout << "[5] ���������� ��������� ���� � ���������� ������� ����� ������������." << endl;
			cout << "[6] ����� ����� �� ���� �� ����� ���� ������� �����: " <<"- 1"<< endl << endl;

			cout << "[-] ��� ����������� ������� ����� ������: ";
			int _; cin >> _;
			
			system("cls");
		}
	} while (menu !=0);

	cout << endl << endl;
	int _; cin >> _;
	return 0;
}


