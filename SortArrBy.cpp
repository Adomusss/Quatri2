#include <iostream>
using namespace std;
#include <vector>

//int minFInd(int arr[], int size, int index) {
//	int min = arr[index];
//	int count = 0;
//	int aux;
//	for (int i = index + 1; i < size; ++i) {
//
//
//		if (arr[i] < min) {
//			min = arr[i];
//			aux = min;
//			count = i;
//
//		}
//
//
//
//	} return count;
//	cout << count;
//}

int findSmalles(vector<int> v1, int index) {
	int pos = index; int min = v1[index];
	for (int i = index + 1; i < v1.size(); ++i) {
		if (v1[i] < min) {      //si v1[i] es mas pequeño, actualiza min y cambia la pos al de i
			min = v1[i];
			pos = i;
		}
	}return pos;              //returna a que pos tendrá que volver a empezar la siguiente vez
}


void selectionSortVec(vector <int>& v1) {
	for (int i = 0; i < v1.size() - 1; ++i) {    
		int index = findSmalles(v1, i);          //actualizamos el valor de index con el resultado de FindSmalles => pos
		swap(v1[i], v1[index]);                  //hace un swap de v1[i] y v1[index=>pos]?
	}
}

//void selectionSortArr(int arr[], int size, int index) {
//	for (int i = 0; i < size - 1; ++i) {
//		int Nindex = minFInd(arr, size, index);
//		swap(arr[i], arr[Nindex]);
//	}
//}
int main() {
	int arr[5] = { 1, 8, 5, 2, 4 };
	vector <int> v1 = { 1, 8, 5, 2, 4 };
	
	
	selectionSortVec(v1);
	//selectionSortArr(arr, 5, 0);
	for (int i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " " << endl;
	}
	return 0;
}
