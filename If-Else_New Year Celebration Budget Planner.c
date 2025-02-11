#include <stdio.h>

int main() {

    int budget;
    int guest;
    int food;
    int decor;
    int music;
    int extra;
    scanf("%d", &budget);
    scanf("%d", &guest);
     scanf("%d", &food);
     scanf("%d", &decor);
     scanf("%d", &music);
     scanf("%d", &extra);
    
    int foodtotal= guest*food;
    int total= foodtotal + decor + music + extra;
    if(total>budget){
        printf("Celebration Denied");
    }
    else if(total<=budget &&(guest>5 && guest<=50) &&(foodtotal<(budget*0.5) || decor<(budget*0.3))){
        if(guest>25 && music==0){
             printf("Celebration Denied");
        }
        else{
            printf("Celebration Approved");
        }
   
    }
     else{
        printf("Celebration Denied");
    }
    return 0;
}
