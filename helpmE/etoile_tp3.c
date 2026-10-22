#include <stdio.h>
void triangle(int x);
void points(int y);
int main(){
    int x;
    printf("Donner x:\n");
    scanf("%d",&x);

    triangle(x);

    return 0;
}

void points(int y){
    if(y==0){return;}
    printf("* ");points(y-1);
}
void triangle(int x){
    if(x==0){return;}
    triangle(x-1);
    points(x);
    printf("\n");
}