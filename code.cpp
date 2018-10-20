#include <iostream>
using namespace std;

int square(int gh)
{
    return gh*gh;
}

int cube(int gh)
{
    return gh*gh*gh;
}

int min2us(int gh)
{
    return -gh;
}

int main(int argc,char** argv)
{
    cout << square(3) << cube(3) << min2us(3);
    return 0;
}
