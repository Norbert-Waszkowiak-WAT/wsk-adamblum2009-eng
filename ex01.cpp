#include<iostream>
using namespace std;
int main() {
	int x = 42;
	int* p = &x;
	cout << p << endl;
	cout << *p<<endl;
	x = *p = 5;
	cout << x << endl;
	return 0;
}