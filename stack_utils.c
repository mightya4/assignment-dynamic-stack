#include <stdlib.h>
#include "stack_utils.h"

/**
*Pushes a new item 'data' onto the stack given by 'stack'.
*Returns 0 if successful, 1 otherwise.
*/

int push(stack_s, void *data) {
    //allocate space on our stack to support new data pointer (realloc)
    stack.data = realloc(stack.data, (stack.num_items + 1) * (sizeof(void*);
    stack.data[stack.num++] = data;
    //if memory allocation fails, return 1
    if(stack.data == NULL) {
        return 1;
    }
    //assign the new data pointer to the newly created space
    stack.data[stack.num_items] = data;
    stack.num_items++;

return 0;
}

void *pop(stack_s);

void print_stack(stack *stack, )