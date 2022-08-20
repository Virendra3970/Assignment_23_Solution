// A C++ program to find the sum of an array of size 10
#include<iostream>
using namespace std;
int main()
{
 int a[10],i,sum=0;
 std::cout<<"Please Enter 10 numbers to add: ";
 for(i=0;i<10;i++)
   std::cin>>a[i];
 for(i=0;i<10;i++)
   sum=sum+a[i];
 std::cout<<"\nSum is "<<sum<<endl;
 return 0;
}
