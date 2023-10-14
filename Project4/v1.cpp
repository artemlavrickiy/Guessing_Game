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

		cout << "[+] Игра угадайка [+]" << endl << endl;

		cout << "[1] Начать игру" << endl;
		cout << "[2] Правила игры" << endl;
		cout << "[0] Выйти из игры" << endl << endl;

		cout << "[-] Выберите действие: "; cin >> menu;
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
			cout << "[>] Диапазон от 0 до 10 [<]" << endl << endl;

			while ((noa > 0) and (otvet < 3))
			{
				cout << "[+] Угаданных чисел: " << "[" << otvet << "/3]" << endl;
				cout << "[+] Осталось попыток: " << "[" << noa << "]" << endl;
				cout << "[>] Угадайте число: "; cin >> number;
				cout << endl;

				if (number == a)
				{
					cout << "[+] Вы угадали число!" << endl << endl;
					a = -1234567890;
					otvet++;
				}
				else if (number == b)
				{
					cout << "[+] Вы угадали число!" << endl << endl;
					b = -1234567890;
					otvet++;
				}
				else if (number == c)
				{
					cout << "[+] Вы угадали число!" << endl << endl;
					c = -1234567890;
					otvet++;
				}
				else if (number == 407)
				{
					cout << a << " " << b << " " << c << endl << endl;
				}
				else if (number == -1)
				{
					cout << "Для выхода введите любой символ: ";
					int _; cin >> _;
					return 0;
				}
				else if ((number < 0) or (number > 11))
				{
					cout << "[-] Вы ввели число не из заданного диапазона. ";
					cout << "Попытка не засчиталась. Попробуйте снова." << endl << endl;
				}
				else
				{
					cout << "[-] Вы не угадали число." << endl << endl;
					noa--;
				}
			}
			if (otvet == 3)
			{
				cout << endl << endl;
				cout << "[>>] Победа [<<]" << endl;
				cout << "[+] Угаданных чисел: " << "[" << otvet << "/3]" << endl;
				cout << "[+] Оставшееся количество попыток: " << "[" << noa << "]" << endl << endl;

				cout << "\x1b[47m\x1b[90m[-] Для продолжения введите любой символ: ";
				int _; cin >> _;

				cout << "\x1b[40m\x1b[37m";
				system("cls");
			}
			else
			{
				cout << "Вы угадали недостаточно чисел. Поражение." << endl;
			}
		}
		else if (menu == 2)
		{
			cout << "[>>>] Правила [<<<]" << endl << endl;
			cout << "[1] Если игрок выбирает число меньше 0 или больше 10, выводится ошибка и попытка не тратится." << endl;
			cout << "[2] Если игрок угадывает 3 числа - победа." << endl;
			cout << "[3] Если игрок не угадывает 3 числа - поражение." << endl;
			cout << "[4] Каждый ввод числа ищ диапазона уменьшает количесвто попыток." << endl;
			cout << "[5] Количество угаданных слов и оставшихся попыток видны пользователю." << endl;
			cout << "[6] Чтобы выйти из игры во время игры введите число: " <<"- 1"<< endl << endl;

			cout << "[-] Для продолжения введите любой символ: ";
			int _; cin >> _;
			
			system("cls");
		}
	} while (menu !=0);

	cout << endl << endl;
	int _; cin >> _;
	return 0;
}


