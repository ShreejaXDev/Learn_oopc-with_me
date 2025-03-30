//static vs dynamic memory

//vector - dynamic memory
//array - static memory


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<<vec.size()<<endl;
    cout<<vec.capacity();

    vec.pop_back();
    vec.pop_back();

    vec.pop_back();

    cout<<endl<<vec.size();



}
