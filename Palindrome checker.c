#include <stdio.h>

int main(){
    int num;
    printf("Enter number to check:");
    scanf("%d",&num);
    int c;
    int r=0;
    int o=num;
    while(num>0){
        c=num%10;
        r=r*10+c;
        num=num/10;
    }
    if(r==o){
        printf("Number %d is palindrome",o);
    }
    else{
        printf("Number %d is not palindrome",o);
    }
}