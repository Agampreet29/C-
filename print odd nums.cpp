#include <iostream>

using namespace std;

int main()
{int num,help=1;
    cout << "Enter the number till which you want to print the odd numbers:";
    cin >>num;

    for(int i=1;i<num;i++){

        cout << i<<endl;
        i=help+i;
    }




    return 0;
}
