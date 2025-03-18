#include <iostream>
#include <vector>
using namespace std;

#define nigga void

class SimObject {
private:
	string name;
public:
	int price;
	SimObject() {};
	SimObject(string name, int price) {
		this->name = name;
		this->price = price;
	}
	string getname() { return name; }
	int getprice() { return price; }
};

class Furniture : public SimObject {
public:
	int comfort;
	string category;
	
	Furniture():SimObject() {};
	Furniture(string name, int comfort, int price, string category) : SimObject(name, price){
		this->comfort = comfort;
		this->category = category;
	}
	string getcategory() { return category; }
	int getcomfort() { return comfort; }
};

class Sim : public SimObject {
public:
	int age;
	string energy;
	int mood;
	Sim() :SimObject() {};
	Sim(string energy, int age, int mood, int price, string name) : SimObject(name, price){
		this->age = age;
		this->energy = energy;
		this->mood = mood;
	}
	string getenergy() { return energy; }
	int getage() { return age; }
	int getmood() { return mood; }
};

class Adult : public Sim {
public:
	string job;
	int salary;
	Adult() :Sim() {};
	Adult(string job, int salary, string name, int age, string energy, int mood ) : Sim(energy, age, mood, price, name){
		this->job = job;
		this->salary = salary;
		
	}
	string getjob() { return job; }
	int getsalary() { return salary; }
};

class Child : public Sim {
public:
	int schoolGrade;
	string FavoriteToy;
	Child() :Sim() {};
	Child(string FavoriteToy, int schoolGrade, string energy, int age, int mood, int price, string name) : Sim(energy, age, mood, price, name) {
		this->FavoriteToy = FavoriteToy;
		this->schoolGrade = schoolGrade;

	}
	int getschoolGrade() { return schoolGrade; }
	string getFavoriteToy() { return FavoriteToy; }
};

nigga negro(){
	int comfort;
	string category;
	int prize;
	int n = 1;
	string name;
	vector<Furniture> f;
	
	cout << "nº of furnitures: " << endl;
	cin >> n;
	for (int i = 0; i < n;++i) {
		
		cout << endl << "Name " << i + 1 << endl;
		cin >>name;
		cout << "Prize " << endl;
		cin >> prize;
		cout << "Comfort " << endl;
		cin >> comfort;
		cout << "Category " << endl;
		cin >> category;

		f.push_back(Furniture(name, prize, comfort, category));
	}
	for (int i = 0; i < n;++i) {
		cout << endl << endl << "Name: " << f[i].getname() << endl;
		
		cout << "Prize: " << f[i].getprice() << endl;
		
		cout << "Comfort: " << f[i].getcomfort() << endl;
		cout << "Category: " << f[i].getcategory() << endl;
		


	}
}

int main() {
	vector <SimObject> s;

	negro();

	return 0;
}
