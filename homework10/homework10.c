#include <stdio.h>

int main() {
   /* // read a string from a file and output to the user

    FILE *fptr;
    fptr = fopen("Test.txt" , "r");
    char ch;
    for(int i = 0 ; i < 5; i++ )
    {   fscanf(fptr ,"%c" , &ch);
        printf("character = %c\n " , ch);
    }
    fclose(fptr);*/
    
    /*// replace data with the number of vowels
    FILE *fptr;
    fptr = fopen("Test.txt" , "r");
    char ch;
    int count =0;
    ch = fgetc(fptr);
    while(ch != EOF){
       printf("%c", ch) ;
       ch = fgetc(fptr);
       if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch == 'U'  ){
            count++;
        }
    }
    printf("\n");

    fclose(fptr);
    
    fptr = fopen("count.txt" , "w");
    fprintf(fptr , "%d" , count);
    printf("%d no. of vowels are in the TXT file" ,count);
    fclose(fptr);*/

    FILE *fptr;
    fptr = fopen("student.txt" , "w");
    char name[100];
    char sub[100];
    int sem;
    float cgpa;
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    fprintf(fptr, "| %-20s | %-15s | %-8s | %-4s |\n", "STUDENT NAME", "SUBJECT", "SEMESTER", "CGPA");
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    printf("::Enter Student's Names::")
    for(int i = 0; i < 6; i++){
        printf("Enter student's name: ");
        scanf("%s" , &name);
        printf("Enter sub:");
        scanf("%s" , &sub);
        printf("Enter sem :");
        scanf("%d" , &sem);
        printf("enter cgpa:");
        scanf("%f" , &cgpa);

        fprintf(fptr, "| %-20s | %-15s | %-8d | %-4.2f |\n", name, sub, sem, cgpa);
    }
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    fclose(fptr);
    printf("Thank you!!");
    return 0;
}
