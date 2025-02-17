#include <stdio.h>

int main() {

    int n;
    int l1,l2,l3,l4;
    int a1,a2,a3,a4;
    scanf("%d", &n);
    if(n==3){
        scanf("%d %d %d %d %d %d", &l1,&l2,&l3,&a1,&a2,&a3);
        if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2 && (a1+a2+a3)==180 && a1>0 && a2>0 && a3>0 && l1>0 && l2>0 && l3>0 ){
            if(l1==l2 && l2==l3 && l3==l1 && a1==60 && a2==60 && a3==60){
            printf("Equilateral Triangle");
        }
        else if(l1==l2 || l2==l3 || l1==l3){
            printf("Isosceles Triangle");
        }
        else if(l1!=l2 && l2!=l3 && l3!=l1){
            printf("Scalene Triangle");
        }
        else{
            printf("Invalid Figure");
        }
        }
        else{
             printf("Invalid Figure");
        }
        
    }
    
    else if(n==4){
        scanf("%d %d %d %d %d %d %d %d", &l1,&l2,&l3,&l4,&a1,&a2,&a3,&a4);
        if((a1+a2+a3+a4==360) && a1>0 && a2>0 && a3>0 && a4>0 && l1>0 && l2>0 && l3>0 && l4>0){
            if((l1==l2 && l2==l3 && l3==l4 && l4==l1) && (a1==90 && a2==90 && a3==90 && a4==90)){
            printf("Square");
        }
        else if((l1==l3 && l2==l4) && (a1==90 && a2==90 && a3==90 && a4==90)){
            printf("Rectangle");
        }
        else if((l1==l2 && l2==l3 && l3==l4 && l4==l1) && (a1==a3 && a2==a4) && (a1!=90 || a2!=90 || a3!=90 || a4!=90)){
            printf("Rhombus");
        }
        else if((l1==l3 && l2==l4) && (a1==a3 && a2==a4)){
            printf("Parallelogram");
        }
        else{
            printf("Invalid Figure");
        }
        }
        else{
            printf("Invalid Figure");
        }
    }
    
    else if(n==0){
        printf("Circle");
    }
    
    else{
        printf("Invalid Figure");
    }
    return 0;
}
