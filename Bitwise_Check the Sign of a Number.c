#include <stdio.h>

int main() {

   int n,result;
    scanf("%d", &n);
    result=(n>>31)&1;
    if(result==1){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}
