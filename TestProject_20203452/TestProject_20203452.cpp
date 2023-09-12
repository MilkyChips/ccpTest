// TestProject_20203452.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;



int calculator(int &c, int &d, char e) {

	int calculated = 0;

	switch (e)
	{
	case '+': 
		calculated = c + d;
		break;
	case '-':
		calculated = c - d;
		break;
	case '*':
		calculated = c * d;
		break;
	case'/':
		calculated = c / d;
		break;
			
	default:
		cout << " +, -, *, / 중 하나를 입력하거나 숫자를 입력하세요" << endl;
		break;
	}

	cout << c << " 와 " << d << " 을(를) 계산한 결과값은 " << calculated << " 입니다." << endl;

	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	char c = '+';

	cout << "숫자 2개와 연산자를 차례대로 입력하시오." << endl;

	cin >> a >> b >> c;


	calculator(a, b, c);

	return 0;
}

int calculator(int& c, int& d, char e);