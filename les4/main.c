#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Task 1
void convert(int a)
{
    if (a != 0)
    {
        convert(a/2);
    }
    else
    {
        return;
    }
    printf("%d", a%2);
    return;
}
double stepen(int b, int c)
{
   int d = 1;
   while (c){
    if(c%2){
        d *= b;
        c--;
    }
    else
    {
        b *= b;
        c /= 2;
    }
   }
   return d;
}
double recStepen(int e, int f)
{
    if(f == 0)
        {
        return 1;
    }
    if(f%2==1)
    {
        return recStepen(e, f - 1) * e;
    }
    else
    {
        int g = recStepen(e,f/2);
    return g*g;
    }
}

int main()
{
    setlocale(LC_CTYPE, "");
    //Task 1
    printf("Task 1\n");
    int a;
    printf("¬ведите число\n");
    scanf("%d", &a);
    convert(a);

    //Task 2
    printf("\n\nTask 2\n");
    int b, c;
    printf("¬ведите число:\n");
    scanf("%d", &b);
    printf("¬ведите степень:\n");
    scanf("%d", &c);
    printf("ќтвет:%lf\n ", stepen (b, c));

    //Task 3
    printf("\n\nTask 3\n");
    int e, f;
    printf("¬ведите число:\n");
    scanf("%d", &e);
    printf("¬ведите степень:\n");
    scanf("%d", &f);
    printf("ќтвет:%lf\n ", recStepen (e, f));

    //Task 4
    printf("\n\nTask 4\n");

    return 0;
}
