#include"Heap.h"

void HeapInit(Heap * ph){
    ph->numOfData =0;
}

int HIsEmpty(Heap * ph){
    if(ph->numOfData == 0)
        return TRUE;
    else    
        return FALSE;
}

int GetParentIDX(int idx){      //부모노드 인덱스
    return idx/2;   
}
int GetLChildIDX(int idx){      //왼쪽 자식노드 인덱스
    return idx*2;   
}
int GetRChildIDX(int idx){       //오른쪽 자식노드 인덱스
    return  GetLChildIDX(idx)+1;    
}

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

    int idx = ph->numOfData+1;      //새 노드가 저장딜 인덱스 값을 idx 에 저장
    HeapElem nelem = {pr, data};    //새 노드의 생성 및 초기화

    //새 노드가 저장될 위치가 루트 노드의 위치가 아니라면 while 반복
    while(idx!=1){
        if(pr < (ph->heapArr[GetParentIDX(idx)].pr)){       //새 노드의 우선순위가 높다며
            //부모 노드를 한 레벨 내림 
            ph -> heapArr[idx] = ph->heapArr[GetParentIDX(idx)];

            //새 노드를 한 레벨 올림, 인덱스 값만 갱신시키기
            idx = GetParentIDX(idx);
        }
        else    break;;
    }
    ph -> heapArr[idx] = nelem;         //새 노드를 배열에 저장
    ph->numOfData +=1;
}

HData HDelete(Heap * ph){

    HData retData = (ph->heapArr[1]).data;      //리턴을 위해 삭제 데이터 백업
    HeapElem lastElem = ph->heapArr[ph ->numOfData]; //힙의 마지막 노드 저장

    //아래 변수 parentIdx에 마지막 노드가 저장될 위치 정보가 담김
    int parentIdx = 1;      //루트 노드가 위치해야 할 인덱스 값 저장
    int childIdx = 0;

    //루트 노드의 우선순위가 높은 자식 노드를 시작으로 반복문 시작
    while(childIdx = GetHitPriChildIDX(ph, parentIdx)){
        if(lastElem.pr <= ph->heapArr[childIdx].pr)     //마지막 노드와 우선순위 비교
            break;      //마지막 노드의 우선순위가 높으면 반복문 탈출

        //마지막 노드보다 우선순위가 높으니 비교대상 노드 노드의 위치를 한 단계 올림
        ph ->heapArr[parentIdx] = ph ->heapArr[childIdx];
        parentIdx = childIdx;   //마지막 노드가 저장될 위치 정보를 한 단계 내림
            //반복문 탈출하면 parentIdx에는 마지막 노드의 위치 정보가 저장됨
    }

    ph ->heapArr[parentIdx] = lastElem;  //마지막 노드 최종 저장
    ph ->numOfData -=1;
    return retData;
}

