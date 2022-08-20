// A C++ program to swap two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
 int a,b;
 std:: cout<<"Enter two number: ";
 std:: cin>>a>>b;
 printf("a=%d b=%d\n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 std::cout<<"\na="<<a;
 std::cout<<" b="<<b<<endl;
 return 0;
 
}
