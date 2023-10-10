#include"17_time.h"

const int MAX =3;

int main(int argc, char *atgv[]){

    Time *time[MAX];
    int day =0;
    int hours =0;
    int mins =0;

    for(int i =0; i <MAX; i++){
        cout << i +1 << "번째 원소를 정의" << endl;
        cout << "시간을 입력하세요." << endl;
        cin >> hours;

        cout << "분을 입력하세요." << endl;
        cin >> mins;

        cout << "일을 입력하세요. (없다면 0)" << endl;
        cin >> day; 
        if(day == 0)
            time[i] = new Time(hours,mins);
        else
            time[i] = new NewTime(hours, mins , day);
    }

    for(int i=0; i<MAX; i++){
        cout << i+1<<"번째 정보 "<<endl;
        time[i]->show();
    }

    for(int i=0; i<MAX; i++){
        delete time[i];
    }

    return 0;
}