#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(void);
int e, s;

int main(void)
{
    //Variable declaration
    int ss = get_start_size();
    int es = get_end_size();
    int y = 0;

    //Calculate number of years until we reach threshold & print number of years
    if (es == ss)
    {
        printf("Years: 0\n");
    }
    else
    {
        do
        {
            ss = ss + (ss / 3) - (ss / 4);
            y++;
        }
        while (ss < es);

        printf("Years: %i\n", y);
    }
}

//Prompt for start size
int get_start_size(void)
{
    do
    {
        s = get_int("Start Size? : ");
    }
    while (s < 9);
    return s;
}
//Prompt for end size
int get_end_size(void)
{
    do
    {
        e = get_int("End size?: ");
    }
    while (e < s);
    return e;
}