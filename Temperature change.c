#include <stdio.h>

int main(){
    float c;
    float b;
    printf("To change temperature from celsius to fahrenheit \n");
    printf("Enter your temperature in °C:");
    scanf("%f",&c);
    b = 9*c/5+32;
    printf("Temperature is %f °F",b);
}