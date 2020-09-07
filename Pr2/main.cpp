#include <iostream>
#include <cmath>

using namespace std;
int Reb(int a,int b,int c)
{ return a*b*c;
}
int SReb (int a,int b,int c){
return 2*(a*b+b*c+a*c);
}

int main()
{
    cout <<Reb(2,3,4) << endl;
    cout <<SReb(2,3,4) << endl;

}
