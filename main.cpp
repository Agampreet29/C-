#include <iostream>

using namespace std;

void swaps(int num1,int num2){

  cout << "The first number is " << num2 << endl;
cout << "The second number is " << num1 << endl;


}
int main()
{
   int num1;
   int num2;

    cout << "Enter first number:" ;
    cin >> num1;

    cout << "Enter second number";
    cin >> num2;

    swaps(num1,num2);

    return 0;
}
