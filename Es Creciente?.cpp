bool CreixentOrNot(int n) {

	if (n < 10) return true;
	if (n%10<(n/10)%10) return false;
	return CreixentOrNot(n / 10);
}
int main() {
	cout << CreixentOrNot(4528);

	return 0;
}
