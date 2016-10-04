#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

void showList(list<int> l);

int main()
{
	//создаем список
	list<int> myList;

	//наполняем список
	myList.push_back(2); //добавить в конец списка
	myList.push_front(1); //добавить в начало списка

	//вывод списка на экран
	showList(myList);

	//выводим количество элементов
	cout <<"Count of elements:" <<myList.size() << endl;

	//удаление элементов из списка
	myList.remove(2); //удаление одного элемента
	showList(myList); //демонстрируем удаление

	//попытка удалить несуществующий элемент
	myList.remove(3);
	showList(myList);

	//вставляем элемент
	myList.insert(myList.begin(), 0);
	showList(myList);
	//TODO: добавить другие способы вставки

	

	//функции для работы со списком

	//развернуть список задом-наперед
	myList.reverse();
	cout << "Revers list:" << endl;
	showList(myList);
	

	//сортировка
	myList.sort(); 
	cout << "Sort list" << endl;
	showList(myList);

	//удалить дубликаты из списка
	myList.push_front(-5);
	myList.push_front(-5);
	cout << "Before unique:" << endl;
	showList(myList);
	myList.unique();
	cout << "After unique:" << endl;
	showList(myList);

	//слияние сортированных списков
	//обязательна сортировка по возрастанию (иначе будет ошибка!!!)
	list<int> secondList;
	secondList.push_back(-6);
	secondList.push_back(2);
	myList.merge(secondList);
	cout << "Merged list:" << endl;
	showList(myList);

	//вывести каждый n-ный элемент
	//TODO: исправить, пример немного лажает
	myList.push_back(10);
	showList(myList);
	int n = 3;
	int element = n-1;
	auto iter = myList.begin();
	cout << "Print each " << n << " element:" << endl;
	while (element <(int) myList.size())
	{
		advance(iter, n-1);
		element += n;
		cout << *iter << endl;
	}
	cout << "End print" << endl;

	//очищаем исписок
	myList.clear();

	_getch();
	return 0;
}

void showList(list<int> l)
{
	cout << endl << endl << endl << "Show elements:" << endl;
	for (auto i = l.begin();i != l.end();i++)
	{
		cout << *i << endl;
	}
	cout << endl;
}