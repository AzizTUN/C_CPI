#include <stdio.h>
int fact(int tmp);
int main(){

    int x,p;
    printf("Donner x:\n");
    scanf("%d",&x);
    p=fact(x);
    printf("p%d:\n",p);
    return 0;
}
int fact(int tmp){
    return tmp ==0?1:tmp*fact(tmp-1);
}