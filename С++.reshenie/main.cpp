#include <iostream>

int main( int argc, char**)
{
    int q1 = 45112685;
    std::cout << &q1 << std::endl;
    std::cout << sizeof(q1) << std::endl;


    short q2 = 3333;
    std::cout << &q2 << std::endl;
    std::cout << sizeof(q2) << std::endl;

    
    long long q3 = 54854690867549;
    std::cout << &q3 << std::endl;
    std::cout << sizeof(q3) << std::endl;

    long q4 = 6743253674;
    std::cout << &q4 << std::endl;
    std::cout << sizeof(q4) << std::endl;


    float q5 = 48659132;
    std::cout << &q5 << std::endl;
    std::cout << sizeof(q5) << std::endl;


    double q6 = 6489463564;
    std::cout << &q6 << std::endl;
    std::cout << sizeof(q6) << std::endl;


    long double q7 = 7586749562918366;
    std::cout << &q7 << std::endl;
    std::cout << sizeof(q7) << std::endl;


    bool q8 = 67;
    std::cout << &q8 << std::endl;
    std::cout << sizeof(q8) << std::endl;
}


return EXIT_SUCCESS;

int main( int argc, char**)
{
    int a = 4,  b = 5;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap (a , b);

    std::cout << "a = " << a << ", b = " << b << std::endl;
}


return 0;


void swap(int &a, int &b)
{
    if (&a == &b);
    a = a + b;
    b = a - b:
    a = a - b;
}


return EXIT_SUCCESS;
