# Study_C_02
#include <iostream>
using namespace std;

int main()
{
	int n;
	int a, b;
	int x, y;
	int m[3][10] = { 0 };


	while (1)
	{
		cout << "좌석을 예약하시겠습니까? (1 또는 0)" << endl;
		cin >> n;

		if (n == 0) {
			cout << "좌석 예약 종료" << endl;
			break;
		}

		else if (n == 1)
		{
			cout << "현재의 좌석은 다음과 같습니다." << endl;
			cout << "-----------------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-----------------------------------------------" << endl;

			for (a = 0; a < 3; a++)
			{
				for (b = 0; b < 10; b++)
				{
					cout << m[a][b] << " ";
				}
				cout << endl;
			}
		}

		else
		{
			cout << "1번 또는 0번만 입력하세요." << endl;
			
		}

		while (n == 1)
		{
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
			cin >> x >> y;

			if (m[x - 1][y - 1] == 0)
			{
				cout << "예약되었습니다." << endl;
				m[x - 1][y - 1] = 1;
				cout << "-----------------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "-----------------------------------------------" << endl;

				for (a = 0; a < 3; a++)
				{
					for (b = 0; b < 10; b++)
					{
						cout << m[a][b] << " ";
					}
					cout << endl;
				}
			}

			else if (m[x - 1][y - 1] == 1)
			{
				cout << "이미 예약된 자리입니다." << endl;
			}
		}
	}
}
