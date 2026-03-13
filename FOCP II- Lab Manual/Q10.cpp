#include<iostream>
using namespace std;
class Q10
{
    int yr;
    public:
    void getData()
    {
    cout<<"Enter the year to check";
    cin>>yr;
    }
    void checkData()
    {
      
    if(yr%4==0 && yr%100!=0 || yr%400==0)
        cout<<"This year's February has 29 days.";
    else
        cout<<"This year's February has 28 days.";
    }
};
int main(){
    Q10 obj;
    obj.checkData();
    obj.checkData();
}