#include<iostream>
#include<string>
using namespace std;

class Array {
	int size;
	int pos;
	int* array;
public:
	Array()
	{
		size = 5;
		pos = 0;
		array = new int[size];
	}

	void addAtTheEnd(int value) {

		if (pos == size)// If list is not full then it's run
		{
			return;
		}
		else
		{
			array[++pos] = value;
		}
	}

	void insertAtIndex(int index, int value) {
		if (index<1 || index>size)
		{
			cout << "Error! invalid index" << endl;
			return;
		}
		else if (pos == size)// If list is not full then it's run
		{
			return;
		}
		else
		{
			for (int j = pos; j >= index; j--)
			{
				array[j + 1] = array[j];
			}
			array[index] = value;
			pos++; // This line of code takes whole day 
		}
	}

	void findAndReplace(int actualValue, int newValue) {
		for (int i=1; i<=pos; i++)
		{
			if (array[i]==actualValue)
			{
				array[i] = newValue;
				return;
			}
		}
		cout << "Sorry! This value not found"<<endl;
	}

	void print() {
		for (int i = 1; i <= pos; i++)
		{
			cout << array[i] << " ";
		}
	}
	
};
int main() {
	Array List;
	List.addAtTheEnd(1);
	List.addAtTheEnd(2);
	List.addAtTheEnd(4);
	List.insertAtIndex(1, 9);
	List.print();
}
