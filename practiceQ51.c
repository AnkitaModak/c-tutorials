#include <stdio.h>
#include <string.h>

int main() {
    char pass[100];
    scanf("%s" ,pass);
    char salt[] = "123";
    //char newpass[200];
    //strcpy(newpass , pass);
    strcat(pass,salt);
    printf("the new password is %s" ,pass);
    return 0;
}

