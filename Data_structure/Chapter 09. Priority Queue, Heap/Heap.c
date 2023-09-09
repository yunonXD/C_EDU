#include"Heap.h"

void HeapInit(Heap * ph){
    ph->numOfData =0;
}

int HIsEmpty(Heap * ph){
    if(ph->numOfData == 0)
        return TRUE;
    else    return FALSE;
}

int GetParentIDX(int idx){      //부모노드 인덱스
    return idx/2;   }
int GetLChildIDX(int idx){      //왼쪽 자식노드 인덱스
    return idx*2;   }
intGetRChildIDX(int idx){       //오른쪽 자식노드 인덱스
    return  GetLChildIDX(idx)+1;    }

//우선순위가 높은 자식의 인덱스 값 리턴
int GetHitPriChildIDX(Heap *ph, int idx){
    //자식 노드가 존재하지 않는다?
    if(GetLChildIDX(idx) > ph->numOfData)   return 0;
    
    //자식 노드가 왼쪽 자식 노드 하나만 있다?
    else if(GetLChildIDX(idx) == ph->numOfData) return GetLChildIDX(idx);
 
    //자식 노두가 둘 다 있다면
    else{
        if(ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr)
            return GetRChildIDX(idx);       //오른쪽 우선순위 더 높음
        else
            return GetLChildIDX(idx);       //왼쪽 우선순위 더 높음
    }
}


void HInsert(Heap * ph, HData data, Priority pr){

}

HData HDelete(Heap * ph){

}

