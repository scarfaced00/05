#include <stdio.h>
#include <stdlib.h>

/* ex6 */

int main(int argc, char *argv[]) {

    int answer=44;
    int guess;
    int cnt=0;
    do{
        printf("Guess a number :");
        scanf("%d",&guess);
        cnt++;
        if(guess>answer)
            printf("low!\n");
        else if(guess<answer)
            printf("high!\n");
        else
        {
            printf("Congratulation! trials:%d",cnt);
            break;
        }
    }
    while(guess!='\n');
    return 0;
}
