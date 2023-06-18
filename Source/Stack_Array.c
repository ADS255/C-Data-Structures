#include <stdio.h>
#include <stdlib.h>
#include "..\Include\Stack_Array.h"

void initialiseStack(Stack_Array* stack,  int size)
{
    stack->pointer = -1;
    stack->elements = malloc(size * sizeof(void*));
    stack->size = size;
}

void push(Stack_Array* stack, void* element)
{
    if (stack->pointer +1 < stack->size) 
    {
        stack->pointer++;
        stack->elements[stack->pointer] = element;
    }
    else
    {
        printf("%s\n", "Stack overflow");
    }
}

void* pop(Stack_Array* stack)
{
    if (stack->pointer - 1 >= 0)
    {
        void* popedValue = stack->elements[stack->pointer];
        stack->pointer--;
        return popedValue;
    }
    else
    {
        printf("%s\n", "Stack underflow");
        return NULL;
    }
}

void* peek(Stack_Array* stack)
{
    return stack;
}

int isEmpty(Stack_Array* stack)
{
    return 0;
}

int isFull(Stack_Array* stack)
{
    return 0;
}

int size(Stack_Array* stack)
{
    return 0;
}

void clear(Stack_Array* stack)
{
}

void destroy(Stack_Array* stack)
{
}
