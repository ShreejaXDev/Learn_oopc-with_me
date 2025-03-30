//basic vector functions


#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>vec={1,2,3,4,5};

    cout<<vec.size()<<endl; //for vector size

     cout<<endl<<"---------------"<<endl;

    cout<<vec.front(); //to show front first element
    cout<<endl<<vec.back(); // to return the last value
    cout<<endl<<vec.at(2); // to show value at given indexN



     cout<<endl<<"---------------"<<endl;

     //push back for inserting elements


vector<int>v;

v.push_back(12);
v.push_back(10);

cout<<endl<<"size after pushback :"<<v.size()<<endl;


//pop back for removing elements
 cout<<endl<<"---------------"<<endl;

vector<int>ve;

ve.pop_back(); // no need to write element bcz it will automatically remove the last element


for(int val : ve)
{
    cout<<endl<<val<<endl;
}


}


