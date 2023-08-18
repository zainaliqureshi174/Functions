/*This program makes a calculator using functions*/

#include <iostream>
using namespace std;
 

int sum(int a, int b)
{
	int result = a + b;
	return result;
}

int subtract(int a, int b)
{
	int result = a - b;
	return result;
}

int product(int a, int b)
{
	int result = a * b;
	return result;
}

float divide(int a, int b)
{
	float result = a / b;
	return result;
}

int mod(int a, int b)
{
	int result = a % b;
	return result;
}


int main()
{
int num1, num2, result1 = 0;
char ch;
	cout <<"Welcome to calculator." 
	<<"You can get Addition, Subtraction, Multiplication, Division and remainder of two numbers by this calculator.\n\n";
	do
	{
	cout << "Enter two numbers\n";
	cin >> num1 >> num2 ;
	cout <<"Enter the operation to perform.\n";
	cin >> ch;
	
	if (num2 == 0 && (ch == '/' || ch == '%'))
	{
		cout <<"MATH ERROR !!!! 0 can not be used as a denominator.\n";
	}
		
	}	
	while (num2 == 0 && (ch == '/' || ch == '%'));
	
	
		switch (ch)
		{
			case ('+'):
			result1 = sum(num1, num2);
			break;
			case ('-'):
			result1 = subtract(num1, num2);
			break;
			case ('*'):
			result1 = product(num1, num2);
			break;
			case ('/'):
			result1 = divide(num1, num2);
			break;
			case ('%'):
			result1 = mod(num1, num2);
			break;	
		}
	cout << num1 << " " << ch << " " << num2 << " = " << result1 << endl;
	return 0;
}

