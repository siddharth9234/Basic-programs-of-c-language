#include <stdio.h>

int main(){
    printf("Enter the number of days:");
    int a;
    scanf("%d",&a);
    if(a%365==0){
        printf("%d Years",a/365);
    }
    else if(a%365!=0){
        if((a%365)%31==0){
            printf("%d Years,%d Months",a/365,(a%365)/31);
        }
        else if((a%365)%365!=0){
            printf("%d Years,%d Months,%d Days",a/365,(a%365)/31,(a%365)%31);
        }
        
    }
}