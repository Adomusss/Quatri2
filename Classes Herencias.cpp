#include <iostream>
using namespace std;
#include <vector>

class point1d {
public:
	int x;
	void setX(int X) { x = X; }
};

class point2d : public point1d {
public:
	int y;
	void setY(int Y) { y = Y; }
};

class point3d : public point2d{
public:
	int z;
	void setZ(int Z) { z = Z; }
};

int main() {
	point1d p1; 
	p1.setX(1);
	cout << p1.x << endl;

	point2d p2;
	p2.setY(2); p2.setX(2);
	cout << p2.x << " " << p2.y << endl;

	point3d p3;
	p3.setX(3); p3.setY(3); p3.setZ(3);
	cout << p3.x << " " << p3.y << " " << p3.z << endl;
}
