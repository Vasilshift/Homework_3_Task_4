#include <iostream>
using namespace std;

int main() {

	long long int p = 1;
	long long int num;
	int i = 1, a;
	cout << "Please, enter value: " << endl;
	cin >> num; 

	while ( p * 10 <= num)
	{
		p *=10;
	} 

	cout << "Values without 3 and 6: " << endl;

	while (p) {

		a = num / p;
		
		if (a != 3 and a != 6) {

			cout << a << " ";
		}
		num %= p;
		p /= 10;

	}

	return 0;
}