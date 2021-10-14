#include <iostream>

using namespace std;




int prime3 (int num){






 if (num == 1 or num == 2 or num== 3 or num == 5 or num == 7){

  cout << "The number is a prime number";
}
 else if (num % 2 == 0 or num % 3 == 0 or num % 7 == 0 or num % 5 == 0 ){

    cout << "The number is a composite number";
    }


 else  {
    cout << "The number is a prime number";
}
}
int main(){

    int num ;



    cout << "Enter your number:" ;
    cin >> num;


prime3(num);


return 0;
}
