#include <stdio.h>
#include <string.h>
// structures
// user defined
struct  student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1,s2,s3; // struct student - data type , s1 - variable name
    s1.roll = 510;
    s1.cgpa = 10.0;
    //s1.name = "Ankita";
    strcpy(s1.name ," ankita");
    s2.roll = 210;
    s2.cgpa = 9.8;
    strcpy(s2.name ," arnab");
    s3.roll = 530;
    s3.cgpa = 9.9;
    //s1.name = "Ankita";
    strcpy(s3.name ,"abhik");
    printf("%s with roll %d has a cgpa of %f" , s1.name,s1.roll,s1.cgpa);
    printf("%s with roll %d has a cgpa of %f" , s2.name,s2.roll,s2.cgpa);
    printf("%s with roll %d has a cgpa of %f" , s3.name,s3.roll,s3.cgpa);
    return 0;
}