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
		pointer++; //��������� � ����� ����� ������
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

	cout << "��������� ������� ���� ������� ������� ������ ���-112\n";
	cout << "��������� ��� ������ ������� � ������\n";

	char text[1000];
	cout << "������� ������: ";
	cin.getline(text, 1000); //������� ������ �� Enter

	char c;
	cout << "������� ������ ��� ������: ";
	cin >> c;

	int first_index = find_first_index(text, c);
	int last_index = find_last_index(text, c);

	if (first_index == -1 || last_index == -1)
	{
		cout << "������ '" << c << "' �� ����������� � �������� ������\n";
	}
	else
	{
		cout << "������ '" << c << "' ������� ����������� �� " << first_index << " �������.\n";
		cout << "������ '" << c << "' ��������� ��� ����������� �� " << last_index << " �������.\n";
	}

	system("pause");

	return 0;
}
