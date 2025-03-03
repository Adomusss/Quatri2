#include <iostream>
using namespace std;
int* sumarArrays(int arr1[], int long1, int arr2[], int long2) {
	// max nos dice cual es mas grande
	int l3 = max(long1, long2);

	int* fused = (int*)malloc(l3 * sizeof(int*));

	for (int i = 0; i < long1; ++i) {
		//fusiona las dos
			fused[i] = arr1[i] + arr2[i];
		
		
	}//los ifs añaden los valores restantes del array mas grande
	if (long1 > long2) {
		for (int i = long2; i < long1; ++i) {
			fused[i] = arr1[i];

		}
	}
	if (long2 > long1) {
		for (int i = long1; i < long2; ++i) {
			fused[i] = arr2[i];
		}
	}
		
		return fused;
	
}
int main()
{
	//scanf longitudes
	cout << "enter the length of both arrays:" << endl;
	int longitud1, longitud2;
	cin >> longitud1 >> longitud2;
	//scanf arrays
	int* arr1 = (int*)malloc(longitud1 * sizeof(int));
	int* arr2 = (int*)malloc(longitud2 * sizeof(int));

	cout << "enter the array1:" << endl;
	for (int i = 0; i < longitud1; ++i) {
		cin >> arr1[i];
	}
	cout << "enter the array2:" << endl;
	for (int i = 0; i < longitud2; ++i) {
		cin >> arr2[i];
	}

	//max de nuevo
	int l3 = max(longitud1, longitud2);
	//hace la funcion de antes con la nueva info
	int* resultat = sumarArrays(arr1, longitud1, arr2, longitud2);
	cout << "L'arr combinao es:" << endl;
	for (int i = 0; i < l3; ++i) {
		cout << resultat[i] << " " << endl;
	}
	free(resultat);
	return 0;
}
