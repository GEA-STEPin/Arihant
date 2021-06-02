#include "loader.h"
#include<stdlib.h>
complex_t* sum(complex_t a, complex_t b){
    complex_t* addition = malloc(sizeof(complex_t));
    addition->real = a.real + b.real;
    addition->imaginary = a.imaginary + b.imaginary;
    //free(addition);
    return addition;
}

complex_t* difference(complex_t a, complex_t b){
    complex_t c = {-(b.real), -(b.imaginary)};
    return sum(a,c);
}

complex_t* product(complex_t a, complex_t b){
    complex_t* multiply = malloc(sizeof(complex_t));
    multiply->real = ((a.real*b.real) - (a.imaginary*b.imaginary));
    multiply->imaginary = ((a.real*b.imaginary) + (a.imaginary*b.real));
    //free(multiply);
    return multiply;
}

complex_t* divide(complex_t a, complex_t b){
    complex_t temp = {b.real,-(b.imaginary)};
    complex_t* ans = product(a,temp);
    float temp2 = (b.real*b.real) + (b.imaginary*b.imaginary);
    ans->real = ans->real/temp2;
    ans->imaginary = ans->imaginary/temp2;
    return ans;
}