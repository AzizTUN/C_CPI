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
    char v[]="eyaoiu";
    for(int i =0;i<strlen(ch);i++){
        if(ch[i]>=97 && ch[i]<=122){
            nbr = ch[i]=='e' || ch[i]=='y' || ch[i]=='a'||
            ch[i]=='u' || ch[i]=='i' || ch[i]=='o' ? nbr +1:nbr;
        }
    }
printf("%s\n%d",ch,nbr);
    return 0;
}