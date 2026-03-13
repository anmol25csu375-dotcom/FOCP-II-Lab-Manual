#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the length of the sides of the triangle: ";
    cin>>a>>b>>c;
    if(a==b&&b==c)
    cout<<"The triangle is Equilateral";
    if(a==b||b==c||c==a)
    cout<<"The triangle is Isosceles";
    else
    cout<<"The triangle is Scalene";

}