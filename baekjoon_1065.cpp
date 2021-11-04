#include <iostream>
using namespace std;

int main(void) {
	int num;
	int cha = 0; // 등차
	int count = 0; // 인풋값까지의 등차수열 횟수
	cin >> num;
	int arr[3]; // 문제의 인풋값은 세 자리를 넘지 않는다.
	for (int i = 1; i <= num; i++) {
		if (i < 10) count++; // 1자리는 등차수열이 성립됨.
		else if (i < 100) count++; // 10의 자리도 그냥 성립됨.
		else { // 100의 자리 부터가 문제임.
			arr[0] = i / 100; // 첫 째 자리
			arr[1] = (i / 10) % 10; // 둘 째 자리
			arr[2] = i % 10; // 마지막 자리
			cha = arr[0] - arr[1]; // 첫번째자리와 둘째자리를 빼서 둘째자리와 셋째자리의 차이가 같다면.
			if (arr[1] - arr[2] == cha) count++; // 카운트 1업.
		}
	}
	cout << count; // 결과값 출력
}