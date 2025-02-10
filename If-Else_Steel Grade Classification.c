#include <stdio.h>

int main() {

    int h;
    float c;
    int t;
    scanf("%d", &h);
    scanf("%f", &c);
    scanf("%d", &t);
    
    if(h>50 && h<=500 && c>=0.0 && c<0.7 && t>5600 && t<=50000){
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.");
    }
    
    else if(h>50 && h<=500 && c>=0.0 && c<0.7){
         printf("The grade of the steel is: 9\n");
        printf("Two conditions met.");
    }
    
    else if(c>=0.0 && c<0.7 && t>5600 && t<=50000){
         printf("The grade of the steel is: 8\n");
        printf("Two conditions met.");
    }
    
    else if(h>50 && h<=500 && t>5600 && t<=50000){
         printf("The grade of the steel is: 7\n");
        printf("Two conditions met.");
    }
    
    else if(h>50 && h<=500){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    
    else if(c>=0.0 && c<0.7){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    
    else if(t>5600 && t<=50000){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    
    else{
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.");
    }
    return 0;
}
