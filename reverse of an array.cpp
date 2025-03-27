//reverse of an array


#include<iostream>
using namespace std;
int main()
{


    int n;


    cout<<"enter size of an array :";
     cin>>n;

     int a[n];



     for(int i=0 ; i<n ; i++)
     {
         cin>>a[i];
     }


cout<<endl<<endl;



     for(int i=0 ; i<n/2 ; i++)
     {
         int temp=a[i];
         a[i]=a[n-i-1];
         a[n-i-1]=temp;

     }
     for(int i=0 ; i<n ; i++)
     {
         cout<<a[i]<<endl;
     }




}
