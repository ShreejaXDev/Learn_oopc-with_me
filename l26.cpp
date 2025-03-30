//vectors syntax and intialization

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec={1,2,3};
    cout<<vec[0]; //accesing elements

    cout<<endl<<"---------------"<<endl;

    vector<int>v(3,0); //vector of size 3 having three elements zeroes
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;


    cout<<endl<<"---------------"<<endl;


    vector<int>ve={1,2,3,4,5}; //using for loop
    for(int i : ve) //where i is iterator
    {
        cout<<i<<endl;
    }


   cout<<endl<<"---------------"<<endl;

 vector<char>vecc={'a','b'}; //using for loop
    for(char i : vecc) //where i is iterator
    {
        cout<<i<<endl;
    }

}
