#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int result = (n << 3) - n;
    
    printf("%d", result);
    
    return 0;
}
