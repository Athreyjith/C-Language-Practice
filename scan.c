#include<stdio.h>
int main(){
    char name[10] = "hello";
    printf(" whats ur name");
    fgets(name, 100, stdin);

    printf("ur name is %s", name);
    return 0;
}