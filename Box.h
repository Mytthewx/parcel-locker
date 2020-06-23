//
// Created by Mytthew on 24.06.2020.
//

#ifndef PACZKOMAT_BOX_H
#define PACZKOMAT_BOX_H


class Box {
private:
	int height;
	int width;
	bool full = false;

public:
	Box(int height, int width) : height(height), width(width) {}

	int getHeight() const {
		return height;
	}

	int getWidth() const {
		return width;
	}

	bool isFull() const {
		return full;
	}

	void setFull(bool full) {
		this->full = full;
	}
};


#endif //PACZKOMAT_BOX_H
