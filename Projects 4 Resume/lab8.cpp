#include <iostream>
#include <string>
#include <array>

using namespace std;
//William Wilson and Ramis Haslani


//Function toi print arrays
void printArray(int array[], int size) {

	int i;

	for (i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}

}

//Display minimum values in array
int minArray(int array[], int size) {
	int minNum;

	minNum = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] < minNum) {
			minNum = array[i];
		}
	}

	return minNum;
}

//Display maximum values in array
int maxArray(int array[], int size) {
	int maxNum;

	maxNum = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > maxNum) {
			maxNum = array[i];
		}
	}

	return maxNum;
}

//Add all array values together
int sumArray(int array[], int size) {
	int sumNum;

	sumNum = array[0];

	for (int i = 1; i < size; i++) {
	
			sumNum = sumNum + array[i];
	
	}

	return sumNum;
}

//Multiply all array values together
int productArray(int array[], int size) {
	int multNum;

	multNum = array[0];

	for (int i = 1; i < size; i++) {

		multNum = multNum * array[i];

	}

	return multNum;
}

//Copy one array to another
void copyArray(int array1[], int array2[], int size) {
	for (int i = 1; i < size; i++) {

		array2[i] = array1[i];

	}


}

//Copy only the highest values from two arrays to one.
void greaterArray(int array1[], int array2[], int array3[], int size) {

	for (int i = 1; i < size; i++) {
		if (array2[i] < array1[i]) {
			array3[i] = array1[i];
		}
		if (array1[i] < array2[i]) {
			array3[i] = array2[i];
		}
	}


}

//Call all previous functions
int main() {

	static const int size = 10;

	int a[size] = { 5, 7, -2, 8, 11, -9, 4, 6, 12, -1 };

	int b[size] = { 4, 16, 9, -2, 1, 14, -4, 8, 10, 0 };

	int c[size];

	cout << minArray(a, size) << endl;
	cout << maxArray(a, size) << endl;
	cout << sumArray(a, size) << endl;
	cout << productArray(a, size) << endl;
	copyArray(a, c, size);
	printArray(c, size);
	greaterArray(a, b, c, size);
	printArray(c, size);
}