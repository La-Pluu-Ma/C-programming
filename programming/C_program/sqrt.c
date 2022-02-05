#include<stdio.h>
#include<math.h>
float square_root(int);
int main(void)
{
    int num;
    float out;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    out = square_root(num);
    printf("Square root of %d is %f.\n", num, out);
    return 0;
}
float square_root(int x)
{
    float y;
    y = sqrt((float)x);
    return y;
}
