#include <fstream>
#include <ctime>
#include <string>
#include <random>
#include <iostream>
using namespace std;

int koleasy(int count)                 //Функция, которая считает количество слов в файле
{
	ifstream file("e:\\text4.txt");
	string s;
	while (!file.eof())
	{
		file >> s;
		count++;
	}
	return count;
}

int kolnormal(int count) //Функция, которая считает количество слов в файле
{
	ifstream file("e:\\text5.txt");
	string s;
	while (!file.eof())
	{
		file >> s;
		count++;
	}
	return count;
}

int kolhard(int count) //Функция, которая считает количество слов в файле
{
	ifstream file("e:\\text6.txt");
	string s;
	while (!file.eof())
	{
		file >> s;
		count++;
	}
	return count;
}

string easy(string s) //Выбираем случайное слово из файла со словами, состоящими из 4-х букв
{
	ifstream file("e:\\text4.txt");
	int count = 0, count1 = 1;
	count = koleasy(count);
	int n = rand() % count + 1;
	while (count1 != n)
	{
		file >> s;
		count1++;
	}
	return s;
}

string normal(string s) //Выбираем случайное слово из файла со словами, состоящими из 5-и букв
{
	ifstream file("e:\\text5.txt");
	int count = 0, count1 = 1;
	count = kolnormal(count);
	int n = rand() % count + 1;
	while (count1 != n)
	{
		file >> s;
		count1++;
	}
	return s;
}

string hard(string s) //Выбираем случайное слово из файла со словами, состоящими из 6-и букв
{
	ifstream file("e:\\text6.txt");
	int count = 0, count1 = 1;
	count = kolhard(count);
	int n = rand() % count + 1;
	while (count1 != n)
	{
		file >> s;
		count1++;
	}
	return s;
}

int vis(int a, string* mas, int dl, string* l) //Функция, которая выводит на экран саму виселицу и вписанные ранее буквы
{
	system("cls");
	switch (a)
	{
	case 1:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 2:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 3:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 4:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        O             |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 5:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        O             |\n";
		cout << "      /   \\           |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 6:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        O             |\n";
		cout << "      / | \\           |\n";
		cout << "        |             |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		break;
	}
	case 7:
	{
		for (int i = 0; i < dl; i++) //Массив, в котором хранятся буквы, которые есть в загаданном слове
			cout << mas[i] << " ";
		cout << endl;
		cout << "        _______________\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        |             |\n";
		cout << "        O             |\n";
		cout << "      / | \\           |\n";
		cout << "        |             |\n";
		cout << "       / \\            |\n";
		cout << "                      |\n";
		cout << "                      |\n";
		cout << " ____________________________\n";
		cout << " |                          |                     "; for (int i = 0; i < 7; i++) cout << l[i] << " "; cout << "\n"; //Массив, в котором хранятся буквы, которых нет в загаданном слове
		cout << endl;
		cout << "You lose :(" << endl; //Выводим на экран соообщение о том, что пользовательно проиграл, т.к. не успел отгадать слово правильно
		break;
	}
	}
	return a;
}

int main()
{
	srand(time(0));
	system("cls");
	char b = 0;
	int dl, count_osh = 0, count = 0, count1 = 0;
	string s = "", a = "", letter;
	while (a != "easy" && a != "normal" && a != "hard")
	{
		cout << "Choose the level of difficulty: [easy] [normal] [hard]" << endl;
		cin >> a; cout << endl; //Вводим уровень сложности
		if (a != "easy" && a != "normal" && a != "hard") //Проверяем, правильно ли введён уровень сложности
			cout << "You choose wrong difficult! Please try again: " << endl;
	}
	if (a == "easy") //Считываем случайное слово из файла со словами из 4-х букв
		s = easy(s);
	if (a == "normal") //Считываем случайное слово из файла со словами из 5-и букв
		s = normal(s);
	if (a == "hard") //Считываем случайное слово из файла со словами из 6-и букв
		s = hard(s);
	dl = s.length(); //Присваиваем переменной dl значение, равное размеру загаданного слова
	string* mas = new string[dl]; //Объявляем массив, в который будем записывать буквы, которые есть в загаданном слове
	string* l = new string[7]; //Объявляем массив, в который будем записывать буквы, которых нет в загадонном слове
	for (int i = 0; i < dl; i++) //Заполняем массив, в который будем записывать буквы, которые есть в загаданном слове, знаками "_"
		mas[i] = "_";
	cout << "Try to guess the word. Good luck!" << endl;
	for (int i = 0; i < dl; i++) //Выводим на экран массив, в который будем записывать буквы, которые есть в загаданном слове
		cout << mas[i] << " ";
	cout << endl;
	while (count_osh <= 7) //Счётчик количества ошибок
	{
		count1 = 0;
		if (count_osh != 0)
			count_osh = vis(count_osh, mas, dl, l); //Выводим на экран виселицу и 2 массива с введёнными буквами
		if (count_osh == 7) //Останавливаем программу, если количество ошибок равно 7
			break;
		cout << endl << "Enter the letter: ";
		cin >> b; //Вводим букву
		letter = b;
		for (int i = 0; i < dl; i++) //Проверяем, вводили ли эту букву ранее
			if (mas[i] == letter)
			{
				cout << "You have already entered this letter! Please, enter the letter again: ";
				cin >> b;
				letter = b;
				i = -1;
			}
		for (int i = 0; i < count_osh; i++) //Проверяем, вводили ли эту букву ранее
			if (l[i] == letter)
			{
				cout << "You have already entered this letter! Please, enter the letter again: ";
				cin >> b;
				letter = b;
				i = -1;
			}
		for (int i = 0; i < dl; i++) //Проверяем есть ли буква, введённая нами, в загаданном слове
			if (b == s[i])
			{
				count++;
				mas[i] = s[i];
			}
		cout << endl;
		for (int i = 0; i < dl; i++) //Выводим массив с угаданными буквами
			cout << mas[i] << " ";
		cout << endl;
		if (count == 0) //Если буква, введённая нами неправильная, то заносим её в массив с буквами, которых нет в загаданном слове
		{
			count_osh++;
			for (int i = 0; i < count_osh; i++)
				if (i == count_osh - 1)
					l[i] = b;
		}
		count = 0;
		for (int i = 0; i < dl; i++) //Проверяем остались ли в массиве с буквами, которые есть в загаданном слове, знаки "_"
			if (mas[i] == "_")
				count1++;
		if (count1 == 0) //Если знаков "_" не осталось, пользователь отгадал слово и выиграл
		{
			cout << "Congratulations! You win!" << endl;
			break;
		}
	}
}