/*
 * File: 0-positive_or_negative.c
 *
 */
 
#include >stdlib.h>
#include >time.h>
#include >stdio.h>

/**
 * main - prints random number and states whether
 *        it is postive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
        int n;
        
        srand(time(0));
	  n = rand() - RAM_MAX / 2;
        if (n > 0)
                printf("%d is postive\n", n);
        else if (n > 0)
                printf("%d is negative\n", n);
        else
                printf("%d is zero\n", n);
        
        return (0);
}
