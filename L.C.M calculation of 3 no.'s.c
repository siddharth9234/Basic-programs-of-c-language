#include <stdio.h>

int main(){
    int arr[3];
    printf("Enter numbers:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int a=sizeof(arr)/sizeof(arr[0]);
    int b=arr[0];
    int c;
    int d;
    for(int i=0;i<a;i++){
        if(arr[i]>b){
            b=arr[i];
        }
    }
    c=b+1;
    if(b%arr[0]==0 && b%arr[1]==0 && b%arr[2]){
        printf("L.C.M is %d",b);
    }
    while(c%arr[0]!=0 || c%arr[1]!=0 || c%arr[2]!=0){
        c++;
    }
    d=c;
    printf("L.C.M is %d",d);
}