#include "asda.h"
#include <stdexcept>
#include "doctest.h"
#include <string>




int FibonacciSolver::getNthFibonacciNumber(int n){

    if(n < 0){
        throw std::invalid_argument("Invalid number");
    }

    long long int* array = new long long int[n];
    array[0] = 0;
    array[1] = 1;
    std::cout << array[0] << '\n' << array[1] << '\n';
    for(int i = 2; i < n;i++){
        array[i] = array[i-2] + array[i-1];
        std::cout << array[i] << '\n';
    }
    delete[] array;
}