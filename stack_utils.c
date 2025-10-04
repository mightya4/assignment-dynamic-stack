#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack_utils.h"

/**
*Pushes a new item 'data' onto the stack given by 'stack'.
*Returns 0 if successful, 1 otherwise.
*/

int push(stack_s *stack, void *data) {
    //allocate space on our stack to support new data pointer (realloc)
    stack->data = realloc(stack->data, (stack->num_items + 1) * (sizeof(void*)));
    stack->data[stack->num_items++] = data;
    //if memory allocation fails, return 1
    if(stack->data == NULL) {
        return 1;
    }
    //assign the new data pointer to the newly created space
    stack->data[stack->num_items] = data;
    stack->num_items++;

return 0;
}

void *pop(stack_s *stack) {
    void *end_item = stack->data[stack->num_items - 1];
    stack->data = realloc(stack->data, --stack->num_items * sizeof(void *));

    return end_item;
}

//print the stack starting from the end 
void print_stack(stack_s *stack) {
    for(int i = stack->num_items - 1; i >=0; i--) {
        printf("%s\n", (char *)stack->data[i]);
    }
    printf("\n");
}

void trim(char *buffer) {
	buffer[strcspn(buffer, "\r\n")] = 0;
}

char *get_input() {
    char buffer[MAX_SIZE] = {0};
    printf("Please enter a string to add: ");
    fgets(buffer, MAX_SIZE, stdin);
    trim(buffer);

    char *end_item = calloc(strlen(buffer) + 1, sizeof(char));
    strcpy(end_item, buffer);

    return end_item;
}


void free_elem(stack_s *stack) {
    if(stack == NULL) {
        return;
    }

    if(stack->data) {
        free(stack->data);
    }
    free(stack);
}