#include <stdio.h>
#include <stdbool.h>

int main(){

    /*bool ok = true;

    int ok1 = (int) true;

    printf("ur alive ? : %d\n",ok==12);

    printf("%d",ok1);
*/

   /* int x ;
    printf("donner x : \n");
    char * msg ;
    scanf("%d",&x);

    msg = (x%2==0) ? "even" : "odd" ;

    printf("%s",msg);
*/
    /*int i,a;
    i=0;
    a=3;
    i=a++;
    printf("%d|%d\n",i,a);i=0;
    a=3;
    i=++a;
    printf("%d|%d\n",i,a);*/

    //printf("%zu",sizeof(i));
    int i;
    
    for (i=0;i<10;i++){
        if(i==8)break;
        if(i==5)continue;
        if(i==3) goto skip;
    
        printf("%d\n",i);
        skip:
            continue;
    }

    return 0;
}