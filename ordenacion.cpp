#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector <int>& v1, int left, int right, int value) {
	if (left > right) return false;
	int mid = left + (right - left) / 2; // la mitad de los dos
	if (v1[mid] == value) return true;
	else if (value < v1[mid]) return binarySearch(v1, left, mid - 1, value);	//mid ya lo hemos revisado así que -1, y ahora updateamos right a mid -1
	else return binarySearch(v1, mid + 1, right, value); // ahora updateamos el left
}

void merge(int* arr, int low, int high, int mid) {
	int i, j, k, c[50];
	i = low;
	k = low;
	j = mid + 1;

	while (i <= mid && j <= high) {
		if (arr[i] < arr[j]) {
			c[k] = arr[i];
			k++; i++;
		}
		else {
			c[k] = arr[j];
			k++; j++;
		}
	}
	while (i <= mid) {
		c[k] = arr[i];
		k++; i++;
	}while (j <= high) {
		c[k] = arr[j];
		k++; j++;
	}for (i = low; i < k; ++i) {
		arr[i] = c[i];
	}
}


//int partition(int arr[], int low, int high) {
//	int pivot = arr[high];
//	int i = (low - 1);
//	for (int j = low; j <= high - 1; ++j) {
//		if (arr[j] <= pivot) {
//			++i;
//			swap(&arr[i], &arr[j]);
//		}
//	}
//}
int main() {

}
