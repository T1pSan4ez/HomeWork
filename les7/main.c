#include <stdio.h>
#include <stdlib.h>
#define size 7
#define SIZE 12


void qSort(int *num, int fnum, int lnum)
{
    int tmp;
    int f=fnum;
    int l=lnum;
    tmp = num[fnum];
    while (fnum < lnum)
    {
    while ((num[lnum] >= tmp) && (fnum < lnum))
      lnum--;
    if (fnum != lnum)
    {
      num[fnum] = num[lnum];
    }
    while ((num[fnum] <= tmp) && (fnum < lnum))
      fnum++;
    if (fnum != lnum)
    {
      num[lnum] = num[fnum];
      lnum--;
    }
  }
  num[fnum] = tmp;
  tmp = fnum;
  fnum = f;
  lnum = l;
  if (fnum < tmp)
    qSort(num, fnum, tmp - 1);
  if (lnum > tmp)
    qSort(num, tmp + 1, lnum);
}



int main()
{
    //Task1
    printf("\nTask 1\n\n");
    int arr[size];

    for (int i = 0; i<size; i++)
    arr[i] = rand() % 100;

    for (int i = 0; i<size; i++)
    {
          printf("%d ", arr[i]);
    }
    printf("\n");
    qSort(arr, 0, size-1);
    for (int i = 0; i<size; i++)
    {
         printf("%d ", arr[i]);
    }
    printf("\n");
    getchar();

    //Task2

    return 0;
}
