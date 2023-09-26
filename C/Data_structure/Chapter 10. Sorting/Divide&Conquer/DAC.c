#include<stdio.h>
#include<stdlib.h>

void MergeSort(int arr[] ,int left ,int right){

    if(left <right){        //left가 작다는 것은 나눌 수 있다는 뜻
        //중간지점
        int mid =(left+right)/2;

        //둘로 나눠서 정렬을 진행
        MergeSort(arr ,left ,mid);            //left~mid 위치한 데이터 정렬
        MergeSort(arr ,mid+1 ,right);        //mid+1~right 위치한 데이터 정렬

        //정렬된 두 배열을 병합
        MergeTwoArea(arr ,left ,mid ,right);
    }
}


void MergeTwoArea(int arr[] ,int left ,int mid ,int right){

    int fIdx =left;
    int rIdx =mid+1;

    int *sortArr =(int*)malloc(sizeof(int) *(right +1));
    int sIdx =left;

    //  ㅁㅁㅁㅁ | ㅁㅁㅁㅁ
    // fIdx    mid      rIdx

    while(fIdx <=mid && rIdx <=right){

        if(arr[fIdx] <=arr[rIdx])
            sortArr[sIdx] =arr[fIdx++];
        else
            sortArr[sIdx] =arr[rIdx++];
        sIdx++;
    }
    //반으로 나눠서 비교가 끝났지만 아직 데이터가 남아있다면?
    if(fIdx >mid){
        for(int i =rIdx; i <=right; i++, sIdx++)
            sortArr[sIdx] =arr[i];
    }
    else
        for(int i =fIdx; i <=mid; i++, sIdx++)
            sortArr[sIdx] =arr[i];

    //데이터 복사해서 원래 배열에 넣어주기
    for(int i =left; i <=right; i++)
        arr[i] = sortArr[i];

    free(sortArr);     
}

int main(int argc ,char *argv[]){

	int arr[7] = {3, 2, 4, 1, 7, 6, 5};

	// 배열 arr의 전체 영역 정렬 
	MergeSort(arr, 0, sizeof(arr)/sizeof(int)-1);

	for(int i =0; i <sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}