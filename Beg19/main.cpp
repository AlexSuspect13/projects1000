#include <iostream>
#include <cassert>
using namespace std;
int sum(int a, int b)
{
    return a-b;
}
void test_sum()
{
     assert(sum(2,2)==4);
   assert(sum(2,3)==5);
}
int main()
{
   test_sum();
    cout << 2 << endl;
    return 0;
}
