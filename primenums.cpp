#include <iostream>
#include <cstdio>
using namespace std;

/* Tutu John Mawufemor Yao 10978644
I certify that I wrote this code
Write a program that to produce the sum of all prime numbers less than a given number
*/

bool aPrime(int num){
    for (int i=2; i<num; i++){
        if  (num%i ==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int range;
    cin>>range;
    int sum = 0;
    for (int i = 1; i<range; i++){
        bool prime = aPrime(i);
        if (prime){
            sum += i;
        }
    }
    cout << "Sum of all prime numbers in the range 0 - " << range << " is " << sum <<endl;
    return 0;
}
