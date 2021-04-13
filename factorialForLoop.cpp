#include <iostream>
using namespace std;
//for loop is used if we know the exact value we are using
//here we have declared number=6 then factorial initialised to 1
//as factorial 1 is multiplied to i it loops then checks if i has decreased till it reaches 1
int main(){
    int number = 6;
    int factorial =1;

    for (int i = number; i >=1; i--)
    {
        factorial = factorial *  i;
    }
    cout << number << "!  =  " <<factorial;
    

}
