#include <iomanip>
#include <iostream>

using namespace std;


//Class structure along with functions meant to display time in multiple fashions
	int main() {

		class clocker {
			public;
			int hour;
			int minute;
			char enlistment;
			char getdaytime(char& enlistment) {
				cout << "Are you in the military? Y/N" << endl;
				cin >> enlistment;
				while (enlistment != 'n' || enlistment != 'N' || enlistment != 'y' || enlistment != 'Y') {
					cout << "Don't dodge the question!!!" << endl;
					cin >> enlistment;
				}
			}
			void gethour(int& hour) {
				cout << "Please enter the current hour from 0 to 23" << endl;
				cin >> hour;
				while (hour < 0 || hour > 23) {
					cout << "Try again." << endl;
					cin >> hour;
				}
			}
			void getminute(int& minute) {
				cout << "Please enter the current minute." << endl;
				cin >> minute;
				while (minute < 0 || minute > 60) {
					cout << "Try again." << endl;
					cin >> hour;
				}
			}
			void print(char enlistment) {
				if (enlistment == 'n' || enlistment == 'N') {
					if (hour <= 12) {
						cout << hour << ":" << minute << "A.M." << endl;
					}
					if (hour > 12) {
						cout << hour - 12 << ":" << minute << "P.M." << endl;
					}
				}
				if (enlistment == 'y' || enlistment == 'Y') {
					cout << hour << ":" << minute;
				}

			}
		};
	
		clocker clok;

		char response;
		while (response != 'n' || response != 'N') {
			clok.getdaytime(clok.enlistment);
			clok.gethour(clok.hour);
			clok.getminute(clok.minute);
			clok.print(clok.enlistment);
		}

		return 0;
	}