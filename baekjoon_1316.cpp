#include <iostream>
#include <string.h> // strlen 함수 쓰기위함.
using namespace std;

int main() {
	int N; // 단어를 몇 번 입력할 것인지?
	char text[101]; // '그' 단어
	cin >> N; // 몇 번 넣을게 ~
	int sum = N; // 마지막에 정답으로 출력해 줄 변수
	for (int i = 0; i < N; i++) {
		int alpha[26] = { 0 }; // 알파벳 변수는 매 루프마다 초기화한다.
		bool ans = false; // 이것도 마찬가지다.
		cin >> text; // 텍스트를 N번마다 입력.
		for (int j = 0; j < strlen(text); j++) {
			// 앞에서 중복되는 단어가 있으면 숫자를 늘리지 않음.
			// 즉 반복되면 배열의 숫자가 늘지 않는 것임.
			// 카운터가 1이고~ 지금 텍스트가 전 텍스트와 같으면?
			if (alpha[text[j] - 97] == 1 && text[j] == text[j - 1])
				alpha[text[j] - 97] = 1;
			else alpha[text[j] - 97] += 1; // 반복됐다가 끊기면 숫자 업.
			// 즉 그 전에 썼던 똑같은 단어가 들어와도 1업되는것임.
		}
		// 배열에 이제 숫자가 1이 넘는것이 있는지 검증한다.
		for (int z = 0; z < 26; z++) {
			if (alpha[z] > 1) ans = true;
		}
		// 색출해내면 그거슨 그룹단어가 아니기에 sum에 1을 빼버린다.
		if (ans) sum -= 1;
	}
	cout << sum; // 결과 출력
}