#include <iostream>
#include <cstdlib>


int main()
{
    int x = system("stat -c \"%y\" ./testfile.txt > outputtest.txt");
    std::cout << x;
    return 0;
}