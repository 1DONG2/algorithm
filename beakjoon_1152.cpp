#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char in[1000001]; // 입력조건 : 이 문자열의 길이는 1,000,000을 넘지 않는다.
	int num = 1; // 입력할 때 무조건 문장은 하나정도 있기 때문에 1로 시작
	cin.getline(in, 1000001); // char 공백 포함해도 입력하게 해주는 함수

	// 글자 길이만큼 루프를 돈다. 문자열 중 공백이 있으면 카운트 1 추가.
	for (size_t i = 0; i < strlen(in); i++)	if (in[i] == ' ') { num++; }
	size_t i = strlen(in); // 변수 i에 입력한 문자열 길이수를 저장한다.
	if (in[i - 1] == ' ') num--; // 문자열 마지막에 공백이면 1 감소
	if (i == 0) num = 0; // 문자열을 입력하지 않으면, 0으로 출력
	if (in[0] == ' ') num--; // 문자열 첫자가 공백이면 1 감소
	cout << num; // 대망의 결과를 출력한다.
}