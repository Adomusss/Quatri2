#include <iostream>
using namespace std;
#include <vector>

struct Invent {
	string nom;
	int codi;
	int preu;
	int estock;
};

int main() {
	int vtr[5] = { 3, 5, 7, 9, 1 };

	int n;
	cout << "numero de productos" << endl;
	cin >> n;

	vector <Invent> inventario(n);

	for (int i = 0; i < n; ++i) {
		cout << "\nProducto " << i + 1 << ":" << endl;
		cout << "Dame el nombre: ";
		cin >> inventario[i].nom;
		cout << "Dame el codi: ";
		cin >> inventario[i].codi;
		cout << "Dame el preu: ";
		cin >> inventario[i].preu;
		cout << "Dame el estock: ";
		cin >> inventario[i].estock;

		
	}for (int i = 0; i < n; ++i) {
		cout << "Nombre: \t" << inventario[i].nom << endl;
		cout << "Codi: \t" << inventario[i].codi << endl;
		cout << "Preu: \t" << inventario[i].preu << endl;
		cout << "estock: \t" << inventario[i].estock << endl;
		}
	



}
