//patterns


/*1234
1234
1234
1234*/

#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    for(int i=1 ; i<=n ; i++) //tell us how many times loop should run
    {
        for(int j=1 ; j<=n ; j++) //tell us what is printing inside single row
        {
            cout<<j;
        }
        cout<<endl;
    }

}

/*//new pattern


abcd
abcd
abcd
abcd

for(int i=1 ; i<=n ; i++)
{
char ch='a';
for(int j=1 ; j<=n ; j++)
{
cout<<ch;
ch++;
}
}

//new pattern


123//  i=1
456    i=2
789    i=3

int num=1;

for(int i=1 ; i<=n ; i++)
{

    for(int j=1 ; j<=n ; j++)
    {
    cout<<n;
    n++;
    }
     cout<<endl;
}

 //new pattern

abc
def
ghi


 int n;

    cin>>n;
char ch='a';
    for(int i=1 ; i<=n ; i++) //tell us how many times loop should run
    {
        for(int j=1 ; j<=n ; j++) //tell us what is printing inside single row
        {
            cout<<ch;
            ch++;
        }

        cout<<endl;
    }

    */
