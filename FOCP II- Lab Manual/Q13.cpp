#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    double x1,x2;
    cout<<"Enter the a,b,c of the quadratic equation respectively ";
    cin>>a>>b>>c;
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2 =(-b-sqrt(b*b-4*a*c))/2*a;
    cout<<"The roots of the quadratic equation are "<<x1<<","<<x2;
    cin.get();
}