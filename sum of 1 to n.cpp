//sum of  odd numbers of 1 to n numbers



#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"enter n";
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
  if(i%2!=0)
{
    sum+=i;
}


    }

     cout<<sum<<endl;

}
