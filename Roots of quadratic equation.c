/* Program to find roots of quadratic equation */

#include <stdio.h>
#include <math.h>

float qroots(float,float,float);

float qroots(float a,float b,float c){
    if(a==0){
        printf("Given equation is linear and has root:%f",(-c)/b);
    }
    else if(a!=0){
        double d = (b*b) - (4*a*c);
        double e = sqrt(d);
        float f = e;
        if(d==0){
            printf("Equation have equal roots:%f",(-b)/(2*a));
        }
        else if(d<0){
            printf("Equation have imaginary roots");
        }
        else if(d>0){
            printf ("Equation have distinct and real roots:%f,%f",(-b+f)/(2*a),(-b-f)/(2*a));
        }
    }
}
int main(){
    qroots(1,5,5);
}