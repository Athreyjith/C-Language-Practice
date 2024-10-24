#include<stdio.h>
#include<math.h>
int main()
{
    double A = sqrt(5);
    double b= pow(2,3);
    double c= round(3.14);  // nearest both d and e
    int d=ceil(5);  // nearest roundoff greater value         - %d
    int e= floor(4.9); // nearest roundoff smaller value
    double f=fabs(-5);  // convert -ive value into +ive value  - %lf
    double g=log(4);  
    double s=sin(60);
    double j=tan(30);

    printf(" answer is %lf",s);
return 0;
}