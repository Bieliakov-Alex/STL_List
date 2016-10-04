#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

void showList(list<int> l);

int main()
{
	//������� ������
	list<int> myList;

	//��������� ������
	myList.push_back(2); //�������� � ����� ������
	myList.push_front(1); //�������� � ������ ������

	//����� ������ �� �����
	showList(myList);

	//������� ���������� ���������
	cout <<"Count of elements:" <<myList.size() << endl;

	//�������� ��������� �� ������
	myList.remove(2); //�������� ������ ��������
	showList(myList); //������������� ��������

	//������� ������� �������������� �������
	myList.remove(3);
	showList(myList);

	//��������� �������
	myList.insert(myList.begin(), 0);
	showList(myList);
	//TODO: �������� ������ ������� �������

	

	//������� ��� ������ �� �������

	//���������� ������ �����-�������
	myList.reverse();
	cout << "Revers list:" << endl;
	showList(myList);
	

	//����������
	myList.sort(); 
	cout << "Sort list" << endl;
	showList(myList);

	//������� ��������� �� ������
	myList.push_front(-5);
	myList.push_front(-5);
	cout << "Before unique:" << endl;
	showList(myList);
	myList.unique();
	cout << "After unique:" << endl;
	showList(myList);

	//������� ������������� �������
	//����������� ���������� �� ����������� (����� ����� ������!!!)
	list<int> secondList;
	secondList.push_back(-6);
	secondList.push_back(2);
	myList.merge(secondList);
	cout << "Merged list:" << endl;
	showList(myList);

	//������� ������ n-��� �������
	//TODO: ���������, ������ ������� ������
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

	//������� �������
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