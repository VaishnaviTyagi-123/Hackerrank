#include <stdio.h>

int main() {

    int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int position1,rotation1;
    int position2,rotation2;
    int position3,rotation3;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9);
    
    scanf("%d %d", &position1,&rotation1);
    scanf("%d %d", &position2,&rotation2);
    scanf("%d %d", &position3,&rotation3);
    switch(position1){
        case 0: a0=a0+rotation1;
            if(a0>9){
                a0=a0%10;
            }
            break;
        case 1: a1=a1+rotation1;
             if(a1>9){
                a1=a1%10;
            }
            break;
        case 2: a2=a2+rotation1;
             if(a2>9){
                a2=a2%10;
            }
            break;
        case 3: a3=a3+rotation1;
             if(a3>9){
                a3=a3%10;
            }
            break;
        case 4: a4=a4+rotation1;
             if(a4>9){
                a4=a4%10;
            }
            break;
        case 5: a5=a5+rotation1;
             if(a5>9){
                a5=a5%10;
            }
            break;
        case 6: a6=a6+rotation1;
             if(a6>9){
                a6=a6%10;
            }
            break;
        case 7: a7=a7+rotation1;
             if(a7>9){
                a7=a7%10;
            }
            break;
        case 8: a8=a8+rotation1;
             if(a8>9){
                a8=a8%10;
            }
            break;
        case 9: a9=a9+rotation1;
             if(a9>9){
                a9=a9%10;
            }
            break;
    }
    
    switch(position2){
        case 0: a0=a0+rotation2;
            if(a0>9){
                a0=a0%10;
            }
            break;
        case 1: a1=a1+rotation2;
             if(a1>9){
                a1=a1%10;
            }
            break;
        case 2: a2=a2+rotation2;
             if(a2>9){
                a2=a2%10;
            }
            break;
        case 3: a3=a3+rotation2;
             if(a3>9){
                a3=a3%10;
            }
            break;
        case 4: a4=a4+rotation2;
             if(a4>9){
                a4=a4%10;
            }
            break;
        case 5: a5=a5+rotation2;
             if(a5>9){
                a5=a5%10;
            }
            break;
        case 6: a6=a6+rotation2;
             if(a6>9){
                a6=a6%10;
            }
            break;
        case 7: a7=a7+rotation2;
             if(a7>9){
                a7=a7%10;
            }
            break;
        case 8: a8=a8+rotation2;
             if(a8>9){
                a8=a8%10;
            }
            break;
        case 9: a9=a9+rotation2;
             if(a9>9){
                a9=a9%10;
            }
            break;
    }
    
    switch(position3){
        case 0: a0=a0+rotation3;
            if(a0>9){
                a0=a0%10;
            }
            break;
        case 1: a1=a1+rotation3;
             if(a1>9){
                a1=a1%10;
            }
            break;
        case 2: a2=a2+rotation3;
             if(a2>9){
                a2=a2%10;
            }
            break;
        case 3: a3=a3+rotation3;
             if(a3>9){
                a3=a3%10;
            }
            break;
        case 4: a4=a4+rotation3;
             if(a4>9){
                a4=a4%10;
            }
            break;
        case 5: a5=a5+rotation3;
             if(a5>9){
                a5=a5%10;
            }
            break;
        case 6: a6=a6+rotation3;
             if(a6>9){
                a6=a6%10;
            }
            break;
        case 7: a7=a7+rotation3;
             if(a7>9){
                a7=a7%10;
            }
            break;
        case 8: a8=a8+rotation3;
             if(a8>9){
                a8=a8%10;
            }
            break;
        case 9: a9=a9+rotation3;
             if(a9>9){
                a9=a9%10;
            }
            break;
    }
    printf("%d %d %d %d %d %d %d %d %d %d", a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
    
    return 0;
}
