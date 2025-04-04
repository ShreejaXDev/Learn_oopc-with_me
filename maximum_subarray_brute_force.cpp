//maxium sub array sum

#include<iostream>
using namespace std;

//brute force approch
//sum of all sub arrays then sort out which one is maximum



int main()
{
    int n=5;
    int a[5]={1,2,3,4,5};

    int maxsum=0;

    for(int st=0; st<n ; st++)
    {
        int currentsum=0;
        for(int end=st ; end<n ; end++)
        {
            currentsum+=a[end];
            maxsum=max(currentsum, maxsum);

        }

    }

    cout<<endl<<"max subarray sum "<<maxsum<<endl;

    return 0;
}
