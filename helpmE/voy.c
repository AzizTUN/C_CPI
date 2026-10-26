#include <stdio.h>
#include <string.h>

int main(){
    char ch[20];
    int nbr = 0;
    printf("donner une chaine:\n");
    fgets(ch,sizeof(ch),stdin);
    ch[strlen(ch)-1] = '\0';

    for(int i =0;i<strlen(ch);i++){
        if(ch[i]>=65 && ch[i]<=90){
            ch[i]=((char)(int)ch[i] +32);
        }
    }
    char v[]="eyaoui";
    for(int i =0;i<strlen(ch);i++){
        if(strchr(v,ch[i])!=NULL){
            nbr++;
        }
    }
printf("%s\n%d",ch,nbr);
    return 0;
}