/**
 * @file stack.h
 * @author Arihant Baid
 * @brief Implementation of Stack Data structure
 * @version 1.0
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _STACK_H_
#define _STACK_H_

#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"

#define MAX_STACK_SIZE  (10)


typedef int stack_data_type;

typedef enum error_t 
{
    SUCCESS,
    STACK_FULL,
    STACK_EMPTY,
    NULL_PTR
}error_t;

/**
 * @brief Create a stack object
 * 
 * @param size_of_stack 
 * @return void* 
 */
void* create_stack(size_t size_of_stack);

/**
 * @brief Push the data into the stack
 * 
 * @param stack 
 * @param data 
 * @return error_t 
 */
error_t push(void* stack, stack_data_type data);

//pop();

//peek();

#endif  /* _STACK_H_ */
