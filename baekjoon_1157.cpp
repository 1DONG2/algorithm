#include <iostream>
using namespace std;

int main() {
	string a; // 입력할 문자열
	int abc[26] = { 0 }; // 알파벳이 얼마나 나왔나? 카운트 배열
	char text; // 마지막 결과를 출력할 문자
	int max = 0; // 최대값 비교 변수

	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < 26; j++) // 알파벳 숫자만큼 루프.
			if (toupper(a[i]) == (char)(65 + j)) abc[j]++; // 알파벳이 일치하면 1 추가.
	}
	for (int i = 0; i < 26; i++) { // 최대값 구하기. 및 알파벳 찾기
		if (abc[i] > max) {
			text = (char)(65 + i);
			max = abc[i];
		}
	}

	int count = 0; // 두 개 이상인지 판별해주는 변수
	for (int i = 0; i < 26; i++) // 중복값이 두 개 이상이라면....
		if (max == abc[i]) count += 1; // 중복값을 찾아라!
	if (count >= 2) text = '?'; // 2개 이상이면 ?를 출력.

	cout << text << endl;
}