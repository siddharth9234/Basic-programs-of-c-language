#include <stdio.h>
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if(a<0){
        printf("Error");
    }
    else if(a==0){
        printf("Factorial of %d is 1",a);
    }
    else if(a>0){
        int i = a-1;
        int b=a;
        for(i;i>0;i--){
            b=b*i;
        
        }
        printf("Factorial of %d is %d",a,b);
    }
}