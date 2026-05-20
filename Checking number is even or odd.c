#include <stdio.h>

// checking if number is even or not

int main(){
    printf("Enter the number:");
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Number is even"); 
    }
    else{
        printf("Number is odd");
        
    }
}