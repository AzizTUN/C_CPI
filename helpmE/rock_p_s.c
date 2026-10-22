#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void checkwinner(char user[10],char computer[10]);
enum Choice {ROCK,PAPER,SCISSORS};
int main(){
    char T[3][10] = {"ROCK","PAPER","SCISSORS"};
    char user[10],computer[10];
    int i,x,again;

    srand(time(NULL));

    do{
        printf("choose one of this : ROCK\nPAPER\nSCISSORS\nU DON'T WANNA PLAY (0)");
        fgets(user,sizeof(user),stdin);
        user[strlen(user)-1] = '\0';if(strcmp(user,"0")==0)break;
        i = (strcmp(user,"ROCK")!=0 && strcmp(user,"PAPER")!=0 && strcmp(user,"SCISSORS")!=0)? 0:1;
        if(i==1){
            x=rand()%3;
            strcpy(computer,T[x]);
            checkwinner(user,computer);
        }
        
    }while(i!=1);

    return 0;
}

void checkwinner(char user[10],char computer[10]){
    //easy
}