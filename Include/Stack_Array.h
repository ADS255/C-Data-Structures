#define INIT_SIZE 10

typedef struct Stack_Array {
    void* elements[INIT_SIZE];
    int pointer;
    int size;
}Stack_Array;

void initialiseStack(Stack_Array* stack);

void push(Stack_Array* stack, void* element);
void* pop(Stack_Array* stack);

void* peek(Stack_Array* stack);

int isEmpty(Stack_Array* stack);
int isFull(Stack_Array* stack);

int size(Stack_Array* stack);

void clear(Stack_Array* stack);

void destroy(Stack_Array* stack);