#include <iostream>;
using namespace std;
#include <vector>;

class Personatge //fer toto virtual
{
private:
	string name = " ";
	int lvl = 1;
	void lvlUp(int newlvl) {
		modificar_nivell(newlvl);
	}
protected:
	int vida = 100;
	virtual void curar() = 0;
public:
	Personatge() {}

	Personatge(string name, int vida, int lvl) {
		this->name = name;
		this->vida = vida;
		this->lvl = lvl;
	}
	void modificar_nivell(int newlvl) {
		this->lvl = newlvl;
	}

	string getName() { return this->name; }
	int getVida() { return this->vida; }
	int getLVL() { return this->lvl; }
};


class Mago : public Personatge {
private:
	int MP = 10;
	int mana = 100;
public:
	Mago() : Personatge() {}
	Mago(string name, int vida, int lvl, int MP, int mana) : Personatge(name, vida, lvl) {
		this->mana = mana;
		this->MP = MP;
	}
	void curar() override {
		vida += 5;
	}
	int getMP() { return this->MP; }
	int getmana() { return this->mana; }
};

class Guerrer : public Personatge {
private:
	int FP = 10;
public:
	Guerrer() : Personatge() {}
	Guerrer(string name, int vida, int lvl, int FP) : Personatge(name, vida, lvl) {
		this->FP = FP;
	}
	void curar() override {
		vida += 15;
	}
	int getFP() { return this->FP; }
};

class Arquer : public Personatge {
private:
	int Range = 50;
public:
	Arquer() : Personatge() {}
	Arquer(string name, int vida, int lvl, int Range) : Personatge(name, vida, lvl) {
		this->Range = Range;
	}
	void curar() override {
		vida += 10;
	}
	int getrange() { return this->Range; }
};

void healthCheck(vector<Mago>& m, int mNum) {
	cout << "Which Mage would you like to heal?" << endl;
	cin >> mNum;
	mNum--;
	m[mNum].curar();
	cout << "Mage " << mNum + 1 << "\n" << endl;
	cout << "Name: " << m[mNum].getName() << endl;
	cout << "Health: " << m[mNum].getVida() << endl;
	cout << "Level: " << m[mNum].getLVL() << endl;
	cout << "Magic Power: " << m[mNum].getMP() << endl;
	cout << "Mana: " << m[mNum].getmana() << endl;
	cout << "\n\n" << endl;

}

void partyPrinter(vector<Mago>& m, int mNumber, vector<Guerrer>& g, int gNumber, vector<Arquer>& a, int aNumber) {
	cout << "Which members of the party would you like to see? Mage/s | Warrior/s | Archer/s (introduce M/W/A) \n If you would like to stop type 's'" << endl;
	char type;
	cin >> type;


	while (type != 's' && type != 'S') {
		if (type == 'm' || type == 'M') {
			if (mNumber == 0) {
				cout << "There are no Mages in the party" << endl;
			}
			else {
				for (int i = 0; i < mNumber; i++) {
					cout << "Mage " << i + 1 << "\n" << endl;
					cout << "Name: " << m[i].getName() << endl;
					cout << "Health: " << m[i].getVida() << endl;
					cout << "Level: " << m[i].getLVL() << endl;
					cout << "Magic Power: " << m[i].getMP() << endl;
					cout << "Mana: " << m[i].getmana() << endl;
					cout << "\n\n" << endl;
				}
			}
		}
		else if (type == 'w' || type == 'W') {
			if (gNumber == 0) {
				cout << "There are no Warriors in the party" << endl;
			}
			else {
				for (int i = 0; i < gNumber; i++) {
					cout << "Warrior " << i + 1 << "\n" << endl;
					cout << "Name: " << g[i].getName() << endl;
					cout << "Health: " << g[i].getVida() << endl;
					cout << "Level: " << g[i].getLVL() << endl;
					cout << "Fisic Power: " << g[i].getFP() << endl;
					cout << "\n\n" << endl;
				}
			}
		}
		else if (type == 'a' || type == 'A') {
			if (aNumber == 0) {
				cout << "There are no Archers in the party" << endl;
			}
			else {
				for (int i = 0; i < aNumber; i++) {
					cout << "Archer " << i + 1 << "\n" << endl;
					cout << "Name: " << a[i].getName() << endl;
					cout << "Health: " << a[i].getVida() << endl;
					cout << "Level: " << a[i].getLVL() << endl;
					cout << "Range: " << a[i].getrange() << endl;
					cout << "\n\n" << endl;
				}
			}
		}
		else {
			cout << "You dumb bitch >:(" << endl;
		}
		cout << "\n\n\n" << endl;
		cout << "Which members of the party would you like to see? Mage/s | Warrior/s | Archer/s (introduce M/W/A) \n If you would like to stop type 's'" << endl;
		cin >> type;
	}
}

int main() {

	int mNumber = 1;
	string mName;
	vector <Mago> m;

	cout << "Introduce the number of Mages in your party" << endl;
	cin >> mNumber;
	if (mNumber > 0) {
		for (int i = 0; i < mNumber; i++) {
			cout << "Which is the name of the Mage " << i + 1 << endl;
			cin >> mName;

			m.push_back(Mago(mName, 700, 1, 75, 400));
			cout << "\n" << endl;
		}
	}

	int gNumber = 1;
	string gName;
	vector <Guerrer> g;

	cout << "Introduce the number of Warriors in your party" << endl;
	cin >> gNumber;
	if (gNumber > 0) {
		for (int i = 0; i < gNumber; i++) {

			cout << "Which is the name of the Warrior " << i + 1 << endl;
			cin >> gName;

			g.push_back(Guerrer(gName, 1200, 1, 67));
			cout << "\n" << endl;
		}
	}

	int aNumber = 1;
	string aName;
	vector <Arquer> a;

	cout << "Introduce the number of Archers in your party" << endl;
	cin >> aNumber;
	if (aNumber > 0) {
		for (int i = 0; i < aNumber; i++) {

			cout << "Which is the name of the Archers " << i + 1 << endl;
			cin >> aName;

			a.push_back(Arquer(aName, 800, 1, 150));
			cout << "\n" << endl;
		}
	}

	partyPrinter(m, mNumber, g, gNumber, a, aNumber);
	healthCheck(m, mNumber);

	return 0;
}
