#include <iostream>
using namespace std;

int main(void) {
	int num, sum = 0;
	cin >> num;
	char* arr = new char[num]; // 입력한 숫자로 배열 사이즈 동적할당.
	for (int i = 0; i < num; i++) 
		cin >> arr[i]; // char로 한글자씩 읽어들이고 저장한다.
	for (int i = 0; i < num; i++)
		sum += ((int)arr[i] - 48); 
    /* 
       다시 하나씩 읽는다. (int)형으로 변환하면
       숫자로 아스키코드로 인식하기 때문에 48이라는 숫자를 빼준다.
       이는 알파벳 대문자를 소문자로 만드는 방식과 비슷. (1 = 49, 2 = 50 ...)
    */
	cout << sum; // 출력
    delete[] arr; // 동적 할당 메모리 삭제.
}