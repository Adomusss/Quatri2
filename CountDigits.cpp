#include <iostream>
using namespace std;

int recursive_digits(int n) {
	if (n < 10) return 1;
	else return 1 + recursive_digits(n / 10);
	
}
int main() {
	cout << recursive_digits(685201);
	

	return 0;
}
