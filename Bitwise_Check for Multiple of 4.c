#include <stdio.h>

int main() {
 
    int n,result;
    scanf("%d", &n);
    result=n&3;
    if(result==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
