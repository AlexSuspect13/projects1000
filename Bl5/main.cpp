#include <iostream>

using namespace std;
bool Spr(int a){
return a>=0;
}
bool Nesp0(int b){
return b<-2;
}

int main()
{
    cout <<Spr(6)  << endl;
    cout <<Nesp0(4)  << endl;

}
