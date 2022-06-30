/*
* * * *
* * * *
* * * *
* * * *
*/
using namespace std;
#include<iostream>

class patern
{
    private:
    int irow;
    int icol;
    public:
    patern(int a,int b)
    {
        this->irow=a;
        this->icol=b;
    }
     void display()
    {
        int i=0,j=0;
      for(i=1;i<irow;i++)
      {
          for(j=1;j<icol;j++)
          {
              cout<<"*"<<"\t";
          }
          cout<<endl;
      }
    }
    };

int main()
{
     patern obj(4,4);
     obj.display();
    return 0;
}