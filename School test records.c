#include <stdio.h>
int main(){
    int ns;
    printf("Number of students:");
    scanf("%d",&ns);
    int school[ns];
    char schooln[ns][20];
    int j=0;
    for(j;j<ns;j++){
        printf("Enter the marks of student %d:",j+1);
        scanf("%d",&school[j]);
        printf("Enter the name of student %d:",j+1);
        scanf("%s",&schooln[j]);
    }
    int s = sizeof(school)/sizeof(school[0]);
    int a = school[0];
    int b = school[0];
    for(int i=1;i<s;i++){
        if(school[i]>a){
            a = school[i];
        }
    b = b + school[i];
    }
    float c = b;
    printf("Number of students attempt the test:%d\n",s);
    int m=0;
    for(m;m<ns;m++){
        printf("%s scored %d marks\n",schooln[m],school[m]);
    }
    printf("Highest marks scored is %d\n",a);
    printf("Average marks scored by students is %f",c/s);
    
}