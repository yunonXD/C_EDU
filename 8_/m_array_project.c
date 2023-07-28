#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//10原軒税 辞稽 陥献 疑弘戚 赤陥 (砧舌梢)
//紫遂切稽採斗 2鯵税 脊径葵聖 閤焼 旭精 疑弘聖 達生檎 及増嬢砧奄
//堂軒檎 据雌差瑛
//陥 達生檎 曽戟
//恥 叔鳶判呪 左食爽奄(曽戟拝凶)

int arrayAnimal[4][5];      //朝球走亀 20舌
int checkAnimal[4][5];      //及増微走 溌昔
char  *strAnima[10];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_x(int y);
void printAnimal();
void printQuestion();
int foundAllAnimals();


int main(void){

    srand(time(NULL));

    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0; //叔鳶判呪

    while(1){
        int select1 = 0;    //紫遂切 識澱 湛腰属 呪
        int select2 = 0;    //紫遂切 識澱 砧腰属 呪

        printAnimal();  //疑弘 是帖
        printQuestion();    //庚薦 窒径(朝球走亀毒)
        printf(" 及増聖 朝球研 2鯵 茨虞爽室推 : ");
        scanf(" %d %d" , &select1, &select2);

        if(select1 == select2){
            printf(" 旭精 朝球 いい\n");
            continue;
        }
        
        //疎妊拭 背雁馬澗 朝球研 及増嬢 左壱 旭精走 焼観走 溌昔

        //舛呪 疎妊研 x ,y 稽 痕発
        int fisrtSelect_x = conv_pos_x(select1);
        int fisrtSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        //託景企稽 朝球亜 及増微走 食採 , 益軒壱 疑弘戚 旭昔走 食採.
        if((checkAnimal[fisrtSelect_x][fisrtSelect_y] == 0 
        && checkAnimal[secondSelect_x][secondSelect_y] == 0)  
        && (arrayAnimal[fisrtSelect_x][fisrtSelect_y] == 
         arrayAnimal[secondSelect_x][secondSelect_y])){

            printf("\n\n 桜壱! %s 降胃! \n\n" , strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            checkAnimal[fisrtSelect_x][fisrtSelect_y] = 1; //及増嬢遭 朝球稽 痕井
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else{
            printf("\n\n 堂携暗蟹 戚耕 及増微 朝球脊艦陥.\n\n");
            printf("%d : %s\n" , select1, strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            printf("%d : %s\n" , select2, strAnima[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");

            failCount++;
        }

        //乞窮 疑弘聖 達紹陥 1 0
        if(foundAllAnimals() == 1){
            printf("\n\n 乞窮 疑弘 達奄 刃戟 \n\n");
            printf(" 走榎猿走 恥 %d 腰 叔呪梅柔艦陥." , failCount);
            break;
        }
    }

    return 0;
}

void initAnimalArray(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            arrayAnimal[i][j] = -1;
        }
    }
}
    
void initAnimalName(){
    strAnima[0] = "据周戚";
    strAnima[1] = "馬原";
    strAnima[2] = "悪焼走";
    strAnima[3] = "壱丞戚";
    strAnima[4] = "掬走";
    strAnima[5] = "坪晦軒";
    strAnima[6] = "奄鍵";
    strAnima[7] = "開展";
    strAnima[8] = "展繕";
    strAnima[9] = "硲櫛戚";
}

void shuffleAnimal(){
    //けけけけけ
    //けけけけけ
    //けけけけけ
    //けけけけけ

    for(int i=0; i<10; i++){
        for(int j = 0; j<2; j++){
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

//疎妊拭辞 朔 因娃 達奄
int getEmptyPosition(){
    while(1){
        int randPos = rand() %20; // 0~ 19 紫戚 収切研 疎妊稽 鋼発
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if(arrayAnimal[x][y] == -1){    //朔 因娃戚檎 薄仙 是帖研 軒渡
            return randPos;
        }
        
    }
    return 0;
}

int conv_pos_x(int x){
    return x /5;        //5匝戚虞 5稽 蟹刊檎 交戚 0 1 2 3 亨 蟹身
}

int conv_pos_y(int y){
    return y %5;        //5匝戚虞 5税 蟹袴走稽 姥馬檎 蟹袴走 収切亜 恭焼像
}

void printAnimal(){
    printf("\n==============耕軒 舛岩 左食捜=============\n\n");
    for(int i =0; i <4; i++){
        for (int j=0; j<5; j++){
            printf("%8s",strAnima[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n==========================================\n\n");
}

void printQuestion(){

    printf("\n\n (庚薦) \n");
    int seq = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            //及増嬢辞 舛岩聖 限宙生檎 疑弘 戚硯聖
            if(checkAnimal[i][j] !=0){
                printf("%8s" , strAnima[arrayAnimal[i][j]]);
            }
            else{
                printf("%8d", seq);
            }
            seq++;
            //及増嬢辞 公限宙陥檎 急檎 -> 析舘精 収切稽 左食爽奄稽
        }
        printf("\n");
    }
}

int foundAllAnimals(){
    for(int i =0; i<4; i++){
        for(int j= 0; j<5; j++){
            if(checkAnimal[i][j] == 0)  
            {
                return 0;
            }
        }
    }
    return 1;
}