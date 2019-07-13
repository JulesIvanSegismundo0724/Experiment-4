#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int s, x, y, temp, arr[50];
	 
	cout << "Selection Sorting..." << endl;
	cout << "Enter the ARRAY SIZE: ";
	cin >> s;
	cout << "Enter ARRAY ELEMENTS: " << endl;
	
	for(x=0 ; x<s ; x++)
	{
		cin >> arr[x];
	}

	cout << "Sorting array using selection sort..." << endl;

	for(x=0 ; x<s ; x++)
	{
		for(y=x+1 ; y<s ; y++)
		{
			if(arr[x] > arr[y])
			{
				temp = arr[x];
				arr[x] = arr[y];
				arr[y] = temp;
			}
		}
	}

	cout << "\nAfter using selection sorting..." << endl;
	for(x=0 ; x<s ; x++)
	{
		cout << arr[x] << " " << endl;
	}

	system("pause");
	return 0;
}