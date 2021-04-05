#include <iostream>
#include <list>
#include <locale.h>
#include <iterator>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	list<int> List;
	list<int> minus;
	list<int> plus;
	list<int>::iterator Iter;
	for (int i = 0; i < 10; i++)
	{
		List.push_back(rand() % 21 - 10);
	}
	for (Iter = List.begin(); Iter != List.end(); Iter++)
	{
		if (*Iter < 0)
		{
			minus.push_back(*Iter);
		}
		else
			plus.push_back(*Iter);
	}
	cout << "Отрицательные:\n";
	for (Iter = minus.begin(); Iter != minus.end(); Iter++)
	{
		cout << *Iter << endl;
	}
	cout << "\nПоложительные:\n";
	for (Iter = plus.begin(); Iter != plus.end(); Iter++)
	{
		cout << *Iter << endl;
	}
}

