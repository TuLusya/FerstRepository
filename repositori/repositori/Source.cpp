#include<iostream>
#include<ctime>
using namespace std;

void sort_array(int* arr,const int size)
{
	int k, x;
	for (int i = 0; i < size; i++) 
	{   	
		k = i;
		x = arr[i];

		for ( int j = i + 1; j < size; j++)	
			if (arr[j] < x) 
			{
				k = j;
				x = arr[j];	       
			}
		arr[k] = arr[i];
		arr[i] = x;   	
	}
}

int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	sort_array(arr,size);
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
}