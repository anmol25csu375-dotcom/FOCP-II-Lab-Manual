#include<iostream>
using namespace std;
class Q7
{
 int a,b,c;
 public:
 void getData()
 {
    cout<<"Enter the scores of three players ";
    cin>>a>>b>>c;
 }
 void checkData()
 {
    if(a>b && a>c)
        cout<<"Player 1 is the winner";
    else if(b>a && b>c)
        cout<<"Player 2 is the winner";
    else
        cout<<"Player 3 is the winner";

 }
};
int main(){
    Q7 obj;
    obj.checkData();
    obj.getData();
   }