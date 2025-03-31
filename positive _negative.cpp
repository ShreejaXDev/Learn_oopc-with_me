//is number is positive negative or zero


#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"enter a number ";
    cin>>n;

    if(n>0)
    {
        cout<<"enterd number is positive";
    }
    else if(n<0)
    {
        cout<<"entered number is negatve";
    }
    else
    {
        cout<<"entered number is zero ";
    }
}
