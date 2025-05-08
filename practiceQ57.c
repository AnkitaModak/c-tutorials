#include <stdio.h>
struct Vector{
    int x;
    int y;
};
void vectorsum(struct Vector v1,struct Vector v2 ,struct Vector sum);
int main() {
    struct Vector v1 = {5,10};
    struct Vector v2 = {3,7};
    struct Vector sum = {0};
    vectorsum(v1,v2,sum);
    return 0;
}
void vectorsum(struct Vector v1,struct Vector v2 ,struct Vector sum)
{   sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum is (%di + %dj)" , sum.x,sum.y);
}
