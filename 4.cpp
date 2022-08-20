//A C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
 float r,ar;
std::cout<<"Enter the radius of circle to calculate the area: ";
 scanf("%f",&r);
ar=3.14*r*r;
printf("\nArea of the circle is %f\n",ar);
return 0;
}
