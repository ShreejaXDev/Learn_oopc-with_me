//find single number in array(solve by vector)


//input : 2 3 1 3 2 1 4
//output : 4  bcz 4 is only unique number in all and we can get that from using xor operation bzz 0^0=0
//n^n=0 amd n^0=n
//1^1=0 so same inputs will be deleted


#include<iostream>
#include<vector>
using namespace std;


int main()
{

    int n;
    cin>>n;
    vector<int>vec(n);

//for input

    for(int i=0 ; i<n ; i++)
    {
        cin>>vec[i];
    }

//for printing

    for(int val : vec)
    {
        cout<<val<<endl;
    }

//main logic


int ans=0;
     for(int val : vec)
    {

        ans=ans^val;
    }
    cout<<endl<<ans;



    return 0;
}
