//reverse of an array using two pointers method by function


#include<iostream>
using namespace std;

void reverse(int a,int sz)
{
    int start =0 , end=sz-1;

    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main()
{
    int a[]={1,2,3,4}
    int sz=4;


    reverse(a,sz);

    //for printing


    for(int i=0 ; i<sz ; i++)
    {
        cout<<a[i]<<endl;
    }

}
