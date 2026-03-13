#include <iostream>
using namespace std;
class Average
{
    private:
    int a,b,c;
    public:
    void getData();
    void displaySum();
};
void Average ::getData()
{
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
}
void Average ::displaySum()
{
    float avg = (a + b + c) / 3.0;
    cout<<"Average is: "<<avg;
}
int main()
{
    Average avg1;
    avg1.getData();
    avg1.displaySum();
}