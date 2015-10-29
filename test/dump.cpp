#include <iostream>

using namespace std;

#define TOSTR(x)    TOSTR_(x)
#define TOSTR_(x)   #x

int main()
{
    cout << TOSTR(_LIBCPP_VERSION) << endl;
    cout << TOSTR(__GLIBCXX__) << endl;
    return 0;
}
