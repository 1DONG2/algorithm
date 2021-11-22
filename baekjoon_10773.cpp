#include <iostream>
using namespace std;

int main(void) {
   int a;
   cin >> a; // 몇 개 입력할 것인지?
   int *arr = new int[a];
   int num, sum = 0; // 안에 입력할 수.
   int count = 0; // 최근 입력한 0보다 큰 숫자들이 얼마나 되는지?

   for (int i = 0; i < a; i++) { // 처음 입력했던 숫자만큼 루프
      cin >> num;
      if (num > 0) { // 0보다 크면?
         arr[count] = num; // 배열에 수를 입력한다.
         count++; // 카운트 증가.
      }
      else if (num == 0) { // 0이 입력되면?
         arr[count] = 0; // 최근에 입력한 숫자를 초기화.
         count--; // 카운트 감소.
      }      
   }
   for (int i = 0; i < count; i++) { // 카운트만큼 sum 더해줌.
      sum += arr[i];
   }
   delete[] arr;
   cout << sum;
}