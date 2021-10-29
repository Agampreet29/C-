#include <iostream>

using namespace std;

int main()
{int num,first=0,second=1,nextnum;
    cout << "Enter the number of terms to be printed int he Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci series:"<< endl;
    for(int i=0;i<num;i++){

        cout << first<<endl;
        nextnum = first+second;
        first=second;
        second=nextnum;
    }



    return 0;
}
