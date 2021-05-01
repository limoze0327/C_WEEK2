#include<iostream>
using namespace std;

int main()
{
	int n, a, b; //사용자로부터 입력받을 변수, 별을 찍기 위해서 설정한 변수 (3가지)
	cin >> n; //사용자로부터 별의 갯수를 입력받음

	for (a = 1; a <= n * 2; a++) {
		for (b = 1; b <= n; b++) {   // 짝수행이면,
			if (a % 2 == 0) {
				if (b % 2 == 0)
					cout << "*";   // 짝수열에는 별을 찍고
				else
					cout << " ";  // 홀수열은 공백으로 남겨둠

			}

			else {                                 // 홀수행이면, 
				if (b % 2 == 0)
					cout << " ";  // 짝수열은 공백으로 남겨두고
				else
					cout << "*";   // 홀수열은 별을 찍음
			}
			
		}
		cout << endl;
	}
}
