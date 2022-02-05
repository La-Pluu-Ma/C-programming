#include<stdio.h>

enum suit{club = 0, diamond = 10, heart = 20, spade = 30};

int main(void)
{
    enum suit card;
    card = diamond;
    printf("%d", card);
}
