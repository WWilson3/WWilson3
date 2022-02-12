#include <cmath>
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

//Project which makes a series of mathematical calculations.

void CtoF() {

	cout << 406 / 100;
	cout << "Please input your tempurature in Celcius." << endl;
	double celcius;
	cin >> celcius;
	double farh;

	farh = (celcius * 1.8) + 32;

	cout << "Your tempurature in Fahrenheit is " << farh << endl;
}
// for the test cases, check for numbers less than -273.15

void FtoC() {
	cout << "Please input your tempurature in Fahrenheit." << endl;
	double farh;
	cin >> farh;
	double celcius;

	celcius = ((farh - 32) * (5 / 9));

	cout << "Your tempurature in Celcius is " << celcius << endl;
}
//for the test cases, check for numbers less than -459.67
//also remember to cout return value in main

void euclid() {
	double firstnum;
	double secnum;

	
	cout << "Please enter the first number." << endl;
	cin >> firstnum;
	while (firstnum <= 0) {
		cout << "Number must be higher than zero" << endl;
		cin >> firstnum;
	}

	cout << "Please enter the second number." << endl;
	cin >> secnum;
	while (firstnum <= 0) {
		cout << "Number must be higher than zero" << endl;
		cin >> firstnum;
	}

	double firstresult;
	double secresult;
	while (firstnum % firstresult != 0 || firstnum % secresult != 0 || secnum % firstresult != 0 || secnum % secresult != 0) {
		firstresult = firstnum / secnum;
		if (firstnum % firstresult != 0 || firstnum % secresult != 0 || secnum % firstresult != 0 || secnum % secresult != 0) {
			cout << "Your highest common denominator is: " << firstresult << endl;
			break;
		}
		secresult = secnum / firstresult;
		if (firstnum % firstresult != 0 || firstnum % secresult != 0 || secnum % firstresult != 0 || secnum % secresult != 0) {
			cout << "Your highest common denominator is: " << secresult << endl;
			break;
		}
	}

	//unsure what the error is doubles should be working for a modulo

}

double pytha(int a, int b, int c) {

	if (a != 0 && b != 0 && c != 0) {
		char choice;
		cout << "No zero? Let's try that again. What's the value you want to calculate?" << endl;
		cin >> choice;
		while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' && choice != 'c' && choice != 'C') {
			cout << "Are you even trying here?" << endl;
			cin >> choice;
		}
		if (choice == 'a' || choice == 'A') {
			a = 0;
		}
		if (choice == 'b' || choice == 'B') {
			b = 0;
		}
		if (choice == 'c' || choice == 'C') {
			c = 0;
		}


	}
		if (a == 0) {
			a = sqrt(pow(c, 2) - pow(b, 2));
			return a; 
		}

		if (b == 0) {
			b = sqrt(pow(c, 2) - pow(a, 2));
			return b;
		}

		if (c == 0) {
			c = sqrt(pow(a, 2) + pow(b, 2));
			return c;
		}

	
}

