#include <stdio.h>

int main() {

    int n,result;
    scanf("%d", &n);
    result=n&(n-1);
    if(n>0 && result==0){
        printf("1");
    }
    else{
         printf("-1");
    }
    return 0;
}
