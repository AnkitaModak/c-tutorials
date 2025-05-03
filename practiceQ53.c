#include <stdio.h>
int vowel(char str[]);
int cons(char str[]);
int main() {
    char str[100];
    fgets(str , 100 , stdin);
    printf("vowels are %d \n " ,vowel(str));
    printf("consonants are %d" , cons(str));
    return 0;
}

int vowel(char str[])
{   int count = 0;
    for(int i = 0;str[i] != '\0'; i++){
        if(str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}
int cons(char str[])
{ 
    int count = 0;
    for(int i = 0;str[i] != '\0'; i++){
        if(str[i] !='a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' '){
            count++;
        }
    }
    return count;
}
