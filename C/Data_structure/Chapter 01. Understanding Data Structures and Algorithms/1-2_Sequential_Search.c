#include<stdio.h>
int SequentialSearch(int arr[], int len, int target);
//순차 탐색 알고리즘 적용
int LSearch(int ar[], int len, int target){
    for(int i = 0; i < len; i++){
        if(ar[i] == target)
            return i;               //찾은 대상의 인덱스 값 return
    }
    return -1;                      //찾지 못했음을 return
}


int main(int argc, char *argv[]){

  int arr[5] = {1,2,3,4,5};

  printf("%d",SequentialSearch(arr , sizeof(arr) , 3));

    return 0;
}


int SequentialSearch(int arr[], int len, int target){
  for(int i = 0; i < len; i++){
      if(arr[i] == target)
        return i;
  }
  return -1;
}


/*

중심이 되는 연산자 찾기
최악의 경우와 최상의 경우?
> 순차 탐색 상황 1: 운이 정말 "좋은" 경우
     - 배열의 맨 앞에서 대상을 찾는 경우
     - 만족스러운 상황이므로 성능평가 대상은 아님
     - 최상의 경우(Best case) 라고 함
     - 배열<ㅁㅁㅁㅁㅁ...> 길이 n 일때 맨 앞에 있으면 T(n) = 1 <<한번만 싸이클을 돌았음

> 순차 탐색 상황 2: 운이 정말 "나쁜" 경우
     - 배열의 끝에서 찾거나 대상이 없는 경우
     - 만족스럽지 못한 상황이므로 성능평가 대상
     - 최악의 경우 (worst case) 라고 함
     - 배열<ㅁㅁㅁㅁㅁ...> 길이 n 일때 맨 뒤에 있으면 T(n) = n << 길이만큼 싸이클을 돌았음
     - 데이터 수가 n 개 일때 최악의 경우에 해당하는 연산 횟수(비교연산)는 n 이다
        T(n) = n 최악의 경우를 대상으로 정의한 함수 T(n)


"평균"적인 경우 (Average Case)
가장 현실적인 경우에 해당
> 일반적으로 등장하는 상황에 대한 경우의 수
> 최상의 경우와 달리 알고리즘 평가에 도움이 된다
> 계산하기 까다롭다. 객관적인 평가도 어렵다.

평균적인 경우의 복잡도 계산이 어려운 이유
 > 평균적인 경우의 연출이 어렵다
 > 평균적인 경우임을 증명하기 어렵다
 > 평균적인 경우는 상황에 따라 달라진다      But 최악의 상황은 동일함


순차 탐색 평균 경우 시간 복잡도 T(n)
    - 가정 1: 탐색 대상이 배열에 존재하지 않을 확률 50%
    - 가정 2: 배열 첫 요소부터 마지막 요소까지 탐색 대상 존재 확률 동일

    - 탐색 대싱이 존재하지 않는 경우의 연산 횟수 n (50%)
    - 가정2 에 의해서 탐색 대상이 존재하지 않는 경우의 연산 횟수 n/2 (1/2)

    ㅁㅁㅁㅁㅁㅁㅁ      길이가 7인 배열
    -------------
    ㅇㅇㅇㅇㅇㅇㅇ
      ㅇㅇㅇㅇㅇㅇ      비교 연산의 수 n : 28
        ㅇㅇㅇㅇㅇ      T(n) = n * 1/2 + n/2 * 1/2 = 3n/4
          ㅇㅇㅇㅇ      근디 과연 이 수치가 평가의 기준이 될 수 있을까?
            ㅇㅇㅇ
              ㅇㅇ
                ㅇ
    1 2 3 4 5 6 7

   

















 */