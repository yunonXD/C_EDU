#include<stdio.h>



int ISearch(int arr[], int first, int last, int target){

//	if(first > last)
//		return -1;    // -1�� ��ȯ�� Ž���� ���и� �ǹ�

	if(arr[first]>target || arr[last]<target)
		return -1;
 
	// ���� Ž������ �������� �ݿ��� ����
	int mid = ((double)(target-arr[first]) / (arr[last]-arr[first]) *
			(last-first)) + first;

	if(arr[mid] == target)
		return mid;    // Ž���� Ÿ���� �ε��� �� ��ȯ
	else if(target < arr[mid])
		return ISearch(arr, first, mid-1, target);
	else
		return ISearch(arr, mid+1, last, target);

}


int main(int argc, int argv[]){

	int arr[] = {1, 3, 5, 7, 9};
	int idx;
	
	idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
	if(idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 2);
	if(idx == -1)
		printf("Ž�� ���� \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;
}