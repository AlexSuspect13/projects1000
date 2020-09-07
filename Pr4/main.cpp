#include <iostream>
#include <cmath>
using namespace std;
 bool Abs(int a){
 if (a>0)
{
   return a;
}
return -a;
}

double average (double a, double b)
{
     return (a+b)/2;

}

int main()
{  cout <<Abs(2) << endl;
    cout <<average(2,3) << endl;

}
