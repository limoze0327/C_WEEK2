#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr; // 포인터 선언을 위해서 변수 앞에 *을 붙임
	ptr = &a; // 포인터 초기화를 위해서 변수 앞에 &를 붙임 

	cout << "변수 a의 주소는 :" << ptr << endl; // 변수 a의 주소값을 출력
	cout << "a의 값은 :" << *ptr << endl; // a값을 출력 (죄송합니다 확인 못하고 잘못 올렸었습니다 ,, 수정했습니다)

}
