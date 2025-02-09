#include <stdio.h>

int main() {

    float income,tax=0.0;
    scanf("%f", &income);
    
   
    if(income<=250000 && income>=0){
        tax=0.00;
        printf("%.2f", tax);
    }
    else if( 250000<income && income<=500000){
        tax=(income-250000)*0.05;
        printf("%.2f", tax);
    }
    else if(income>500000 && income<=1000000){
        tax=(250000*0.05)+(income-500000)*0.2;
        printf("%.2f", tax);
    }
    else if(income>1000000){
        tax=(250000*0.05)+(500000*0.2)+(income-1000000)*0.3;
        printf("%.2f", tax);
    }
    else
    {
        printf("INVALID");
    }
    
    return 0;
}