double square(double number) {
	double small = 0;
	double large = number;
	double mid = 0;

	while (pow(mid, 2) != number) { 
		mid = small + ((1 / 2) * (large - small));

		if (pow(mid, 2) > number) {
			large = mid;
		}

		if (pow(mid, 2) < number) {
			small = mid;
		}

		if (pow(mid, 2) == number) {
			return mid;
		}
	}

}

 int fibo(int input) {
	 int previoustotal = 0;
	 int total = 1;

	 for (int i = 0; i < input; i++) {
		 total = total + previoustotal + 1;
			previoustotal = total;
	 }

	 return total;
 }

 void narc(int input) {
	 int position[5];

	 int power;
	 int store = input;

	 int numbers[5];


	 if (store - 10000 > 0) {
		 power = 5;
	 }
	 if (store - 1000 > 0) {
		 power = 4;
	 }
	 if (store - 100 > 0) {
		 power = 3;
	 }
	 if (store - 10 > 0) {
		 power = 2;
	 }
	 else {
		 power = 1;
	 }

	 if (power = 5) {
		 position[5] = store / 10000;
		 store = store - (position[5]*10000);

		 position[4] = store / 1000;
		 store = store - (position[4]*1000);

		 position[3] = store / 100;
		 store = store - (position[3]*100);

		 position[2] = store / 10;
		 store = store - (position[2]*10);

		 position[1] = store;
	 }

	 if (power = 4) {
		 position[4] = store / 1000;
		 store = store - (position[4] * 1000);

		 position[3] = store / 100;
		 store = store - (position[3] * 100);

		 position[2] = store / 10;
		 store = store - (position[2] * 10);

		 position[1] = store;
	 }

	 if (power = 3) {
		 position[3] = store / 100;
		 store = store - (position[3] * 100);

		 position[2] = store / 10;
		 store = store - (position[2] * 10);

		 position[1] = store;
	 }

	 if (power = 2) {

		 position[2] = store / 10;
		 store = store - (position[2] * 10);

		 position[1] = store;
	 }

	 if (power = 1) {
		 position[1] = store;
	 }

	 int total;

	 total = pow(position[5], power) + pow(position[4], power) + pow(position[3], power) + pow(position[2], power) + pow(position[1], power);
	 


	 if (total = store) {
		 cout << "Yo this number is mad full of itself." << endl;
	 }
	 else {
		 cout << "This number has a healthy ego." << endl;
	 }
 }



 int main() {
	 int choice;
	 
	 do {
		 cin >> choice;

		 cout << "Welcome to the math zone! Please choose a calculation." << endl;
		 cout << "1) Convert Celsius to Fahrenheit" << endl;
		 cout << "2) Convert Fahrenheit to Celsius" << endl;
		 cout << "3) Compute the Greatest Common Denominator of Two Numbers" << endl;
		 cout << "4) Solve the Pythagorean Theorem" << endl;
		 cout << "5) Compute the Fibonacci of a number" << endl;
		 cout << "6) Calculate the square root of X" << endl;
		 cout << "7) Calculate the power of x to y." << endl;
		 cout << "8) Test for Narcissistic Number" << endl;
		 // cout << "9) Run Test Cases" << endl;
		 cout << "10)     Exit" << endl;


		 while (choice > 10 || choice < 1) {
			 cout << "Look buddy, I don't have time for this." << endl;
			 cin >> choice;
		 }

		 if (choice == 1) {
			 CtoF;
		 }

		 if (choice == 2) {
			 FtoC;
		 }

		 if (choice == 3) {
			 euclid;
		 }

		 if (choice == 4) {
			 int a;
			 int b;
			 int c;

			 cout << "Enter your numbers one at a time. Leave a zero for the number you want to solve for. C is the longer side." << endl;

			 cout << "Enter A: ";
			 cin >> a;

			 cout << "Enter B: ";
			 cin >> b;

			 cout << "Enter C: ";
			 cin >> c;

			 double result = pytha(a, b, c);

			 cout << "The length of your mystery side is: " << result << endl;
		 }

		 if (choice == 5) {
			 int fiboinput;

			 cout << "Enter a number to calculate a fibonacci to its power." << endl;

			 cin >> fiboinput;

			 while (fiboinput < 0) {
				 cout << "Bruh" << endl;
				 cin >> fiboinput;
			 }

			 cout << "Your fibonacci is: " << fibo(fiboinput) << endl;;

		 }

		 if (choice == 6) {
			 cout << "Enter a number to get its square root." << endl;
			 double x;
			 cin >> x;
			 while (x < 0) {
				 cout << "You're the reason my professor makes me write these sarcastic statements..." << endl;
				 cin >> x;
			 }
			 cout << "Your square root is " << square(x) << "." << endl;
		 }

		 if (choice == 7) {
			 int first;
			 int power;

			 cout << "First, enter your x." << endl;
			 cin >> first;
			 cout << "Now, enter your y." << endl;
			 cin >> power;

			 cout << "Your number is now: " << pow(first, power); << endl;
		 }

		 if (choice == 8) {
			 cout << "Let's test to see if a number is a narcissist. Enter a number." << endl;
			 int possiblenarcissist;
			 cin >> possiblenarcissist;
			 while (possiblenarcissist < 0) {
				 cout << "How can they be full of themselves if they're so negative all the time? I'll be here all week." << endl;
				 cin >> possiblenarcissist;
			 }
			 narc(possiblenarcissist);
		 }

		 if (choice == 10) {
			 cout << "Seeya later!" << endl;
		 }

	 } while (choice != 10);

 }