#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if((n%2==0) && (n%3==0) && (n%5!=0)){
        printf("A");
    }
    else if(n==2*11 || n==3*7 || n==3*11 || n==5*7 || n==5*11 || n==7*11 && n>20){
        printf("B");
    }
    else if((n%3==0 || n%7==0) && (!(n%3==0 && n%7==0)) && (n>=10 && n<100)){
            printf("C");
        }
    
    else if(n<200 && n==1*1 || n==2*2 || n==3*3 || n==4*4 || n==5*5 || n==6*6 || n==7*7 || n==8*8 || n==9*9 || n==10*10                           || n==11*11 || n==12*12 || n==13*13 || n==14*14){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;
}
