#include<iostream>
#include<cstring>

using namespace std;

const int SIZE = 30;
int main(int argc, char *atgv[]){

    int temp =0;
    //cin >> temp;

    switch(temp){
        case 0:
            cout << "input value is 0 \n";
            break;

        case 1:
            cout << "input value is 1 \n";
            break;

        case 2:
            cout << "input value is 2 \n";
            break;

        case 3:
            cout << "input value is 3 \n";
            break;
        
        default:
            cout << "input value is ...\n";
            break;
    }

    int i=0;
    while(true){
        cout << i << endl;
        if(i>10)
            break;
        i++;
    }

    cout << "input char. \n";
    char line[SIZE];
    cin.get(line ,SIZE);
    
    cout << "input char is ";
    int spaces = 0;
    for(int i=0; line[i] != '\0'; i++){
        cout << line[i];

        if(line[i] != ' ')
            continue;
        
        spaces++;
    }

    cout << " this. \n";
    cout << "input char len is " << spaces << ".\n";
    cout << "for ended";

    return 0;
}