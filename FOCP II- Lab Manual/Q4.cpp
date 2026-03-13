#include<iostream>
using namespace std;
class Q4{
 int in,q;
    double p,amt;   
    public:
    void getData()
    {
       cout<<"Enter item no.,quantity and price of the item";
    cin>>in>>q>>p;
    }
    void checkData()
    {
        amt=q*p;
    cout<<"Total Amount: "<<amt;
    amt=amt-amt*20/100;
    cout<<"Total Amount after '20%' discount: "<<amt;

    }
};
int main(){
  Q4 obj;
  obj.checkData();
  obj.getData();

}