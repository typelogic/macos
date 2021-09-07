#include <iostream>
#include <typeinfo>

const char* s = "*** libcpp ***";

void cppcheck()
{
    if (__cplusplus == 201703L) std::cout << "\nLIB: C++17\n";
    else if (__cplusplus == 201402L) std::cout << "\nLIB: C++14\n";
    else if (__cplusplus == 201103L) std::cout << "\nLIB: C++11\n";
    else if (__cplusplus == 199711L) std::cout << "\nLIB: C++98\n";
    else std::cout << "\nLIB: pre-standard C++\n";
}

extern "C" int mulnum(int a, int b)
{
    std::cout << std::endl << s << std::endl;
    cppcheck();
    return a * b;
}	
