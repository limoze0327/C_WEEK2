#include<iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n;

	for (a = 1; a <= n * 2; a++) {
		if (a % 2 == 0) {
			for (b = 1; b <= n; b++) {
				if (b % 2 == 0)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
		else {
			for (b = 1; b <= n; b++) {
				if (b % 2 == 0)
					cout << " ";
				else
					cout << "*";
			}
			cout << endl;
		}
	}
}

