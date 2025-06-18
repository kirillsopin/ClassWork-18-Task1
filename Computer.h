#pragma once
#include <iostream>
using namespace std;
struct computer {
	char name[100];
	int ram = 0;
	float price = 0;

	void ShowInfo() {
		cout << "Name; " << name << endl;
		cout << "Ram; " << ram << endl;
		cout << "Price; " << price << endl;
	}
};

