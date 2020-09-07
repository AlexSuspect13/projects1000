#include <iostream>

using namespace std;
bool Spr(int a, int b){
return a%2!=0 && b%2!=0;
}


int main()
{
    cout <<Spr(1,1)  << endl;
    return 0;
}
