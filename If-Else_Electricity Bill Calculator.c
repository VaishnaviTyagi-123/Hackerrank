#include <stdio.h>

int main() {
    int n;
    float amount;
    scanf("%d", &n);
    if(n<0 || n<-1000000 || n>1000000){
        printf("Invalid Input!");
    }
    
    else if(n<=100){
        amount=n*5;
        if(amount<=1200){
            printf("The electricity bill is: %.2f.", amount=amount-0.1*amount);
        }
        else{
             printf("The electricity bill is: %.2f.", amount);
         }
    }
    
     else if(n>100 && n<=300){
        amount=100*5 + (n-100)*7;
        if(amount<=1200){
            printf("The electricity bill is: %.2f.", amount=amount-0.1*amount);
        }
         else{
             printf("The electricity bill is: %.2f.", amount);
         }
    }
    
     else if(n>300){
        amount=100*5 + 200*7 + (n-300)*10;
        if(amount<=1200){
            printf("The electricity bill is: %.2f.", amount=amount-0.1*amount);
        }
         else{
             printf("The electricity bill is: %.2f.", amount);
         }
    }
    
    
    return 0;
}
