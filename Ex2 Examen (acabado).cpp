#include <iostream>
#include <vector>
using namespace std;

int* intersectArrays(int arr1[], int len1, int arr2[], int len2, int &lenresult) {
	int* finalArr; lenresult = 0;
	
	if (len1 < len2) {
		finalArr = new int[len1];
	}
	else {
		finalArr = new int[len2];
	}
	
	
	for (int i = 0; i < len1; ++i) {
		for (int j = 0; j < len2; ++j) {

			if (arr1[i] == arr2[j]) {
				
				finalArr[lenresult] = arr1[i];
				lenresult++;
			}
		}
		
		
	}return finalArr; 
}

int main() {
	int arr1[] = {1, 3, 5, 7, 8, 12, 9}; 	int arr2[] = { 2, 3, 5, 8, 9, 10 };
	int* arr3 = new int;
	int lenResult;
	int* result = intersectArrays(arr1, 7, arr2, 6, lenResult);
	for (int i = 0; i < lenResult; ++i) {
		cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}
