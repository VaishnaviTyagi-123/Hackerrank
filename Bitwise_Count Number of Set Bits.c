#include <stdio.h>

int main() {

    int n,result;
    scanf("%d", &n);
    n = n&15;
    result = (n&1) + ((n>>1)&1) + ((n>>2)&1) + ((n>>3)&1);
    printf("%d", result);
    return 0;
}
