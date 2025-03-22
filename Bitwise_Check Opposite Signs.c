#include <stdio.h>

int main() {

     int a,b,result;
    scanf("%d %d", &a,&b);
    result=(a>>31) ^ (b>>31);
    if(result==0 ){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
