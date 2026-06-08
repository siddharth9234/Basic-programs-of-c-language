#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("Welcome to Number Guessing Game\n");
    int n =9;
    int a =rand()%(n+1);
    int b;
    printf("Enter the number you Guess:");
    scanf("%d",&b);
    if(a==b){
        printf("You win");
    }
    else{
        printf("You lose\nComputer choosed %d",a);
    }
}