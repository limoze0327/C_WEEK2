#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr;
	ptr = &a;

	cout << "변수 a의 주소는 :" << &a << endl;
	cout << "a의 값은 :" << a << endl;

}
