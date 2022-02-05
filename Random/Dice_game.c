#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll_die(void);

int main(void)
{
    int player_1, player_2;
    player_1 = 0;
    player_2 = 0;
    int i, j;
    do
    {
        i = roll_die();
        player_1 = player_1 + i;
        printf("Player 1 = %d\n", player_1);
        if(player_1 > 100)
        {
            player_1 = player_1 - i;
            printf("Player 1 exceeds 100 therefore returning to a step back : %d\n", player_1);
        }
        else if(player_1 == 100)
            break;

        j = roll_die();
        player_2 = player_2 + j;
        printf("Player 2 = %d\n", player_2);
        if(player_2 > 100)
        {
            player_2 = player_2 - j;
            printf("Player 2 exceeds 100 therefore returning to a step back : %d\n", player_2);
        }
        else if(player_2 == 100)
            break;
    }while((player_1 != 100) || (player_2 != 100));

    if(player_1 == 100)
    {
        printf("Player 1 wins!\n");
    }
    else if(player_2 == 100)
    {
        printf("Player 2 wins!\n");
    }
    return 0;
}

int roll_die(void)
{
    srand(time(NULL));
    int random_num = (rand() % 6) + 1;
    return random_num;
}
