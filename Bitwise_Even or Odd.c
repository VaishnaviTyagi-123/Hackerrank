#include <stdio.h>

int main() {

    int N;
    int x;
    scanf("%d", &N);
    x=N&1;
    if(x==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
