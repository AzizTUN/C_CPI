#include <stdio.h>
#include <string.h>

int main(void){

    int x ;
    char a ;
    char name[30] ;
    printf("votre age ?: ") ;
    scanf("%d",&x) ;

    getchar() ;

    printf("votre nom ?: ") ;
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0' ;

    printf("votre nom est : %s .\n",name);
    printf("tu est %d old .\n",x) ;

    return 0 ;
}