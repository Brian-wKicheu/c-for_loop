#include <iostream>
using namespace std;

int main(){
    int number = 6;
    int factorial =1;

    for (int i = number; i >=1; i--)
    {
        factorial = factorial *  i;
    }
    cout << number << "!  =  " <<factorial;
    

}