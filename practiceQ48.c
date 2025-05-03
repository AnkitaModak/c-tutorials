#include <stdio.h>

int main() {
    /*char name[100];
    scanf("%s" , name);
    printf("the name is %s \n" , name);*/

    char fullname[100];
    //gets(fullname);
    fgets(fullname,100,stdin);
    puts(fullname);
    return 0;
}