#include <iostream>
using namespace std;

int main() {
	int num1, num2; // 입력할 숫자 2개
	int temp; // 임시저장 변수
	char n1[3], n2[3]; // 거꾸로 바꾸기 위한 문자열
	cin >> num1 >> num2; // 2개 입력
	for (int i = 0; i < 3; i++) {
		// 자리수를 다 딴다.
		temp = num1 % 10; // 셋 째 자리수 부터 따옴..
		n1[i] = (char)temp; // 셋 째 자리수를 첫 번째 자리에 넣는다.
		num1 /= 10;
		// 이와 같음.
		temp = num2 % 10;
		n2[i] = (char)temp; // char를 하면 그대로 숫자가 저장됨.
		num2 /= 10;
	}
	// 입력한 숫자 재활용 및 초기화 다시 숫자로 만들어 줌
	num1 = 0; num2 = 0;
	
	// 자리수에 맞게 곱하고 더함
	num1 += n1[0] * 100;
	num1 += n1[1] * 10;
	num1 += n1[2];
	num2 += n2[0] * 100;
	num2 += n2[1] * 10;
	num2 += n2[2];

	// 큰 수를 출력한다.
	if (num1 > num2) cout << num1;
	else cout << num2;	
}