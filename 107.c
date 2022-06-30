#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int isize)
{
    int isum=0;
    int icnt=0;
    for(icnt=0;icnt<=isize;icnt++)
    {
        isum=isum+arr[icnt];
    }
    return isum;
}

int main()
{
    int  ilength=0;
    int icnt=0;
    int iret=0;

    int*ptr=NULL;
    printf("enter the no of element\n");
    scanf("%d",&ilength);
    ptr=(int*)malloc(sizeof(int)*ilength);

     printf("enter the value of array");
     for(icnt=0;icnt<= ilength;icnt++)
     {
         scanf("%d",&ptr[icnt]);
     }
     iret=sum(ptr, ilength);
     printf("addition is :%d \n",iret);
    }