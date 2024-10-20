#include<stdio.h>
#include <stdbool.h>  // required for boolean  -  This header defines the bool type

int main()
{
    int x ; // declaration
    x= 10; // initialization
    int s=1000000000;
    long long int rat=1000000000;
    int age = 29;
    float num =5.6;  // 4 byte of data  - 6-7 digits
    double d =3.444545545; // 8 byte of data - 15 to 16 digits  - %lf
    char name ='n';  // can only hold one charater or string    i range 1 byte  (-127 to 128) %d or %c 
    char name1[] = "char1"; // array of character
    char alpha1 = 100;
    unsigned char qq= 24; // range 0 to 255
    bool ti = true;  //- %d    true =1 and false = 0
    short int s =34769 ; // 2 bytes  range (-32768 to 32768)   %d
    unsigned short int  ss =500;// 2 bytes  range (65535)    %d


    printf(" i am %d years old \n", age);   
    printf(" first letter is %c\n",name);
    printf("my percentage is %f\n",num);
    printf("my name is %s\n",name1);
    printf("my 2nd percentage is %0.2f\n",num);
    printf(" this is %d\n", ti);

    printf("small aplha is %c\n",alpha1);  // it will convert to number to alpha
     printf("small aplha is %c\n",qq);


     printf(" this is the %d\n", s);
      printf(" this is the %d", ss);
    return 0;
}