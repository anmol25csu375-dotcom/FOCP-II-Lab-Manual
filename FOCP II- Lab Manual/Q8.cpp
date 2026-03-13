#include<iostream>
using namespace std;
class q8
{
    int n;
    public:
    void getData()
    {
      int n;
    cout<<"Enter numeric event id ";
    cin>>n;
    }
    void buzzData()
    {
      int i=1;
      while(i<=n)
      {if(i%3==0)
      cout<<i<<"Buzz ";
      if(i%5==0)
      cout<<i<<"Fizz ";
      i++;
    
    }
}
};
int main(){
    q8 obj;
    obj.getData();
    obj.buzzData();
}