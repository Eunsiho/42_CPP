#include "Data.hpp"
// #include <cstdlib>

// void leaks()
// {
//     system("leaks convert");
// }

int main (void)
{
    // atexit(leaks);
    Data* data = new Data(42);
    uintptr_t uintptr;

    std::cout << "data        : " << data << std::endl;
    std::cout << "data's Num  : " << data->getNum() << std::endl;
    
    uintptr = serialize(data);
    std::cout << "uintptr     : " << uintptr << std::endl;

    std::cout << "rdata       : " << deserialize(uintptr) << std::endl;
    std::cout << "rdata's Num : " << deserialize(uintptr)->getNum() << std::endl;

    delete data;
}
