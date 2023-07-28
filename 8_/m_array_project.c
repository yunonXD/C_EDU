#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//10������ ���� �ٸ� ������ �ִ� (���徿)
//����ڷκ��� 2���� �Է°��� �޾� ���� ������ ã���� ������α�
//Ʋ���� ���󺹱�
//�� ã���� ����
//�� ����Ƚ�� �����ֱ�(�����Ҷ�)

int arrayAnimal[4][5];      //ī������ 20��
int checkAnimal[4][5];      //�������� Ȯ��
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

    int failCount = 0; //����Ƚ��

    while(1){
        int select1 = 0;    //����� ���� ù��° ��
        int select2 = 0;    //����� ���� �ι�° ��

        printAnimal();  //���� ��ġ
        printQuestion();    //���� ���(ī��������)
        printf(" ������ ī�带 2�� ����ּ��� : ");
        scanf(" %d %d" , &select1, &select2);

        if(select1 == select2){
            printf(" ���� ī�� ����\n");
            continue;
        }
        
        //��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �ƴ��� Ȯ��

        //���� ��ǥ�� x ,y �� ��ȯ
        int fisrtSelect_x = conv_pos_x(select1);
        int fisrtSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        //���ʴ�� ī�尡 �������� ���� , �׸��� ������ ������ ����.
        if((checkAnimal[fisrtSelect_x][fisrtSelect_y] == 0 
        && checkAnimal[secondSelect_x][secondSelect_y] == 0)  
        && (arrayAnimal[fisrtSelect_x][fisrtSelect_y] == 
         arrayAnimal[secondSelect_x][secondSelect_y])){

            printf("\n\n ����! %s �߰�! \n\n" , strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            checkAnimal[fisrtSelect_x][fisrtSelect_y] = 1; //�������� ī��� ����
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else{
            printf("\n\n Ʋ�Ȱų� �̹� ������ ī���Դϴ�.\n\n");
            printf("%d : %s\n" , select1, strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            printf("%d : %s\n" , select2, strAnima[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");

            failCount++;
        }

        //��� ������ ã�Ҵ� 1 0
        if(foundAllAnimals() == 1){
            printf("\n\n ��� ���� ã�� �Ϸ� \n\n");
            printf(" ���ݱ��� �� %d �� �Ǽ��߽��ϴ�." , failCount);
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
    strAnima[0] = "������";
    strAnima[1] = "�ϸ�";
    strAnima[2] = "������";
    strAnima[3] = "�����";
    strAnima[4] = "����";
    strAnima[5] = "�ڳ���";
    strAnima[6] = "�⸰";
    strAnima[7] = "��Ÿ";
    strAnima[8] = "Ÿ��";
    strAnima[9] = "ȣ����";
}

void shuffleAnimal(){
    //����������
    //����������
    //����������
    //����������

    for(int i=0; i<10; i++){
        for(int j = 0; j<2; j++){
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

//��ǥ���� �� ���� ã��
int getEmptyPosition(){
    while(1){
        int randPos = rand() %20; // 0~ 19 ���� ���ڸ� ��ǥ�� ��ȯ
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if(arrayAnimal[x][y] == -1){    //�� �����̸� ���� ��ġ�� ����
            return randPos;
        }
        
    }
    return 0;
}

int conv_pos_x(int x){
    return x /5;        //5���̶� 5�� ������ ���� 0 1 2 3 �� ����
}

int conv_pos_y(int y){
    return y %5;        //5���̶� 5�� �������� ���ϸ� ������ ���ڰ� ������
}

void printAnimal(){
    printf("\n==============�̸� ���� ������=============\n\n");
    for(int i =0; i <4; i++){
        for (int j=0; j<5; j++){
            printf("%8s",strAnima[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n==========================================\n\n");
}

void printQuestion(){

    printf("\n\n (����) \n");
    int seq = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            //����� ������ �������� ���� �̸���
            if(checkAnimal[i][j] !=0){
                printf("%8s" , strAnima[arrayAnimal[i][j]]);
            }
            else{
                printf("%8d", seq);
            }
            seq++;
            //����� ������ٸ� �޸� -> �ϴ��� ���ڷ� �����ֱ��
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