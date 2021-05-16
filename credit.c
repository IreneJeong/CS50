#include <stdio.h>
#include <cs50.h>

long first_2digits(long n);
int count(long n);

int main(void)
{
    long card_number = get_long("What is your credit Card Number?");
    long digits = first_2digits(card_number);
    int count1 = count(card_number);

//Luhn's Algorithm
    long cn_even=0, sum=0, sum1=0, odd=0, even=0, sum_even=0, sum_odd=0, even2=0, even_2=0;

    for(int i = 1; i < 7; i++)
    {
        odd = card_number % 10 ;
        cn_even = card_number / 10;
        even=cn_even % 10;
        card_number = cn_even / 10;

        even_2 = even * 2;
        if(even_2 > 9)
        {
            even2 = (even_2 % 10) + (even_2 / 10);
        }else
        {
            even2 = even_2;
        }
        sum_even = sum_even + even2;
        sum_odd= sum_odd + odd;
        sum=sum_even +sum_odd;
    }
    if(sum % 10 == 0)
    {
        if(digits == 34 || digits == 37)
        {
            if(count1 == 15){
                printf("AMEX\n");
            }else {
                printf("INVALID\n");
            }
        }
        if(digits > 50 && digits < 56)
        {
            if(count1==16){
                printf("Master\n");
            }else {
                printf("INVALID\n");
            }
        }
        if(digits/10 == 4)
        {
            if(count1 == 13 || count1 == 16){
                printf("Visa\n");
            }else {
                printf("INVALID\n");
            }
        }
    }else
    {
        printf("INVALID\n");
    }

}

long first_2digits (long n)
{
    while(n >= 100)
    {
        n /= 100;
    }
    return n;
}

int count(long n)
{
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }return count;
}