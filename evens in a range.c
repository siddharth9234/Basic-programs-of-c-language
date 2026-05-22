#include <stdio.h>

int main(){
    printf("Tool to find even number between a range\n");
    int a,b;
    printf("Enter pre limit:");
    scanf("%d",&a);
    printf("Enter post limit:");
    scanf("%d",&b);
    int i = a+1;
    while(i>a && i<b){
        if(i%2==0){
            printf("%d ",i);
        }
        i=i+1;
    }
    
    
}