#include <stdio.h>
int main(void)
{
    int X , Y;
    printf("Enter X coordinate : ");
    scanf("%d", &X);
    printf("Enter Y coordinate : ");
    scanf("%d", &Y);

    if(X== 0 && Y == 0)
        printf("The entered coordinate lies on the origin.\n");
    else if(X > 0 && Y > 0)
            printf("(%d,%d) is in first quadrant.\n", X , Y);
    else if(X > 0 && Y < 0)
            printf("(%d,%d) is in second quadrant.\n", X , Y);
    else if(X < 0 && Y < 0)
            printf("(%d,%d) is in third quadrant.\n", X , Y);
    else if(X < 0 && Y > 0)
            printf("(%d,%d) is in fourth quadrant.\n", X , Y);
    return 0;
}
