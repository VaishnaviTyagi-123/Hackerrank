#include <stdio.h>

int main() {

    int n=100;
    for(int i=1; i<=n; ++i){
        if(i%3==0 && i%5==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
