#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int T, t; // 배열 자리, 반복문 기한 정해주는 변수
	double count = 0, allavg = 0; // 평균을 나눠주기 위해 double 선언
	cin >> T; // 첫번째 반복문 기한 정하기
	double* r = new double[T]; // r 포인트 변수 선언 및 T 배열수를 갖는다.
	// r 배열은 차후 결과값에 들어가기 위해 만들어 놓는다.
	for (int i = 0; i < T; i++) {
		count = 0; // count와 allavg 다음 계산을 위해 0으로 초기화한다.
		allavg = 0;
		cin >> t; // 들어갈 개수 정하기, 두번째 반복문 정하기
		double* num = new double[t]; // num 배열은 전체 평균에서 원숫자를 비교하기 위해 선언.
		for (int x = 0; x < t; x++) { // 평균을 구할 t만큼 숫자 입력
			cin >> num[x]; 
			allavg += num[x]; // 차후 평균을 구할 변수에 배열값을 모두 더한다.
		}
		allavg /= t; // 배열의 총합계를 t만큼 나눠준다.
		for (int y = 0; y < t; y++) { // 입력한 num 배열과 전체 평균이 
			if (num[y] > allavg) { // 높은지 비교하기 위하여 반복, 조건문 선언
				count++; // num 해당 배열이 평균보다 높으면 count에 1 넣는다
			}
		}
		r[i] = (count / (double)t) * 100.0; 
		// 다른 배열을 선언해 저장해놓은 카운트와 t를 나눠 백분율을 구한다.
	}
	for (int i = 0; i < T; i++) { // r 배열을 전체 출력한다.
		cout << fixed; // 소수점 고정
		cout.precision(3); //셋째자리로!
		cout << r[i] << "%" << endl;
	}
	return 0;
}