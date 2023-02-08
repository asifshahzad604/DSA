#include<iostream>
#include<string>
using namespace std;

int main(){
	int arr[6];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Enter six values of your array: ";
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (arr[j]<arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout << "Sorted Array:{ ";
	for (int j=0; j<n; j++)
	{
		cout << arr[j] << ", ";
	}
	cout << "}";
}
