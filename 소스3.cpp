#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; // 포인터 선언을 위해서 변수 앞에 *을 붙임
	ptr = &a; // 포인터 초기화를 위해서 변수 앞에 &를 붙임 

	cout << "변수 a의 주소는 :" << &a << endl; // 변수 a의 주소값을 출력
	cout << "a의 값은 :" << ptr << endl; // 변수 a의 값을 출력

}
