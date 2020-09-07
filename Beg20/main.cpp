#include <iostream>
#include<cassert>
#include<cmath>
using namespace std;
int pow8(int a)
{
    return std::pow(a,8);
}
void test_pow8 ()
{
    assert(pow8(2)==256);
    assert(pow8(1)==1);
    std::cout<<"ok";
}

int main()
{

    test_pow8();
    return 0;
}
