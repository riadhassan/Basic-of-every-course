//author : Md. Riad hassan
//Insertion short
/*
Algorithm
   *1.	Select a number.
   *2.	Check it’s previous number
      i)	If it is bigger than select number, transfer it next position.
     ii)	If smaller, do nothing
   *3.  Set the select number in the vacancy place.
*/

#include <stdio.h>

int main()
{
    int num[100], n, i, j, x;
    printf("How many number:");
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 1; i <= n; i++)
    {
        x = num[i];
        j=i-1;

        while(j >= 1 && num[j] > x)
        {
            num[j+1] = num[j];
            j--;
        }

        num[j+1] = x;
    }

    for(i = 1; i<= n; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}
