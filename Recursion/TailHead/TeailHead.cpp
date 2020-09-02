#include <iostream>
using namespace std;

void recFun(int n) {
    if (n > 0)
    {
        cout << "Number is:\t" << n <<'\n';   //gives output 3, 2, 1 //Example of tail recursion
        recFun(n - 1);  //recursion fun
        //cout << "Number is:\t" << n << '\n'; //gives output 1, 2, 3  // example of head recursion
    }
}

int main()
{
    int x = 3;
    recFun(x);
    return 0;
}