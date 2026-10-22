#include <stdio.h>

int main(){
    int N,x,p=1,s=0;
    float M=0;
    printf("Donner N:\n");
    scanf("%d",&N);
    M=N;
    /*while (N!=0){
        printf("Donner x:\n");
        scanf("%d",&x);
        p=p*x;
        s=s+x;
        N--;
    };*/
    do{
        if(N==0){
            break;
        }
        printf("Donner x:\n");
        scanf("%d",&x);
        p=p*x;
        s=s+x;
        N--;
    }while(true);
    M=(float)s/M;

printf("%d|||%d|||%.2f",p,s,M);
    return 0;
}
