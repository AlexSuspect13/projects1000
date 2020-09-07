#include <iostream>
#include <cmath>
using namespace std;

double Okru(int R)
{return 2*3.14*R;
}
double Okruj(int R){
return 3.14*pow(R,2);}
int main()
{
    cout <<Okru(2) << endl;
    cout <<Okruj(2) << endl;

}
