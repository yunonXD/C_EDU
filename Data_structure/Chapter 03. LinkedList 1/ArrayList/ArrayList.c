#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist){		//init

	(plist -> numOfData) = 0;		//arr[0]
	(plist -> curPosition) = -1;		//-1 -> no reference
}

void LInsert(List * plist, LData data){

	if(plist -> numOfData > LIST_LEN){
		puts("there is no more space in the arr.");
		return;
	}

	plist ->arr[plist ->numOfData] = data;	//numOfData index
	(plist -> numOfData)++;
}

int LFirst(List * plist, LData * pdata){

	if(plist -> numOfData ==0)		//no save data?
		return FALSE;
	
	(plist -> curPosition) = 0;		//refer position reset.
	*pdata = plist->arr[0];			//then, insert pdata to arr[0]
	return TRUE;
}

int LNext(List * plist, LData * pdata){

	if(plist->curPosition >= (plist->numOfData)-1)
		return FALSE;
	
	(plist -> curPosition ++);

	//insert pdata to next arr[pos]
	*pdata = plist -> arr[plist->curPosition];
	return TRUE;

}

LData LRemove(List * plist){

	int rpos = plist -> curPosition;	//delete index value;
	int num = plist -> numOfData;
	LData rdata = plist->arr[rpos];		//save temp data

	//for() func for delete
	for(int i = rpos; i < num-1; i++)
		plist -> arr[i] = plist -> arr[i+1];
	
	(plist -> numOfData)--;
	(plist-> curPosition)--;
	return rdata;		//return defore the delete of arr
}

int LCount(List * plist){
	return plist -> numOfData;
}