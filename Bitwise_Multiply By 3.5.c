#include <stdio.h>

int main() {

    int n,result;
    scanf("%d", &n);
    result=(n << 1) + n + (n >> 1);
    printf("%d", result);
    return 0;
}
