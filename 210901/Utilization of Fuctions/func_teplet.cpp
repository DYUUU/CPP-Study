#include <iostream>

using namespace std;

// class 혹은 typename
template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main()
{
	// 함수 템플릿
	// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int a = 3;
	int b = 4;
	//cout << sum(a, b) << endl;
	// 두 함수 모두에 매칭되기 때문에 사용할 수 없다. 
	
	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;

	return 0;
}

template<class Any>
Any sum(Any  a, Any b)
{
	return a+b;
}

template<class Any>
Any sum(int a, Any b)
{
	return a+b	;
}
