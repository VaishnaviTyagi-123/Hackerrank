#include <stdio.h>

int main() {

    int n,i;
    int result;
    scanf("%d %d", &n,&i);
    result = (n>>i)&1;
    if(result==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
