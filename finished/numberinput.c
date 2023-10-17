#include <stdio.h>


int main(void){
    int userInput;

    printf("Enter a number for a little surprise: ");

    if(scanf("%d", &userInput) == 1){
        if(userInput == 1){
            printf("You selected option 1\n");
        }
        else if(userInput == 2){
            printf("You selected option 2\n");
        }
        else{
            printf("You selected the option %d\n", userInput);
        }
    }
    else {
        printf("You didnt enter a valid number\n");
    }
    return 0;
}
