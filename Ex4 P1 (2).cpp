#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

	int n, x, y, r;
	char a;
	bool abort = false;
	

	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Modulus" << endl;

	cout << "\n\n Choose from 1 to 5 which would be used in calculating: ";
	cin >> n;

	cout << "Enter two integers to be calculated: " << endl;
	cin >> x >> y;


	switch(n)
	{ 
		case 1:
			r=x+y;
			cout << "The result is: " << r <<endl;
			break;
		case 2:
			r=x-y;
			cout << "The result is: " << r <<endl;
			break;
		case 3:
			r=x*y;
			cout << "The result is: " << r <<endl;
			break;
		case 4:
			r=x/y;
			cout << "The result is: " << r <<endl;
			break;
		case 5:
			r=x%y;
			cout << "The result is: " << r <<endl;
			break;
		default: 
			cout << "Invalid input!" << endl;
	}


	do
	{ 
		cout << "Do you wish to continue? " << endl << endl;
		cin >> a;

		switch(a)
		{
			case 'N':
			case 'n':
				abort = true;
				break;
			case 'Y':
			case 'y':
				return main();
				break;
			default: continue;
		}
	} while(!abort);
	


	system("pause");
	return 0;
}