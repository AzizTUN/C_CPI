#include <stdio.h>

int main(){
int chc;
float balance = 0.0;
    do{
        float money;
    debut :
        printf("Select an option:\n\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n\nEnter your choice: ");
        scanf("%d",&chc);
        if(chc==4)break;
        /*if(chc >4 || chc <=0){
            goto debut;
        }*/
        switch(chc){
            case 1:
                printf("U have %.3f$\n",balance);
                break;
            case 2:
                printf("how much u wanna deposit : ");
                scanf("%f",&money);
                balance += money ;
                break;
            case 3:
            withdraw :
                printf("how much u wanna withdraw : ");
                scanf("%f",&money);
                if ((money > balance) || (money <=0)){
                    printf("Invalid amount!");
                    goto withdraw;
                }balance -= money;break;
            default:goto debut;
        }
    
    }while(1);

    return 0;
}