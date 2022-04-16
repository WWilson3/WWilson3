#include <array>
#include <iostream>
#include <vector>

//William Wilson and Ramis Haslani
using namespace std;
template <typename Type>
void reverseArray(Type array[], int size) {
	
	Type holder;

	for (int i = 0; i < size; i++) {
		holder = array[i];
		array[i] = array[size - (1 + i)];
		array[size - (1 + i)] = holder;
	}


}



template <typename Type>
void printArray(Type array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

template<typename Type>
void initVector(vector <Type> vector, Type array[]) {
	for (int i = 0; i < vector.size(); i++) {
		vector.at(i) = array[i];
	}
}

template <typename Type>
void replacelastthree(vector <Type> vector, Type val1, Type val2, Type val3) {
	vector.at(vector.size() - 3) = val1;
	vector.at(vector.size() - 2) = val2;
	vector.at(vector.size() - 1) = val3;

}

template<typename Type>
void printVector(vector <Type> vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << vector.at(i) << " ";
	}
	cout << endl;
}

template<typename Type>
class Comparable {

public:
	Comparable(Type a, Type b) {
		item1 = a;
		item2 = b;
	}
	bool lt() {
		if (item1 < item2) {
			return true;
		}
		else {
			return false;
		}
	}

	bool gt() {
		if (item1 > item2) {
			return true;
		}
		else {
			return false;
		}
	}
	bool eq() {
		if (item1 == item2) {
			return true;
		}
		else {
			return false;
		}
	}
private:
	Type item1;
	Type item2;
};

int main() {
	int a[5]{ 6, 10, -4, 11, -2 };

	char str[7]{ "Hello!" };

	vector <int> vec1;

	vector <char> vec2;


}