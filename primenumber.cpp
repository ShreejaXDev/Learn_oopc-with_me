
//check whether the number is prime or not?


#include<iostream>
using namespace std;

int main()
{
    int n,c;

    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==2)
    {
        cout<<"given number is prime";
    }
    else
        cout<<"give number is not prime ";
}
