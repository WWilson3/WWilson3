#include <iostream>;
#include <string>;
#include <iomanip>;

using namespace std;

// Project which calculates the amount of flowers that can be planted in an oddly-shaped area given how much space each plant needs

int main() {

	cout << "Welcome to the garden maker! Please give all measurements in feet. Now first, please enter the length of your garden." << endl;
	double sidesize;
	cin >> sidesize;
	if (sidesize <= 0) {
		cout << "Invalid input!" << endl;
	}

	cout << "Now, enter the amount of space each plant is going to need." << endl;
	double flowerspace;
	cin >> flowerspace;
	if (flowerspace <= 0) {
		cout << "Invalid input!" << endl;
	}

	cout << "Now, enter the depth of your flower beds." << endl;
	double flowerdepth;
	cin >> flowerdepth;
	if (flowerdepth <= 0) {
		cout << "Invalid input!" << endl;
	}

	cout << "Lastly, enter the depth of the filler areas." << endl;
	double fillerdepth;
	cin >> fillerdepth;
	if (fillerdepth <= 0) {
		cout << "Invalid input!" << endl;
	}
	//two semi circles and a normal sized circle cross the middle, therefore the radius is going to be 1/4 the length.

	double radius;
	radius = sidesize / 4;

	double circlearea;
	circlearea = radius * 3.14159;

	double semicircle;
	semicircle = circlearea / 2;

	double square;
	square = sidesize * sidesize;

	double flowerarea;
	flowerarea = circlearea * 3;

	double fillerarea;
	fillerarea = square - (circlearea * 3);

	int flowertotal;
	flowertotal = flowerarea / flowerspace;

	int circleflowernum;
	circleflowernum = circlearea / flowerspace;

	int semiflowernum;
	semiflowernum = circleflowernum / 2;

	double fillersoil;
	fillersoil = fillerarea * fillerdepth;

	double flowersoil;
	flowersoil = flowerarea * flowerdepth;

	cout << "Alright! After some calculating, here's what you can do with this garden." << endl;
	cout << "You can plant a total of " << flowertotal << " flowers with " << circleflowernum << " in the circle and " << semiflowernum << " in each of the semi circles." << endl;
	cout << "You are going to need " << setprecision(2) << circlearea * flowerdepth / 3 << " cubic yards of soil for the circle and " << circlearea * flowerdepth / 6 << " cubic yards for the semicricle." << endl;
	cout << "You are going to need " << setprecision(2) << fillerarea * fillerdepth << " cubic yards of soil for the filler areas." << endl;


	return 0;
}