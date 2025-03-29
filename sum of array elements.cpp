

//sum of array elements


#include<iostream>
using namespace std;
int main()
{
int sum=0;

    int n;


    cout<<"enter size of an array :";
     cin>>n;

     int a[n];



     for(int i=0 ; i<n ; i++)
     {
         cin>>a[i];
     }

for(int i=0 ; i<n ; i++)
     {
         sum+=a[i];
     }
cout<<endl<<"sum :"<<sum;
}
