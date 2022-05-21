#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define size 11
//Task 1
void bubble()
{
const int rows = 3;
const int cols = 3;
int tmp;
int arr[3][3]={{1,9,2},
               {5,7,6},
               {4,3,8}};


for (int i=0; i<rows; i++)
{
    for (int j=0; j<cols; j++)
    {

        printf("%3d",arr[i][j]);
    }
printf("\n");

}
printf("\n");

for (int k = 0; k < (rows * cols - 1); k++)
    {
    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < cols; j++)
            {
            if (i == rows-1 && j == cols-1)
                {
                continue;
                }
            if (arr[i][j] > arr[i][j+1])
                {
                tmp = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1]=tmp;
                }
            }
        }
    }
for (int i=0; i<rows; i++)
{
    for (int j=0; j<cols; j++)
    {

        printf("%3d",arr[i][j]);
    }
printf("\n");
}
}

//Task 2
void TPK(int * array)
{
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }

    //reverse
    for(int i=0; i < size/2; i++)
    {
        int temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }

    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i] );
    }
    //reverse end
    int limit = 400;
    printf("\n");
    for(int i=0;i<size;i++)
    {
       if (a[i]<limit)
        {
            a[i] = sqrt(fabs(a[i])) + 5 * pow(a[i], 3);
            printf("%d ", a[i]);
        }
    }
     printf("\n");
     printf("\nNumbers > 400 = ");
     for(int i=0;i<size;i++)
     {
        if (a[i]>limit)
          printf("%d ", a[i]);
     }



}



int main()
{
    //Task 1
    printf("Task 1\n\n");
    bubble();

    //Task 2
    printf("Task 2\n");
    int a[size];
    TPK(a);

    return 0;
}
