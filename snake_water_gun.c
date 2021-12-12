/* #Snake Water Gun Game
Program should be able to print the result after you choose the Snake/Water or Gun
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // gg
    // ww
    if (you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sg
    // sw
    // ws
    // gw
    // wg

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("**************************************************\n");
    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun\n");
    scanf("%c", &you);
    int result = SnakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("You Lose!\n");
        printf("Better Luck Next Time!\n");
        printf("\n");
    }
    printf("You choose %c and compter choose %c.\n", you, comp);
    printf("******************************************\n");
    return 0;
}