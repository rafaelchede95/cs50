#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int ("Type a number: ");
    }
    while (n < 1);

    //for lines
    for (int i = 1; i <= n; i++)
    {
        //for spaces
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        //for columns
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
