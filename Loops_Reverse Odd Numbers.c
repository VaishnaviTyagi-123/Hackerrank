#include <stdio.h>

int main() {

   int n;
    scanf("%d", &n);
    if(n==0){
       printf(" "); 
    }
    else{
        for(int i=2*n-1; i>0; i=i-2){
          printf("%d", i);
        if(i>1){
            printf(" ");
        }
        
    }
        printf(".");
    }
    
    return 0;
}
