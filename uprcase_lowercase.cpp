//is character upper case or lower case


#include<iostream>
using namespace std;

    int main()
    {
        char c;

        cin>>c;

        if(c>='a' && c<='z')
            cout<<"lower case ";

        else if(c>='A' && c<='Z')
            cout<<"upper case ";

        else
            cout<<"enter proper character within a range";
    }
