/*
to compile : gcc -o lab2 lab2.c
to execute : ./lab2

*/


#include<stdio.h>
#include<stdlib.h>

void printarr(int* num,int count)
{
    int i;
    printf("Array after insertion sort: [");
    for(i=0;i<count;i++)
     {
       printf(" %d ",num[i]);
     }

   printf("]\n");
}

void sort(int* num, int count)
{
	int i,temp,j;	
  for(i=1;i<count;i++)
   {
     	temp=num[i];
        j=i-1;
      while((temp<num[j])&&(j>=0))
	{
          num[j+1]=num[j];
          j=j-1;
        }
      num[j+1]=temp;
    }
}



int main()
{
	
   int i, j, count, temp;
   int *number;

   printf(" how many number of elements are to be sorted ? :  ");
   scanf("%d",&count);
   printf("Enter %d elements: \n ", count);

   number = (int*)malloc(count * sizeof(int));
   
  for(i=0;i<count;i++)
	{
      scanf("%d",&number[i]);
	}
	
    printf("entered array is [");
    for(i=0;i<count;i++)
     {
        printf(" %d ",number[i]);
     }	
	printf("]\n");

   sort(number,count);
   printarr(number,count);

   return 0;
}