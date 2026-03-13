#include<iostream>
using namespace std;
class Area
{
    private:
    float r;
    public:
    void getData();
    void displayArea();
};
void Area :: getData()
{
    cout<<"Enter the radius : ";
    cin>>r;
}
void Area :: displayArea()
{
    float a;
    a=3.14*r*r;
    cout<<"Area of circle : "<<a;
}
int main()
{
    Area a1;
    a1.getData();
    a1.displayArea();
    return 0;
}