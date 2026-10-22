#include <stdio.h>
#include <math.h>
void ex4(int n);
void ex5();
void ex6(int n);
int main(){
    int n;
    printf("N:\n");scanf("%d",&n);
//ex4(n);
//ex5();
ex6(n);
}

void ex4(int n){
    //to get the inv do (the second bouqle need to stop at j<i+1)
    //to get the other end just flip the if to the inv >=
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(n-j<=i+1){printf("*");}else{
        printf(" ");}
    }printf("\n");
    }
}
//
void ex5(){
    for(int i =0;i<=100;i++){
        printf("%d%s\n",i,(i%10+i/10==11)?" de somme 11":" not de sommet 11.");
    }
}
//
void ex6(int n){
    
    for(int k =2;k<=n;k++){
        int s=1;
        for(int i =2;i<=k/2;i++){
            s+=k%i==0?i:0;
        }if(k==s){printf("%d is parfait\n",k);}
    }
}