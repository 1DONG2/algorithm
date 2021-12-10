#include <iostream>
using namespace std;
int main() {
	int a, b, c; // 입력에 필요한 세 가지 변수
	cin >> a >> b >> c; // 세 숫자 입력.
	// b보다 c가 더 크다면 계산해서 출력
	if (b < c) { c -= b; a /= c; cout << a + 1; }
	else cout << -1; // c보다 b가 크면 문제 조건에 성립이 안됨.
}