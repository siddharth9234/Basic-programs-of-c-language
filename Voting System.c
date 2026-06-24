#include <stdio.h>
#include <string.h>

int main(){
    char a,b;
    int ca=0;
    int cb=0;
    int cc=0;
    char party[10];
    char parties[3][10]={"AAP","BJP","CONGRESS"};
    printf("This is a voting system\nManuals are:\n1--\n3 parties are participating BJP,CONGRESS,AAP\n2--Enter\na to vote AAP\nb to vote BJP\nc to vote CONGRESS\n3--\nEnter y if you want to vote otherwise n\n");
    do{
        printf("Do you want to vote:");
        scanf(" %c", &b);
        if(b!='y'){
            break;
        }
        printf("Enter your vote:");
        scanf(" %c",&a);
        if(a=='a'){
            ca++;
        }
        else if(a=='b'){
            cb++;
        }
        else if(a=='c'){
            cc++;
        }
    } while(b=='y');
    int votes[3]={ca,cb,cc};
    int max = votes[0];
    for(int i=1;i<3;i++){
        if(votes[i]>max){
            max=votes[i];
            strcpy(party,parties[i]);
        }
    }
    printf("%s wins with %d votes",party,max);
}
