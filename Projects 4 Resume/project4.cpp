#include <iostream>
#include <array>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//Program to calculate employee wages given employment status, insurance plan, and salary plan.

void fileread(string filename) { 

	ifstream reading(filename);
	ofstream readto;

	int failures = 0;
	int deduction[16];

	string paytype[16];
	//salary employees have a flat pay
	//part employees have no health plan
	//full employees have standard hours*payrate

	int employeeid[16];


	string name[16];
	string health[16];
	string failholder;

	double hours[16];
	double payrate[16];
	double grosspay[16];
	double tax[16];


	for (int i = 0; i < 16; i++) {
		string failholder;

		reading >> paytype[i];

		if (paytype[i] == "Salary") {

			reading >> employeeid[i];

			reading >> name[i];

			reading >> health[i];

			if (health[i] == "Cadillac") {
				deduction[i] = 75;
			}
			if (health[i] == "Standard") {
				deduction[i] = 25;
			}
			if (health[i] == "Basic") {
				deduction[i] = 10;
			}

			else {
				getline(reading, failholder); // puts the invalid line into failholder, which will whisk it away to a comfy void of nothingness
				failures = failures + 1;
				continue;
			}

			reading >> grosspay[i];

			if (grosspay[i] < 500) {
				grosspay[i] = grosspay[i] * 0.9;
			}
			if (grosspay[i] > 500 && grosspay[i] < 1000) {
				grosspay[i] = grosspay[i] * 0.85;
			}
			if (grosspay[i] > 1000) {
				grosspay[i] = grosspay[i] * 0.75;
			}

		}

		if (paytype[i] == "Full") {

			reading >> employeeid[i];

			reading >> name[i];

			reading >> health[i];

			if (health[i] == "Cadillac") {
				deduction[i] = 75;
			}
			if (health[i] == "Standard") {
				deduction[i] = 25;
			}
			if (health[i] == "Basic") {
				deduction[i] = 10;
			}

			else {
				getline(reading, failholder); // puts the invalid line into failholder, which will whisk it away to a comfy void of nothingness
				failures = failures + 1;
				continue;
			}

			reading >> hours[i];

			reading >> payrate[i];

			if (hours[i] <= 40) {
				grosspay[i] = hours[i] * payrate[i];
			}
			if (hours[i] > 40) {
				grosspay[i] = payrate[i] * 40;
				grosspay[i] = grosspay[i] + ((hours[i] - 40) * (payrate[i] * 1.5));
			}

			if (grosspay[i] < 500) {
				tax[i] = grosspay[i] * 0.1;
			}
			if (grosspay[i] > 500 && grosspay[i] < 1000) {
				tax[i] = grosspay[i] * 0.15;
			}
			if (grosspay[i] > 1000) {
				tax[i] = grosspay[i] * 0.25;
			}

		}

		if (paytype[i] == "Part") {

			reading >> employeeid[i];

			reading >> name[i];

			reading >> hours[i];

			reading >> payrate[i];

			if (hours[i] <= 40) {
				grosspay[i] = hours[i] * payrate[i];
			}
			if (hours[i] > 40) {
				grosspay[i] = payrate[i] * 40;
				grosspay[i] = grosspay[i] + ((hours[i] - 40) * (payrate[i] * 1.5));
			}

			if (grosspay[i] < 500) {
				tax[i] = grosspay[i] * 0.1;
			}
			if (grosspay[i] > 500 && grosspay[i] < 1000) {
				tax[i] = grosspay[i] * 0.15;
			}
			if (grosspay[i] > 1000) {
				tax[i] = grosspay[i] * 0.25;
			}

		}
		else {
			getline(reading, failholder); // puts the invalid line into failholder, which will whisk it away to a comfy void of nothingness
			failures = failures + 1;
			continue;
		}

		readto.open("totalfile.txt");

		if (i = 0) {
			readto << "ID	Name  Gross		Health	  Tax	  Net" << endl;
		}

		readto << employeeid[i] << " " << name[i] << " " << deduction[i] << "$  " << tax[i] << "$ " << grosspay[i] - (tax[i] + deduction[i]);


	}

	cout << "Failed inputs: " << failures;
}

int main() {

	fileread("Reno.txt");
	fileread("Vegas.txt");

	ifstream reading("totalfile.txt");

	
}
