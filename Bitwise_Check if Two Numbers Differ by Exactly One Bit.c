#include <stdio.h>

int main() {

    int a,b,result,final;
    scanf("%d %d", &a,&b);
    result=a^b;
    final=result&(result-1);
    if(result==0){
        printf("No");
    }
    else if(final==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
