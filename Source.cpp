#include <iostream>
using namespace std;

int main() {

		long long int p = 1;
	int num, i = 1, a, b, c;
	cout << "Please, enter value: " << endl;
	cin >> num;

	while ( p * 10 <= num)
	{
		p *=10;
	} 

	do {

		a = num / p;
		
		if (a != 3 and a != 6) {

			cout << a << " ";
		}
		num %= p;
		p /= 10;

	} while (p);

	return 0;
}