#include <iostream>

using namespace std;
void tell(int n){

if (n % 2 ==1){

    cout << "The number is an odd number.";
  }

else {

    cout << "The number is an even number.";
}

}






int main()
{

int n;
cout << "Enter your number to check if it is odd or even:";
cin >> n;


   tell(n);



}
