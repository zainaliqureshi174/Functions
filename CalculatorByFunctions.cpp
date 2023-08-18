#include <iostream>
using namespace std;

int add(int, int);

int subtract(int x, int y)
{
	int num3 = x - y;

	return num3;
}

int multi(int x, int y)
{
	int num3 = x * y;

	return num3;
}
float divis(float x, float y)
{
	float num3 = x / y;

	return num3;
}
int main()
{
	int num1 = 0;
	int num2 = 0;

	int oper;
	int sum;
	float ans;
	
	char answ;
	cout << "Enter any 2 numbers.\n";
	cout << "Then Press the numbers from 1 to 4 for corresponding operator (+, -, *, /)\n";
	cout << "Press(-1) to end the program.\n";

	cout << "Press 1 ............... addition\n";
	cout << "Press 2 ............... Subtraction\n";
	cout << "Press 3 ............... Multiplication\n";
	cout << "Press 4 ............... Division\n";

	cout << "Shall we start? (Y/n)\n";

	cin >> answ;

	if (answ == 'Y' || answ == 'y')
	{
		cout << "Enter 1st number: ";
		cin >> num1;

		cout << "Enter 2nd number: ";
		cin >> num2;

		cout << "Chose the operator (+, -, *, /): ";
		cin >> oper;

		if (oper == 1)
		{
			sum = add(num1, num2);
			cout << sum << endl;
		}

		else if (oper == 2)
		{
			sum = subtract(num1, num2);
			cout << sum << endl;
		}

		else if (oper == 3)
		{
			sum = multi(num1, num2);
			cout << sum << endl;
		}
		else if (oper == 4)
		{
			ans = divis(num1, num2);
			cout << ans << endl;
		}

		else if (oper == -1)
		{
			cout << "Thank you for comming!!!";
		}

		else
		{
			cout << "Invalid!!!";
		}

		while (oper != -1 || answ != 'n')
		{
			cout << "Do you want another Calculation (Y/n): ";
			cin >> answ;
			
			if (answ == 'Y' || answ == 'y')
			{
				cout << "Enter 1st number: ";
				cin >> num1;

				cout << "Enter 2nd number: ";
				cin >> num2;

				cout << "Chose the operator (+, -, *, /): ";
				cin >> oper;

				if (oper == 1)
				{
					sum = add(num1, num2);
					cout << sum << endl;
				}

				else if (oper == 2)
				{
					sum = subtract(num1, num2);
					cout << sum << endl;
				}

				else if (oper == 3)
				{
					sum = multi(num1, num2);
					cout << sum << endl;
				}
				else if (oper == 4)
				{
					ans = divis(num1, num2);
					cout << ans << endl;
				}

				else if (oper == -1)
				{
					break;
				}
			}
			else if (answ == 'n' || answ == 'N')
			{
				cout << "Thank you for coming";
			}
		}
	}

	else if (answ == 'n' || answ == 'N')
	{
		cout << "Thank you for coming!!!";
	}

	return 0;
}


int add(int x, int y)
{
	int num3 = x + y;

	return num3;
}