#include <iostream>
using namespace std;


int main() {
    int num = 3;
    cout << "num adress: " << & num << endl;
    int* point = &num;
    cout << "ptr adress: " << point << endl;
    cout << "value of the updated pointer: " << *point << endl;
    *point = 6;
    cout << "value of the updated number: " << num << endl;

    



    return 0;
}
