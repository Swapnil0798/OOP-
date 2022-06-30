#include<stdio.h>
//input: 4
//output: 4*3*2*1=24
int factorial(int ino)
{
    int ifact=1;
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
       ifact*=icnt;//ifact=ifact*icnt;
    }
 return ifact;
}
///////////////////////////////////////
//accept no from user anfd diplay factorial
//////////////////////////////////////
int main()
{ 
     int ivalue=0;
     int iret =0;
     printf("enter the no\n");
     scanf("%d",&ivalue);

     iret=factorial(ivalue);
     printf("%d",iret);

    return 0;
}