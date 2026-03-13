#include<iostream>
using namespace std;
class Q5
{
 int a,b,c;
 public:
 void getData()
 {
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Enter '1' to swap  the numbers using temporary variable and '0' to swap without it";
    cin>>c;
 }
 void checkData()
 {
    if(c==1)
    {
     c=a;
     a=b;
     b=c;
    }
    else if(c==0)
    {
     a=a*b;
     b=a/b;
     a=a/b;
    }
    else
     cout<<"Invalid Input";
 }
} ;
int main(){
   Q5 ob;
   ob.checkData();
   ob.getData();
}