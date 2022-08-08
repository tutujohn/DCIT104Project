#include <iostream>
/*Tutu John Mawufemor Yao 10978644
I certify that I wrote this code
Program to calculate the average of all even numbers between 1 and 10000*/

using namespace std;

int main()
{
    int i = 2, j = 0, sum;


    while(i<=10000)
    {
        sum += i;
        i = i + 2;
        j++;
    }

    float avg = sum / j;


    cout << "Average of all even numbers between 1 and 10000 is " << avg << endl;


    return 0;
}
