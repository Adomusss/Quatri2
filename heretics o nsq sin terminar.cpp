#include <iostream>
using namespace std;
#include <vector>;

class building {
protected:
	string name;
public:
	building(){}
	string getName() { return name; }
	
	

};

class warehouse : public building{
private:
	int wood, rocks, wheat;
public:
	warehouse(){}
	warehouse(string name, int wood, int rocks, int wheat) {
		this->wood = wood;
		this->rocks = rocks;
		this->wheat = wheat;
	}
	void printresources() {
		cout << "wood: " << wood << endl << "rocks: " << rocks << endl << "wheat: " << wheat;
	}

};

class house : public building {
private:
	int floors, inhabitants, servants;
public:
	house() {}
	house(string name, int floors, int inhabitants, int servants) {
		this->floors = floors;
		this->inhabitants = inhabitants;
		this->servants = servants;
	}
	void printresources() {
		cout << "floors: " << floors << endl << "inhabitants: " << inhabitants << endl << "servants: " << servants;
	}
};

int main() {
	warehouse w("East Warehouse", 10, 20, 30);
	house h("Agripa's house", 2, 5, 10);

	std::cout << "Warehouse name: " << w.getName() << std::endl << std::endl;

	w.printresources();
	h.printresources();

	system("pause");
	return 0;
}
