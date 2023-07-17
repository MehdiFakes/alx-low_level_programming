#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combination of txo digits
 * Return: Always 0 (Success)
 */

int main(void)
{
        int d1 = 0, d2, d3;

        while (d1 <= 9)
        {
                d2 = 0;
                while (d2 <= 9)
                {
			d3 = 0;
			while (d3 <= 9)
			{	
                	        if (d1 != d2 && d1 > d2)
                	        {
                        	        putchar(d1 + 48);
                                	putchar(d2 + 48);

                     	           if (d1 + d2 != 17)
                        	        {
                        	                putchar(',');
                        	                putchar(' ');
					
				       	}
				}
			}
			d3++;
		}
                d2++;
	}
        d1++;
        
        putchar('\n');

	return (0);
}
