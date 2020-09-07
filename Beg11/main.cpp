#include <iostream>
#include <cmath>

using namespace std;
int Hyp( int a, int b)
{
return sqrt((pow(a,2)+(pow(b,2))));
}

int Per(int a, int b, int c){
return a+b+c;}
int main()
{
    cout << Hyp(2,5) << endl;
    cout << Per(2,5,6) << endl;
}
