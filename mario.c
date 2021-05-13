#include <stdio.h>
#include <cs50.h>

int height_int(void);
int main(void){

    //Assign input data from user
    int n  = height_int() ;

    //Draw the tower
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1; j <= 18; j++)
        {
            if (8 - j < i && j < 9)
            {
                printf("#");
            }
            else if (j == 9 || j == 10)
            {
                printf(" ");
            }
            else if (j > 10 && j - 11 < i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

//user input data
int height_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}