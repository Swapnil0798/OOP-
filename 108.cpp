using namespace std;
#include<iostream>
class arrayx
{
  private:
   int*arr;
   int isize;

   public:
     arrayx(int ivalue)
     {
        this->isize=ivalue;
        arr=new int[isize];
     }
     ~arrayx()
     {
         delete[]arr;
     }
     void accept()
     {   
         int icnt=0;
         cout<<"enter the element\n:";
         
     for(icnt=0;icnt<=isize;icnt++)
     {
         cin>>arr[icnt];
     }
     }
     void display()
     {   
          int icnt=0;
         cout<<"enter the array element are\n";
         for(icnt=0;icnt<isize;icnt++)
         {
             cout<<arr[icnt]<<endl;
         }
     }

     int sum()
   {
    int isum=0;
    int icnt=0;
    for(icnt=0;icnt<=isize;icnt++)
    {
        isum=isum+arr[icnt];
    }
    return isum;
  }

  };

int main()
{
  int iret=0;

  arrayx obj1(5);
  obj1.accept();
  obj1.display();

  iret=obj1.sum();
  cout<<"addition is :"<<iret;



    return 0;
}