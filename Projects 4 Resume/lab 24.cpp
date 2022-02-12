#include <iomanip>
#include <iostream>

using namespace std;


//Recursive functions
int sumx(int x) {
	int total=0;
	total = total + x;
	if (x == 0) {
		return total;
	}
	else {
		x--;
		sumx(x);
	}
}

int sumxy(int x, int y) {
	int total=0;
	if (x == y) {
		return total;
	}
	if (x > y) {
		total = total + y;
			y++;
		sumxy(x, y);
	}
	if (x < y) {
		total = total + x;
		x++;
		sumxy(x, y);
	}
}

void fillarray(int arr[], int size) {
	
	if (size != 1) {
		arr[size - 1] = rand()%(10)+1;
}
}

int main() {
	int x;
	cout << "Enter a number" << endl;
	cin >> x;
	cout << "The sum of all numbers from 0 to that number is: " << sumx(x) << endl;

	int y;
	cout << "Now, enter a different number." << endl;
	cin >> y;
	cout << "The sum of all numbers between the first and the second is: " << endl;

	srand(8);

	int arr[10];
	int size = 10;

	fillarray(arr, size);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

}