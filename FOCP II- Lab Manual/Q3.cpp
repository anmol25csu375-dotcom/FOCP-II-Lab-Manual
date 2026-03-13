#include<iostream>
using namespace std;
class Temperature
{
    private:
    float c,f;
    string d;
    public :
    void getData();
};
void Temperature :: getData()
{
    cout<<"Enter the C to input in Celsiusor F for Fahrenheit ";
    cin>>d;
     if(d=="c" || d=="C"){
        cout<<"Enter the temprature in Celsius";
        cin>>c;
        f=(c*9/5)+32;
        cout<<"Temperature in Fahrenheit: "<<f;
    }
    else if(d=="f" || d=="F"){
        cout<<"Enter the temprature in Fahrenheit";
        cin>>f;
        c=(f-32)*5/9;
        cout<<"Temperature in Celsius: "<<c;
    }
    else
    cout<<"Invalid Input";
}
int main()
{
   Temperature t;
   t.getData();
}