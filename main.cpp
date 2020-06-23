/*
 * Copyright Mytthew (c) 2020. Copying and modifying not allowed.
 * Autor: Mateusz Domagała
*/

#include <iostream>
#include "Box.h"
#include "ParcelLocker.h"

using namespace std;

int main() {
	int selection = 0;
	int selectBox = 0;
	int height = 0;
	int width = 0;
	bool repeat = true;
	ParcelLocker* p = new ParcelLocker;
	Box* box1 = new Box(20, 20);
	Box* box2 = new Box(20, 20);
	Box* box3 = new Box(20, 20);
	Box* box4 = new Box(20, 20);
	Box* box5 = new Box(20, 20);
	Box* box6 = new Box(20, 20);
	p->montageBox(0, box1);
	p->montageBox(1, box2);
	p->montageBox(2, box3);
	p->montageBox(3, box4);
	p->montageBox(4, box5);
	p->montageBox(5, box6);
	while (repeat) {
		cout << "Menu: " << endl;
		cout << "0. Exit" << endl;
		cout << "1. Add package to parcel locker" << endl;
		cout << "2. Take out package from parcel locker" << endl;
		cin >> selection;
		if (selection == 1) {
			cout << "Select box (0 - 5): " << endl;
			cin >> selectBox;
			cout << "Type height of package: " << endl;
			cin >> height;
			cout << "Type width of package: " << endl;
			cin >> width;
			if (!p->arr[selectBox]->isFull()) {
				if (p->putPackage(selectBox, height, width)) {
					cout << "Added successfully." << endl;
				} else {
					cout << "Package is too big." << endl;
				}
			} else {
				cout << "Box is full." << endl;
			}
		} else if (selection == 2) {
			cout << "Select box (0 - 5): " << endl;
			cin >> selection;
			if (p->putOutPackage(selection)) {
				cout << "Package taken out. Box is empty now." << endl;
			} else {
				cout << "Box is empty." << endl;
			}
		} else if (selection == 0) {
			cout << "Closing program...";
			_sleep(1000);
			return 0;
		} else {
			cout << "Wrong choice. " << endl;
		}
	}
}
