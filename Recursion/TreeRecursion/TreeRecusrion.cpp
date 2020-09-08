#include <iostream>
using namespace std;

void fun(int n) //time complexisity is O(2^n) //2^0+2^1+2^2+2^3 = (2^n+1 -1) = O(n)
{
  if(n>0)
  {
    cout <<'\t' << n;
    fun(n-1);
    fun(n-1);
  }
}

int main()
{
  int a =3;
  fun(a);
}