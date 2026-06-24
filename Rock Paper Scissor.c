#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("Manuals of game are:\n(i)-- 1 for Rock\n(ii)-- 2 for Paper\n(iii)-- 3 for scissor\n");
    int a;
    int n=3;
    int b=1;
    int c = rand()%(n-b+1)+b;
    printf("Enter your choice:");
    scanf("%d",&a);
    if(a==1 && c==2){
        printf("Computer wins");
    }
    else if(a==1 && c==3){
        printf("You wins");
    }
    else if(a==1 && c==1){
        printf("Draw");
    }
    else if(a==2 && c==3){
        printf("Computer wins");
    }
    else if(a==2 && c==1){
        printf("You wins");
    }
    else if(a==2 && c==2){
        printf("Draw");
    }
    else if(a==3 && c==3){
        printf("Draw");
    }
    else if(a==3 && c==1){
        printf("Computer wins");
    }
    else if(a==3 && c==2){
        printf("You wins");
    }
    
}