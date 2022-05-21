#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool snumber(int a)
{

    if (a>1)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
              return false;
            }
             return true;
        }
    }
    else
    {
      return false;
    }
}
int main()
{
    int a;
    printf("Enter your number = ");
    scanf("%d", &a);
    printf("Is prime: %d\n", snumber(a));

    return 0;
}
