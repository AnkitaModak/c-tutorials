#include <stdio.h>
void greet();
int main() {
    greet();
}
void greet() {
    char lan;
    printf("please enter language : ");
    scanf("%c",&lan);
    if(lan == 'i'){
        printf("Namaste");}
    else if (lan == 'f'){
        printf("Bonjour");
    }
    else{
        printf("please give correct language!");
    }
}