#include<stdio.h>

// 열겨형 Enumerated

typedef enum syllable{
    Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
}Syllable;

void Sound(Syllable sy){
    switch(sy){
        case Do:
        puts("dodo"); return;
        case Re:
        puts("rere"); return;
        case Mi:
        puts("meme"); return;
        case Fa:
        puts("papa"); return;
        case So:
        puts("solsol"); return;
        case La:
        puts("RARA"); return;
        case Ti:
        puts("sisi"); return;
    }
    puts("YEEEET");
}

int main(int argc, char *argv[]){

    Syllable tone;
    for(tone=Do; tone<= Ti; tone+=1)
        Sound(tone);

    return 0;
}