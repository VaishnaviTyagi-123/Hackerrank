#include <stdio.h>

int main() {

    int path;
    scanf("%d", &path);
    if(path==1){
        printf("Player chooses the Left path.\n");
        int a;
        scanf("%d", &a);
        if(a==1){
            printf("Poor choice, Game Over!\n");
        }
        else if(a==2){
            printf("Player found a bridge.\n");
            int b;
            scanf("%d", &b);
            if(b==1){
                printf("Player crosses the bridge safely.\n");
                
                int c;
                scanf("%d", &c);
                 if(c==1){
        printf("All that glitters is not gold, Game Over!\n");
    }
    if(c==2){
        printf("All your efforts were for nothing, Game Over!\n");
    }
    if(c==3){
        printf("Congratulations!! You won the treasure.\n");
    }
            }
            else if(b==2){
                printf("Poor luck, Game Over!\n");
            }
        }
        
    }
    
    else if(path==2){
        printf("Player chooses the Middle path.\n");
        
        int puzzle;
        scanf("%d", &puzzle);
        if(puzzle==582){
            printf("Player solved the puzzle.\n");
            
            int final;
            scanf("%d", &final);
            if(final==1){
        printf("All that glitters is not gold, Game Over!\n");
    }
    if(final==2){
        printf("All your efforts were for nothing, Game Over!\n");
    }
    if(final==3){
        printf("Congratulations!! You won the treasure.\n");
    }
        }
        else{
            printf("Foolish player, Game Over!");
        }
    }
    
    if(path==3){
        printf("Player chooses the Right path.\n");
        
        int series;
        scanf("%d", &series);
        if(series==30){
            printf("Player solved the puzzle.\n");
            
            int finale;
            scanf("%d", &finale);
            if(finale==1){
        printf("All that glitters is not gold, Game Over!\n");
    }
    if(finale==2){
        printf("All your efforts were for nothing, Game Over!\n");
    }
    if(finale==3){
        printf("Congratulations!! You won the treasure.\n");
    }
        }
        
        else{
            printf("Foolish player, Game Over!");
        }
    }
    return 0;
}

