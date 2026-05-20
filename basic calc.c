#include <stdio.h>

int main(){
    float a,b;
    char ope;
    printf("A basic calculator \n");
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);
    printf("Enter your operator:");
    scanf(" %c",&ope);
    if(ope=='+'){
        printf("Sum is %f",a+b);
    }
    else if(ope=='-'){
        printf("Difference is %f",a-b);
    }
    else if(ope=='/'){
        printf("Division is %f",a/b);
    }
    else if(ope=='*'){
        printf("Product is %f",a*b);
    }
    
    
    
}