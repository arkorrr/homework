#include <iostream>
using namespace std;

int main()
{
	int count = 0;			//Task1
	for (int i = 0; i < 1000; i++) {
		int number1 = i % 10;
		int number2 = (i / 10) % 10;
		int number3 = i / 100;

		if (number1 == number2 || number2 == number3 || number3 == number1) {
			count++;
		}
	}
	cout << "Count = " << count << endl;

	int count1 = 0;			//Task2
	for (int i = 0; i < 1000; i++) {
		int number4 = i % 10;
		int number5 = (i / 10) % 10;
		int number6 = i / 100;

		if (number4 != number5 && number5 != number6 && number6 != number4) {
			count1++;
		}
	}
	cout << "Count = " << count1 << endl;

	int n;		//Task3
	cin >> n;
	int without = 0;
	int i = 1;
	while (n) {
		if (n % 10 != 3 && n % 10 != 6) {
			without += (n % 10) * i;
			i *= 10;
		}
		n /= 10;
	}

	cout << without << endl;


	int a,		//Task4
		b;
	cin >> a;

	for (int i = a - 1;i > 1; i--) {
		b = i;
		if (a % (b * b) == 0 && a % (b * b * b) != 0) {
			cout << b << endl;
		}
	}

	int A;				//Task5
	cout << "Enter a number: ";
	cin >> A;

	int sum = 0;
	while (A > 0) {
		sum += A % 10;
		A /= 10;
	}
	if (sum * sum * sum == A * A) {
		cout << "equal to A*A" << "\n";
	}
	else {
		cout << "Not equal to A*A" << "\n";
	}

	int digit;					//Task6
	cout << "Enter a number: ";
	cin >> digit;

	for (int i = 1; i < digit; i++) {
		if (digit % i == 0) {
			cout << i << endl;
		}
	}

	int num1,				//Task7
		num2;
	cout << "Enter a number1: ";
	cin >> num1;
	cout << "Enter a number2: ";
	cin >> num2;

	int min = (num1 < num2) ? num1 : num2;

	for (int i = 1;i <= min;i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << i << "\n";
		}
	}
}
