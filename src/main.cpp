#include "Vec2.h"
#include "iostream"

int main()
{
    Vec2 vector (1, 3);
    vector.print();
    std::cout << vector.length() << std::endl;
    return 0;
}
