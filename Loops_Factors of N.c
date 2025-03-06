#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d", n);
    int skip=0;
    for(int i=n; i>=1; --i){
        if(n%i==0){
            skip++;
            if(skip!=1 && skip%2!=0)
            printf(" %d", i);
        }
        
    }
    printf(".");
    return 0;
}
