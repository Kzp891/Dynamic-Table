#include<iostream>
#include<string>
using namespace std;



class table
{
public:

	int capacity = 10;
	int nElements;
	int* Table = new int[capacity];

	void size();
	void add(int);
	void find(int);
	void find2(int, int);
	void del();
	void print();
	bool bubblesort();
};

void table::add(int x)
{
	while (nElements == capacity)
	{
		int* temp = new int[2 * capacity];
		for (int i = 0; i < nElements; i++)
		{
			temp[i] = Table[i];
		}
		delete[] Table;
		Table = temp;
		capacity = 2 * capacity;
	}
	Table[nElements] = x;
	nElements++;
}

void table::print()
{
	int c = 0;
	if (nElements < 0)
	{
		cout << "Table is empty" << endl;
	}
	else
	{
		for (int i = 0; i < nElements; i++) cout << c++ << ". " << Table[i] << endl;
	}
}

void table::find2(int position, int new_value)
{
	int n = 0;
	bool b = true;
	while (b == true)
	{
		if (n != position)
		{
			Table[n];
			n++;
		}
		else
		{
			cout << "Value of the element to change: " << Table[position] << endl;
			Table[position] = new_value;

			cout << "New Value: " << new_value << endl;
			b = false;
		}
	}
}



void table::size()
{
	cout << "Numer of Elements " << nElements << endl;
	cout << "Size " << capacity << endl;
}


void table::find(int position)
{
	int n = 0;
	bool b = true;
	while (b == true)
	{
		if (n != position)
		{
			Table[n];
			n++;
		}
		else
		{
			cout << "Value of the element: " << Table[position] << endl;
			b = false;
		}
	}
}
bool table::bubblesort()
{
	int x = 0;
	for (int i = 0; i < nElements; i++)
	{
		for (int j = 0; j < nElements - 1; j++)
		{
			if (Table[j] > Table[j + 1])
			{
				int x = Table[j];
				Table[j] = Table[j + 1];
				Table[j + 1] = x;
			}
		}
	}
	return true;
}
void table::del()
{
	delete[] Table;
	nElements = 0;
	capacity = 10;
}




int main() {
	table tab;

	tab.add(1);
	tab.add(2);
	tab.add(3);
	tab.add(4);
	tab.add(5);
	tab.add(6);
	tab.add(7);
	tab.add(8);
	tab.add(2563);
	tab.add(-480000);
	tab.add(4624);
	tab.add(8425);
	tab.add(6521);
	tab.add(2321);
	tab.add(38416589);
	tab.add(2646516);
	tab.print();
	tab.find(11);
	tab.find2(8, 6666);
	tab.print();
	cout << "==============Sort===============" << endl;
	tab.bubblesort();
	tab.print();
	tab.size();
	tab.del();
	tab.print();


};
