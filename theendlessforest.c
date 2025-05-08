#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(){
    //Initializer
    int gametimer = 10;
    printf("\nThe Endless Forest");
    printf("\nCopyright 2023 Hayseed Games");
    printf("\n\nPress Enter ");
    getc(stdin);
    //game loop
    while(gametimer !=0){
        char direction;
        char meter[gametimer];
        for(int i = 0; i<gametimer; i++){
            meter[i] = '|';
            meter[gametimer] = '\0'; //this caps the array off, not capping it causes junk data to fill array
        }
        system("clear");
        sleep(1);
        printf("\n ----------------------------------\n");
        printf("\n    @&&&&&@  | v     ^       ^");
        printf("\n @&&&&&&&&&&&@ |    ///     ///");
        printf("\n   @&&&&&&&@ v |   // \\   // \\");
        printf("\n     @&&&@   | v@  // \\   // \\");
        printf("\n      | |    | /    | |     | |");
        printf("\n ----------------------------------\n");
        if(gametimer<10){
            printf("\nYou Went %c\n", direction);
        }
        printf("\nYou are in an endless forest\n");
        printf("\n   N");
        printf("\n W   E");
        printf("\n   S\n");
        
        if(gametimer>9){
            printf("\n[It is still Daylight, and you are fine]\n");
        } else if(gametimer>7){
            printf("\n[Its getting dark, and you're getting hungry...]\n");
        } else if(gametimer>4){
            printf("\n[Its pitch black. You are famished.]\n");
        } else {
            printf("\n[YOU ARE STARVING]\n");
        }
        printf("\n\nWhich direction to you go??");
        printf("\n\nhunger[%s]\t", meter);
        scanf(" %c", &direction); //the space before %c deletes white space, which causes it to loop twice per round. 
        gametimer--;
    };
    //game over screen
    system("clear");
    sleep(1);
    printf("You Died!\n");
    return(0);
}



