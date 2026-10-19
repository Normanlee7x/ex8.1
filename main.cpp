#include <iostream>

int main() {
    int i = 23;
    int j = 54;

    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;

    std::cout << "dereferenced address of i = " << (*(&i)) << std::endl;
    std::cout << "dereferenced address of j = " << (*(&j)) << std::endl;

    std::cout << "address of i = " << &i << std::endl;
    std::cout << "address of j = " << &j << std::endl;  

    i = 100;
    j = 200;

    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;

    std::cout << "address of i = " << &i << std::endl;
    std::cout << "address of j = " << &j << std::endl;

    i = 23;
    j = 54;

    int* ptr_to_int = &i;

    std::cout << "ptr_to_int = " << ptr_to_int << std::endl;
    std::cout << "dereferenced ptr_to_int = " << (*ptr_to_int) << std::endl;

    ptr_to_int = &j;

    std::cout << "ptr_to_int = " << ptr_to_int << std::endl;
    std::cout << "dereferenced ptr_to_int = " << (*ptr_to_int) << std::endl;

    return 0;
}