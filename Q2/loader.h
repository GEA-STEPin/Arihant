#ifndef __HEADER_H
#define __HEADER_H
typedef struct complex_t {

float real;

float imaginary;

} complex_t;

complex_t* sum(complex_t a, complex_t b);
complex_t* difference(complex_t a, complex_t b);
complex_t* product(complex_t a, complex_t b);
complex_t* divide(complex_t a, complex_t b);
#endif