#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <=10; i++)//outer for loop where each value multiplies all values in j
    {
        for (int j = 1; j <=10; j++)//inner loop where all values multiplies all values in i
        {
           cout << i << " * "<<j<<" = "<<i * j<< endl;//1*1=1, 1*2=2,,,1*10=10
        }
        cout << endl;
        
    }
    
}
