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
		cout << "�¼��� �����Ͻðڽ��ϱ�? (1 �Ǵ� 0)" << endl;
		cin >> n;

		if (n == 0) {
			cout << "�¼� ���� ����" << endl;
			break;
		}

		else if (n == 1)
		{
			cout << "������ �¼��� ������ �����ϴ�." << endl;
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
			cout << "1�� �Ǵ� 0���� �Է��ϼ���." << endl;
			
		}

		while (n == 1)
		{
			cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
			cin >> x >> y;

			if (m[x - 1][y - 1] == 0)
			{
				cout << "����Ǿ����ϴ�." << endl;
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
				cout << "�̹� ����� �ڸ��Դϴ�." << endl;
			}
		}
	}
}