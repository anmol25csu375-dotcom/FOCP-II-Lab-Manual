#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter no. of no. of sales entry ";
    cin>>n;
    cout<<"Enter the sales ";
    int arr[n-1];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++)
    {
       temp=arr[0];
       if(temp<arr[i])
       temp=arr[i];
    }
    cout<<"Highest no. of sales is "<<temp;
}