//A C++ program to find the avarage of three numbers
#include<iostream>
using namespace std;
int main()
{
 int a,b,c; float avg;
 std:: cout<<"Enter three numbers to calculate the avarege: ";
 std::cin>>a>>b>>c;
 avg=(a+b+c)/3;
 printf("\nAvarage is %2f\n",avg);
return 0;
}
