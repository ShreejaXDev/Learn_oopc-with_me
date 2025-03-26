//decimal to binary

#include<iostream>
using namespace std;


int dectobinary(int decimal)
{
    int ans=0,pow=1;

    while(decimal>0)
    {
        int rem=decimal%2;
        decimal/=2;
        ans+=(rem *pow);
        pow*=10;
    }
return ans;
}
 int main()
 {
    for(int i=0 ; i<=10 ; i++)
    {
         cout<<i <<" :  "<<dectobinary(i)<<endl;
    }



 }
