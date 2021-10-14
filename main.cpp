#include <iostream>


using namespace std;

double area(int radius)
{
  double piValue = 3.14;
  double area_of_circle = radius * radius * piValue;
  //return area_of_circle;
}


int main()
{

   int radius;
   cout << "Enter the radius of circle(in cm):";
   cin>>  radius;

   area(radius);

   //cout << "The area of the circle is " << area_of_circle << " sq.cm" ;

    return 0;
}
