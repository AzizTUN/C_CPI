#include <stdio.h>
#include <string.h>

int main() {

/*   char T[5][20]={
        "pizza",
        "tacos",
        "baguette",
        "spagetti",
        "fanta"
    };*/
/*    printf("%zu",sizeof(T)/sizeof(T[0]));
    char food[20];
    int nbr;
    float price;

    printf("dooner le foods:\n");
    fgets(food,sizeof(food),stdin);
    getchar();
    printf("how many:\n");
    scanf("%d",&nbr);
    */
/*   
printf("wellcome to omar shop !\nWe have:\n");

for(int i = 0;i<sizeof(T)/sizeof(T[0]);i++){
    printf("%s\n",T[i]);
}
*/

/*    char noun[100] ="";
    char verb[100] ="";
    char adj1[100] ="";char adj2[100] ="";char adj3[100] ="";

    printf("donner noun:\n");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("donner verb:\n");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("donner adj1:\n");
    fgets(adj1,sizeof(adj1),stdin);
    adj1[strlen(adj1)-1] = '\0';

    printf("donner adj2:\n");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1] = '\0';

    printf("donner adj3:\n");
    fgets(adj3,sizeof(adj3),stdin);
    adj3[strlen(adj3)-1] = '\0';


printf("%s\n",noun);
printf("%s\n",verb);
printf("%s\n",adj1);
printf("%s\n",adj2);
printf("%s\n",adj3);
*/
int T[] = {5,7,8,0,1,3,6,4};
int tmp ,ok=1;

do{
    ok = 0;
    for(int i =0;i<sizeof(T)/sizeof(T[0])-1;i++){
        if(T[i]>T[i+1]){
            tmp=T[i];
            T[i]=T[i+1];
            T[i+1]=tmp;
            ok = 1;
        }
    }
}while(ok==1);

for(int i =0;i<sizeof(T)/sizeof(T[0]);i++){
    printf("%d\n",i);
}

    return 0;
}
