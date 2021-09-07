#include <iostream>
#include <typeinfo>

extern "C" int addnum(int, int);
extern "C" int mulnum(int, int);

void version_check()
{
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
}

int main(int argc, char* argv[])
{
    version_check();

    std::cout << "sum = " << addnum(3, 4) << std::endl;
    std::cout << "product = " << mulnum(3, 4) << std::endl;

    return 0;
}


