#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

//Project which simulates an online store. Fun and wizard-themed. 

int main() {

	char response;
	string name;
	string address;
	double price;
	double total = 0;
	char selection;
	char shipping;
	int month;
	int day;
  double item1 = 0;
	double item2 = 0;
	double item3 = 0;
	double item4 = 0;
	double item5 = 0;
  
	cout << "Welcome to the Wizard's Whistles, Widgets, and Wonderments! Please select from the following options, traveler." << endl;
	do {

		cout << "(A)ccount management" << endl;
		cout << "(S)hop for items" << endl;
		cout << "(C)heckout" << endl;
		cout << "(Q)uit" << endl;

		cin >> response;

		if (response == 'A' || response == 'a') {
			cout << "Please enter your name, traveler." << endl;
			cin.clear();
			cin.ignore();
			getline(cin, name);// allow for a 256 char name

			cout << "Now, enter the full address of the location you want your wares delivered, traveler." << endl;
			cin.clear();
			cin.ignore(); 
			getline(cin, address);// allow for a 256 char name
		}

		if (response == 's' || response == 'S') {
			cout << "Please select from the following items, traveler." << endl;
			do {

				cout << "(1) Pickled spider eggs in a ragu sauce. - 50 gems" << endl;
				cout << "(2) A minor fireball staff. - 700 gems" << endl;
				cout << "(3) A freshly shined whistle. - 200 gems" << endl;
				cout << "(4) A common widget - 100 gems" << endl;
				cout << "(5) A pouch of healing herbs. - 420 gems" << endl;
				cout << "(G)o back to the main menu." << endl;

				cin >> selection;
				if (selection == '1') {
					price = 50;
					cout << "How many would you like to purchase?" << endl;
					cin >> item1;
					if (item1 <= 0) {
						while (item1 <= 0) {
							cout << "If you wanted to summon items out of thin air, you should have gone to a spell shop..." << endl;
								cin >> item1;
						}
					}
					total = total + (price * item1);
				}

				if (selection == '2') {
					price = 700;
					cout << "How many would you like to purchase?" << endl;
					cin >> item2;
					while (item2 <= 0) {
						cout << "If you wanted to summon items out of thin air, you should have gone to a spell shop..." << endl;
						cin >> item2;
					}
					total = total + (price * item2);
				}

				if (selection == '3') {
					price = 200;
					cout << "How many would you like to purchase?" << endl;
					cin >> item3;
					while (item3 <= 0) {
						cout << "If you wanted to summon items out of thin air, you should have gone to a spell shop..." << endl;
						cin >> item3;
					}
					total = total + (price * item3);
				}

				if (selection == '4') {
					price = 100;
					cout << "How many would you like to purchase?" << endl;
					cin >> item4;
					while (item4 <= 0) {
						cout << "If you wanted to summon items out of thin air, you should have gone to a spell shop..." << endl;
						cin >> item4;
					}
					total = total + (price * item4);
				}

				if (selection == '5') {
					price = 420;
					cout << "How many would you like to purchase?" << endl;
					cin >> item5;
					while (item5 <= 0) {
						cout << "If you wanted to summon items out of thin air, you should have gone to a spell shop..." << endl;
						cin >> item5;
					}
					total = total + (price * item5);
				}

				if (selection == 'g' || selection == 'G') {
					cout << "Back to the menu, then" << endl;
				}
				if (selection == 'c' || selection == 'C') {
					cout << "To checkout it is!" << endl;
				}



				cout << "Would you like to purchase something else?" << endl;

			} while (selection != 'G' && selection != 'g' && selection != 'C' && selection != 'c');
		}
		if (response == 'c' || response == 'C') {
			if (total == 0) {
				cout << "Hey, I have goblins to feed!" << endl;
			}
			else {
				cout << "Very well traveler. You ordered:" << endl;

				double item1check = item1; 
				double item2check = item2;
				double item3check = item3;
				double item4check = item4;
				double item5check = item5;

				if (item1check > 0) {
					cout << item1check << " jars of pickled spider eyeballs." << endl;
				}

				if (item2check > 0) {
					cout << item2check << " cute little fire staffs. Adorable." << endl;
				}

				if (item3check > 0) {
					cout << item3check << " whistles so clean you could eat out of 'em!" << endl;
				}

				if (item4check > 0) {
					cout << item4check << " common widgets. A thousands and one uses!" << endl;
				}

				if (item5check > 0) {
					cout << item5check << " bags of healing herbs. Try not to light them on fire." << endl;
				}

				cout.setf(ios::fixed);
				cout.precision(2);
				cout << "For a total of " << total*1.0875 << " With the king's tax " << endl;

				cout << "Now, when would you like it delivered?" << endl;
				cout << "Enter the month 1-12" << endl;
				
				cin >> month;
				
				while (month < 1 || month > 12) {
				cout << "I knew peasents couldn't read but I would think you could at least count." << endl;
				cin >> month;
				}

				cout << "Now, enter the day 1-31" << endl;
				cin >> day;
				
				while (day < 1 || day > 31) {
					cout << "I knew peasents couldn't read but I would think you could at least count." << endl;
					cin >> day;
				}

				cout << "Very well, traveler. Your delivery date is " << month << "/" << day << "." << endl;

				cout << "Now how would you like it delivered?" << endl;
				cout << "(C)arrier peasent. 5 days" << endl;
				cout << "(E)ast empire company shipping. 2 days." << endl;
				cout << "(D)elivery dragon. Overnight." << endl;
				cin >> shipping;

				if (shipping == 'c' || shipping == 'C') {

					day = day + 5;

					if (day > 31) {
						day = day - 31;
						month = month + 1;
						if (month > 13) {
							month = month - 12;
						}
					}

					cout << "I'll get Barry right on it. This makes your arrival date " << month << "/" << day << "." << endl;
				}

				else if (shipping == 'e' || shipping == 'E') {

					day = day + 2;

					if (day > 31) {
						day = day - 31;
						month = month + 1;
						if (month > 13) {
							month = month - 12;
						}
					}

					cout << "Good. Less work for us. Your arrival date is now " << month << "/" << day << "." << endl;
				}

				else if (shipping == 'd' || shipping == 'D') {

					day = day + 1;

					if (day > 31) {
						day = day - 31;
						month = month + 1;
						if (month > 13) {
							month = month - 12;
						}
					}

					cout << "Great, now I have to summon a whole dragon. *sigh* Your delivery will be on " << month << "/" << day << "." << endl;
				}

				else {
					day = day + 5;

					if (day > 31) {
						day = day - 31;
						month = month + 1;
						if (month > 13) {
							month = month - 12;
						}
					}

					cout << "Uhh... peasent it is! Barry will have it to you by " << month << "/" << day << "." << endl;
				}

				cout << "Alright than Sir " << name << "." << endl;
				cout << "Your order will arrive on " << month << "/" << day << " at " << address << endl;
				cout << "For a total of " << total << "gems." << endl;
				cout << "Thank you for shopping at my humble emporium." << endl;


			}
		}

	} while (response != 'q' && response != 'Q');

	return 0;
}