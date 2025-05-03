#include <stdio.h>
#include <string.h>
void slice(char str ,int n , int m );
int main() {
    char str[100];
    fgets(str , 100 , stdin);
    puts(slice(str));

}

void slice(char str,int n ,int m)

{   char newstr[100];
    for(int i = n ; int i <= m ; i++)
        strcat(newstr,i);
    return newstr;
}
