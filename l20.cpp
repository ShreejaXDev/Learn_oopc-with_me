//find smallest or largest number in array

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

     int minimum=a[0];
      int maximum=a[0];

      for(int i=0 ; i<n ; i++)
     {
        if(a[i]<a[0])
        {
            minimum=a[i];

        }

        if(a[i]>a[0])
        {
            maximum=a[i];
        }
     }
     cout<<"minimum element is :"<<minimum;
     cout<<endl<<"maximum element is :"<<maximum;

//using inbuilt function

cout<<endl<<"using inbuilt functions :";

for(int i=0 ; i<n ; i++)
{
    minimum=min(a[i],minimum);
    maximum=max(a[i],maximum);


}

cout<<endl<<"minimum :"<<minimum;
cout<<endl<<"maximum :"<<maximum;
}
