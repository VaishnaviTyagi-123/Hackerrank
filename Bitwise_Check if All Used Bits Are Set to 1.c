#include <stdio.h>

int main() {

    int n,result;
    scanf("%d", &n);
    result = n&(n+1);
    if(n==0){
        printf("No");
    }
    else if(result==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
