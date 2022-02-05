#include<stdio.h>
int main(void)
{
    int numb1, numb2;
    char op;

    printf("Enter the operator + , - , * , / : ");
    scanf("%c", &op);

    printf("Enter two numbers : ");
    scanf("%d %d", &numb1 , &numb2);

    switch(op)
        {
            case '+':
            {
                printf("%d + %d = %d\n", numb1 , numb2 , numb1 + numb2);
                break;
            }
            case '-':
            {
                printf("%d - %d = %d\n", numb1 , numb2 , numb1 - numb2);
                break;
            }
            case '*':
            {
                printf("%d x %d = %d\n", numb1 , numb2 , numb1 * numb2);
                break;
            }
            case '/':
            {
                printf("%d / %d = %.2f\n", numb1 , numb2 , (float)numb1 / (float)numb2);
                break;
            }
            default:
                {
                    printf("Invalid operator!\n");
                    break;
                }
        }
        return 0;
}
