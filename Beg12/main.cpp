#include <iostream>
#include <cmath>
using namespace std;
double S(double R1){
    return (3.14*(pow(R1,2)));

}
double S2(double R2){
    return (3.14*(pow(R2,2)));

}
double  Ss(double  S1, double S2){
return S1+S2;
}

int main()
{
    cout << S(2) << endl;
    cout << S2(4) << endl;
    cout << Ss(12.56,50.24) << endl;

}
