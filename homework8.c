#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lowerc(char str[]);
void removeSpaces(char *str);
void swapcase(char str[]);
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeSpaces(str);
    printf("String without spaces: %s\n", str);
    lowerc(str);
    swapcase(str);
    return 0;
}

void lowerc(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr("aeiouAEIOU", str[i])) {  // Check vowels in both cases
            str[i] = toupper(str[i]);
        }
    }
    printf("Final output after vowel capitalization: %s\n", str);
}

void removeSpaces(char *str){
    int i, j = 0;
    int len = strlen(str);
    
    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i]; // Copy non-space characters
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}
void swapcase(char str[] ){
    for(int i = 0; str[i] != '\0' ; i++){
        if(strchr("abcdefghijklmnopqrstuvwxyz" , str[i])){
            str[i] = toupper(str[i]);
    }
        else if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ" , str[i])){
            str[i] = tolower(str[i]);
        }
    }
    printf("%s" , str);
}


