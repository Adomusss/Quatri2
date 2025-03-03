#include <iostream>
using namespace std;

int* combinar(int arr1[], int arr2[], long1, long2){
    int i, j, k = 0;
    int *arr3 = (int*)malloc((long1 + long2)*sizeof(int));
    while(i < long1 and j < long2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            ++i
        }else{
            arr3[k] = arr2[j];
            ++j
        }
        ++k
    }
    for(int l = i; l < long1; ++l){
        arr3[k] = arr1[l];
        ++k
    }
    for(intl = j;l< long2;++i){
        arr3[k] = arr2[l];
        ++k
    }
    return arr3;
}
