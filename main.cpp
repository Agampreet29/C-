#include <iostream>
using namespace std;
void percentage (double Marks,double Marks1,double Marks2,double Marks3,double Marks4,double Marks5 ){

cout << "Your percentage is " << (Marks+Marks+Marks2+Marks3+Marks4+Marks5)/600 *100 << "%.";






}

int main()
{double Marks,Marks1,Marks2,Marks3,Marks4,Marks5;
    cout << "Enter your marks in Mathematics(out of 100):";
    cin >> Marks;
    cout << "Enter your marks in Science(out of 100):";
    cin >> Marks1;
    cout << "Enter your marks in SST(out of 100):";
    cin >> Marks2;
    cout << "Enter your marks in English(out of 100):";
    cin >> Marks3;
    cout << "Enter your marks in Hindi(out of 100):";
    cin >> Marks4;
    cout << "Enter your marks in 3rd language(out of 100):";
    cin >> Marks5;

   percentage(Marks,Marks1,Marks2,Marks3,Marks4,Marks5);

    return 0;
}
