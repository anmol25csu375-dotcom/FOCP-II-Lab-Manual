#include<iostream>
using namespace std;
class Q9
{
    char c=' ';
    public:
    void getData()
    {
     cout<<"Enter a character ";
     cin>>c;
    }
    void checkData()
    {
       if((int)c>=65 && (int)c<=90 || (int)c>=97 && (int)c<=122)
    {if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        cout<<"The character is a vowel ";
    else
        cout<<"The character is a consonant  ";
    }
    else
     cout<<"The character is  a numerical digit ";

    }    
};
int main()
{
    Q9 obj;
    obj.getData();
    obj.checkData();
   }