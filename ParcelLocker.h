//
// Created by Mytthew on 24.06.2020.
//

#ifndef PACZKOMAT_PARCELLOCKER_H
#define PACZKOMAT_PARCELLOCKER_H

#include "Box.h"

class ParcelLocker {
public :
	Box** arr = new Box*[5];

	void montageBox(int i, Box *box) {
		arr[i] = box;
	}

	bool putPackage(int i, int height, int width) const {
		if (arr[i]->isFull()) {
			return false;
		}
		if (arr[i]->getHeight() < height || arr[i]->getWidth() < width) {
			return false;
		}
		arr[i]->setFull(true);
		return true;
	}

	bool putOutPackage(int i) {
		if (!arr[i]->isFull()) {
			return false;
		}
		arr[i]->setFull(false);
		return true;
	}
};
#endif
