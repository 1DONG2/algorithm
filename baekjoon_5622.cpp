#include <iostream>
#include <string.h>
using namespace std;

int phone(char t) { // 알파벳을 입력하면 숫자를 반환해줌.
	char alphaNum[8][4] = {
		{'A','B','C'}, // 2
		{'D','E','F'}, // 3
		{'G','H','I'}, // 4
		{'J','K','L'}, // 5
		{'M','N','O'}, // 6
		{'P','Q','R','S'}, // 7
		{'T','U','V'}, // 8
		{'W','X','Y','Z'}, // 9
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++)// t와 2차원 배열 안 알파벳이 일치한다면?
			if (t == alphaNum[i][j]) return i + 2; // i 값을 반환.
	}
}

int main() {
	char text[16]; // 번호 입력하는 것.
	cin >> text; 
	// 텍스트 길이만큼 루프
	int sum = 0; // 결과값을 출력해줄 변수
	for (int i = 0; i < strlen(text); i++)
		sum += phone(text[i]);
	// 어떤 숫자든 입력하면 1초씩 걸린다고 했음. 그래서 문자 길이만큼 또 더해줌
	sum += strlen(text);
	cout << sum;
}