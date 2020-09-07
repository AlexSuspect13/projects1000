#include <iostream>

using namespace std;
bool Nec(int a){
    return a % 2 == 0;
}

int main()
{
    cout << Nec(1) << endl;
    return 0;
}
