//pattern


/*

*
**
***
****

*/

/*


#include<iostream>
using namespace std;
int main()
{
   int n;

   cin>>n;

   for(int i=1 ; i<=n ; i++)
   {
       for(int j=1 ; j<=i ; j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
} */


 //new pattern

 /*
 1
 22
 333
 4444*/

 /*#include<iostream>
using namespace std;
int main()
{

int n;
   cin>>n;

   for(int i=1 ; i<=n ; i++)
   {
       for(int j=1 ; j<=i ; j++)
       {

           cout<<i;

       }
       cout<<endl;
   }
}*/

//NEW



/*  A
  BB
  CCC
  DDDD*/

 /* #include<iostream>
using namespace std;
int main()
{

int n;
   cin>>n;
char ch='A';
   for(int i=1 ; i<=n ; i++)
   {

       for(int j=1 ; j<=i ; j++)
       {

           cout<<ch;


       }

       ch++;
       cout<<endl;
   }
}*/


//new

/*

1
2 1
3 2 1



#include<iostream>
using namespace std;
int main()
{
   int n;

   cin>>n;

   for(int i=1 ; i<=n ; i++)
   {
       for(int j=i ; j>=1 ; j--)
       {
           cout<<j;
       }
       cout<<endl;
   }
}

*/


//new//


/*
1
23
456
78910 */

#include<iostream>
using namespace std;
int main()
{
   int n;

   cin>>n;
int num=1;
   for(int i=1 ; i<=n ; i++)
   {
       for(int j=1 ; j<=i ; j++)
       {
           cout<<num;
           num++;
       }
       cout<<endl;
   }
}
