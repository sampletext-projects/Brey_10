#include <iostream>
#include <iomanip>

using namespace std;

int find_first_index(char* text, char c)
{
	char* pointer = text;
	int index = 0;
	while (*pointer != '\0')
	{
		if (*pointer == c)
		{
			return index;
		}
		index++;
		pointer++;
	}
	return -1;
}

int find_last_index(char* text, char c)
{
	char* pointer = text;
	int index = 0;
	while (*pointer != '\0')
	{
		index++;
		pointer++; //смещаемся в самый конец строки
	}
	while (index > 0)
	{
		index--;
		pointer--;
		if (*pointer == c)
		{
			return index;
		}
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Брей Валерия студент группы УМЛ-112\n";
	cout << "Программа для поиска символа в строке\n";

	char text[1000];
	cout << "Введите строку: ";
	cin.getline(text, 1000); //считать строку до Enter

	char c;
	cout << "Введите символ для поиска: ";
	cin >> c;

	int first_index = find_first_index(text, c);
	int last_index = find_last_index(text, c);

	if (first_index == -1 || last_index == -1)
	{
		cout << "Символ '" << c << "' не встречается в заданной строке\n";
	}
	else
	{
		cout << "Символ '" << c << "' впервые встречается на " << first_index << " позиции.\n";
		cout << "Символ '" << c << "' последний раз встречается на " << last_index << " позиции.\n";
	}

	system("pause");

	return 0;
}
