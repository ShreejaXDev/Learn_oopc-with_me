//simple array


#include<iostream>
using namespace std;


int main()
{

    //by compiletime intialization
    int marks[5]={1,2,3,4,5};

    for(int i=0 ; i<5 ; i++)
    {
        cout<<marks[i]<<endl;
    }



    int n;
    //by runtime intialization
    cout<<endl<<"enter array size";
    cin>>n;

    int m[n];
    cout<<"enter array elements:";
      for(int i=0 ; i<n ; i++)
    {
        cin>>m[i];
    }
      for(int i=0 ; i<n ; i++)
    {
        cout<<m[i]<<endl;
    }




    //size of an array

    cout<<"size of marks array:"<<sizeof(marks);



cout<<endl<<"elements present in marks array :"<<sizeof(marks)/sizeof(int);

}
