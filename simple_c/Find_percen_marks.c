#include <stdio.h>
int main(void)
{
    int a , b , c , d , e , f , g;
    int p;
    int t = 600;
    printf("Enter marks of six subjects seperated by space.\n");
    scanf("%d %d %d %d %d %d", &a , &b , &c , &d , &e , &f);
    g = a + b + c + d + e + f;
    p = (g*100)/600;
    if(p < 25)
    {
        printf("Grade F.\n");
    }
    else if(p >= 25 && p < 45)
    {
        printf("Grade E.\n");
    }
    else if(p >= 45 && p < 50)
    {
        printf("Grade D.\n");
    }
    else if(p >= 50 && p < 60)
    {
        printf("Grade C.\n");
    }
    else if(p >= 60 && p < 80)
    {
        printf("Grade B.\n");
    }
    else
    {
        printf("Grade A.\n");
    }
    return 0;
}
