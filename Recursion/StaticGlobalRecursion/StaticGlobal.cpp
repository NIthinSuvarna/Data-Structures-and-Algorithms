#include <iostream>
using namespace std;

//int var = 0; //uncomment this line and comment static var initialisation to see global behaviour
int recFun(int n)
{
    static int var = 0;
    if (n > 0)
    {
        var++;
        return recFun(n - 1) + var;
    }
    return 0;  //v v imp, if this return is missed line 19 will return junk value.
}

int main()
{
    int x = 5;
    cout << "The value is:\t" << recFun(x);
    return 0;
}
