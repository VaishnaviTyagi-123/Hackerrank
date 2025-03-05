#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; ++i){
        if(i%2!=0){
            int x=i;
            printf("%d ", x);
        }
        if(i%2==0){
            int y=-i;
            printf("%d ", y);
        }
    }
    return 0;
}
