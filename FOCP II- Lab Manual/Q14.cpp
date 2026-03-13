#include<iostream>
#include <string>
using namespace std;
class Q14
{
    double n1,n2;
     double sol;
        public:
        double getNum()
        {
            cout<<"Enter  number ";
            cin>>n1;
            return n1;
        }
        
        double addData(int n3)
        {  
            cout<<"Enter a number to add ";
            cin>>n2;
            sol=n3+n2;
            cout<<"Solution after addition "<<sol;
            return sol;
        }
        double subData(int n3)
        {
            cout<<"Enter a number to subtract ";
            cin>>n2;
            sol=n3-n2;
            cout<<"Solution after subtraction "<<sol;
            return sol;
        }
       double mulData(int n3)
        {
           cout<<"Enter a number to multiply ";
            cin>>n2; 
            sol=n3*n2;
            cout<<"Solution after multiplication "<<sol;
            return sol;
        }
        double divData(int n3)
        {
             cout<<"Enter a number to divide ";
            cin>>n2; 
            sol=n3/n2;
            cout<<"Solution after division "<<sol;
             return sol;
        } double modData(int n3)
        {
             cout<<"Enter a number to find remainder of  ";
            cin>>n2; 
            sol=n3%n2;
            cout<<"Solution after modulous "<<sol;
             return sol;
        }    
};
int main()
{
    Q14 obj;
    int n;
    double nn=obj.getNum();
    int i=1;int j=2;
    while(i>0){
         cout<<"Enter 2 for addition, 3 for subtraction, 4 for multiplication and 5 for division,6 for modulous ";
         cin>>n;
        if(n==2)
         nn=obj.addData(nn);
        if(n==3)
         nn=obj.subData(nn);
        if(n==4)
         nn=obj.mulData(nn);
        if(n==5)
        nn=obj.divData(nn);
        if(n==6)
        nn=obj.modData(nn);
        cout<<"Do you wish to continue? 1 for YES 0 for NO ";
        cin>>j;
        if(j==0)
        i=0;
        n=0;
    }
}