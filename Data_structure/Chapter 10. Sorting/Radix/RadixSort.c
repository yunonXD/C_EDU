#include"ListBaseQueue.h"
#define BUCKET_NUM      10

void RadixSort(int arr[] ,int num ,int maxLen){

    Queue buckets[BUCKET_NUM];      //버킷 생성
    int divfac=1;                   //첫번째 자릿수로 초기화
    int di =0;
    
    //  총 10 개의 버킷을 초기화
    for(int bi =0; bi<BUCKET_NUM; bi++)
        QueueInit(&buckets[bi]);


    // 가장 긴 데이터의 길이만큼 반복
    for(int pos =0; pos <maxLen; pos++){

        //버킷에 데이터 입력
        for(di =0; di <num; di++){

            //N 번째 자리의 숫자 추출
            int radix =(arr[di] / divfac) %10;

            // 추출한 숫자를 근거로 버킷에 데이터 저장
            Enqueue(&buckets[radix], arr[di]);
        }

        //버킷 데이터 출력
        for(int bi =0 ,di =0; bi <BUCKET_NUM; bi++){

            //버킷에 저장된 데이터를 꺼내서 arr에 저장
            while(!QIsEmpty(&buckets[bi]))
                arr[di++] = Dequeue(&buckets[bi]);
        }

        //N 번째 자릿수 추출을 위한 배수 증가
        divfac *=10;
    }
}
int main(int argc, char *argv[])
{
	int arr[7] = {13, 212, 14, 7141, 10987, 6, 15};

	int len = sizeof(arr) / sizeof(int);
	int i;

	RadixSort(arr, len, 5);

	for(i=0; i<len; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}