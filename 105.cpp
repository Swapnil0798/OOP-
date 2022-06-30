using namespace std;
#include<iostream>
//input: 4
//output: 4*3*2*1=24
class number
{
 private:
     int ino;
 public:
 void accept()
 {
     cout<<"enter the value:"<<endl;
     cin>>this->ino;
 }
 void display()
 {
     cout<<"value is:"<<this->ino<<endl;
 }

 int factorial()
{
    int ifact=1;
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
       ifact*=icnt;//ifact=ifact*icnt;
    }
 return ifact;
 }
};
///////////////////////////////////////
//accept no from user anfd diplay factorial
//////////////////////////////////////
int main()
{ 
     number nobj;
     nobj.accept();
     nobj.display();
     
     int iret =0;
     iret=nobj.factorial();
     cout<<"factorial are:"<<iret<<endl;
     

    return 0;
}