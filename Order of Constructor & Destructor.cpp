#include <iostream>
using namespace std;
#include <vector>

class point1d {
public:
	int x;
	point1d() : x(0) {
		cout << "ctor point1d" << endl;
	}
	~point1d() {
		cout << "dtor point1d" << endl;
	};
};

class point2d : public point1d{
public:
	int  y;
	point2d() : y(0) {
		cout << "ctor point2d" << endl;
	}
	~point2d() {
		cout << "dtor point2d" << endl;
	}
};

int main() {
	point2d p;
	system("pause");
	return 0;
}
