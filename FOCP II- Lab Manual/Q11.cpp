#include<iostream>
using namespace std;
int main(){
    int n;
    double p,amt;
    cout<<"Enter no. of orders and price of the item: ";
    cin>>n>>p;
    amt=n*p;
    if(n>1000)
    {
     amt=amt-amt*0.1;
     cout<<"Total amount after discount: "<<amt;
    }
    else
    {
     cout<<"items not available for discount";
     cout<<"Total amount: "<<amt;
    }
}