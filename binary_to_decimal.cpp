//binary to decimal number


#include<iostream>
using namespace std;

int binarytodecimal(int x)
{
    int ans=0 ,pow=1;

    while(x>0)
    {
        int rem= x%10;
        ans+=(rem *pow);
        x/=10;
        pow*=2;
    }

    return ans;
}

int main()
{

    cout<<binarytodecimal(1000);
}
