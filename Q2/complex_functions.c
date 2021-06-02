#include<stdio.h>
#include<stdlib.h>
#include "loader.h"



int main()
{
    complex_t first_number = {5,5};
    complex_t second_number ={2,2};

    complex_t* Addition = sum(first_number, second_number);
    complex_t* Subtraction = difference(first_number, second_number);
    complex_t* Multiplication = product(first_number, second_number);
    complex_t* Division = divide(first_number, second_number);

    printf("Sum: %f %f\n", Addition->real, Addition->imaginary);
    printf("Difference: %f %f\n", Subtraction->real, Subtraction->imaginary);
    printf("Product: %f %f\n", Multiplication->real, Multiplication->imaginary);
    printf("Division: make %f %f\n", Division->real, Division->imaginary);
    return 0;
}
