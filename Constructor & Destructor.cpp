#include <iostream>
#include <vector>
using namespace std;

class Point {
private:
	int x, y;
public:
	
	Point() {
		cout << "constructor" << endl;
		x = 0;
		y = 0;
	}
	~Point() {
		cout << "destructor " << x << " " << y << endl;
	}
	void setx(int x) {
	this->x = x;

	}
	void sety(int y) {
		this->y = y;

	}
	int getx() {
		return this->x;
	}
	int gety() {
		return this->y;
	}
};


int main() {
	Point p1;
	p1.setx(1);
	p1.sety(2);
	Point* p2 = new Point;
	p2->setx(3);
	p2->sety(4);
	cout << p1.getx() << " " << p1.gety() << endl;
	delete p2;
	return 0;
}
