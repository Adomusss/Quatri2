#include <iostream>
#include <vector>
using namespace std;

int* intersectArrays(int arr1[], int len1, int arr2[], int len2, int &lenresult) {
	int* finalArr;
	
	if (len1 < len2) {
		finalArr = new int[len1];
	}
	else {
		finalArr = new int[len2];
	}
	
	
	for (int i = 0; i < lenresult; ++i) {
		for (int j = 0; j < lenresult; ++j) {

			if (arr1[i] == arr2[j]) {
				*(arr1 + 1) = arr1[i];
				finalArr[j] = arr1[i];
				lenresult++;
			}
		}
		
		
	}return finalArr; 
}

int main() {
	int arr1[] = {1, 3, 5, 7, 9}; 	int arr2[] = { 2, 3, 5, 8, 9, 10 };
	int* arr3 = new int;
	int lenResult;
	int* result = intersectArrays(arr1, 5, arr2, 6, lenResult);
	for (int i = 0; i < lenResult; ++i) {
		cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}
