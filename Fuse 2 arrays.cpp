#include <iostream>
using namespace std;
int* combinarArraysOrdenats(int* arr1, int longitud1, int* arr2, int longitud2)
{
	int len = longitud1 + longitud2;
	int* fusion = (int*)malloc(len * sizeof(int*));
	int ctr1 = 0 , ctr2 = 0;
	for (int i = 0; i < longitud1 * 2; ++i) {
		if (i % 2 == 0) {
			fusion[i] = arr1[ctr1];
			ctr1++;
		}
		else {
			fusion[i] = arr2[ctr2];
			ctr2++;
		}
	}return fusion;
}
int main() {
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	// busqueu la forma de saber la mida de l'array
	int longitud1 = sizeof(arr1) / sizeof(int);
	int longitud2 = sizeof(arr2) / sizeof(int);
	int* resultat = combinarArraysOrdenats(arr1, longitud1, arr2, longitud2);
	std::cout << "L'array combinat ordenat és: ";
	for (int i = 0; i < longitud1 + longitud2; ++i) {
		cout << resultat[i] << " ";
	}
	cout << endl;
	// Alliberar la memòria de l'array resultat
	delete[] resultat;
	return 0;
}
