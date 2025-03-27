//linear search

#include<iostream>
using namespace std;
int main()
{


    int n,search;


    cout<<"enter size of an array :";
     cin>>n;

     int a[n];



     for(int i=0 ; i<n ; i++)
     {
         cin>>a[i];
     }

     cout<<"enter a number to search :";
     cin>>search;

     for(int i=0 ; i<n ; i++)
     {
        if(a[i]==search)
        {
              cout<<"found";

              break;
        }

     }

}



//using functions

/*
int linearsearch(int a[],int sz,int target)
{
    for(int i=0 ; i<sz ; i++)
    {
        if(a[i]==target)
        {
           return 1;
        }

        return -1;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int sz=5;
    int target=5;

    cout<<linearsearch(a,sz,target)<<endl;
}*/
