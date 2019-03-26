#include <iostream>
#include <new>


int main() {
    int j, k ;

    int * l ;

    int add = 0;

    std::cout << "How many numbers would you like to store: ";
    std::cin >> j;

    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n'); // ignore last input
        std::cout << "You can only enter numbers.";
        std::cout << "Enter a number:";
        std::cin >> j;
    }

    l = new (std::nothrow) int [j];

    if(l == nullptr)
        std::cout<< "Memory can not be allocated" << std::endl;

    else
    {
        for (int k = 0; k < j; ++k) {
            std::cout << "Enter a number: " ;
            std::cin >> l[k];

            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n'); // ignore last input
                std::cout << "You can only enter numbers.";
                std::cout << "Enter a number:";
                std::cin >> l[k];
            }
            add = add + l[k];
        }
        std::cout <<"Numbers: ";
        for (k = 0; k < j ; ++k) {
            std::cout << l[k] << " , ";
        }
        std::cout <<std::endl << "Sum of entered Number: " << add <<std::endl;
        delete[] l;
    }

    return 0;
}