#ifndef STACK_UTILS_H
#define STACK_UTILS_H

#define MAX_SIZE 128

//create some struct to hold data and num of items
typedef struct {
	void **data; // have an array an items thats dynamically allocated thats why use a double pointer, instead of regular pointer
	int num_items;
} stack_s;

// push needs the stack and a new item to put on there
//returns a zero if successful, 1 otherwise
int push(stack_s *stack, void *data); //and item itself(void pointer)

//pop removes last item from stack
//returns pointer which is NULL if no items exist
void *pop(stack_s *stack);

//remove the return characters from string and replace with 0
void trim(char *buffer);

void free_elem(stack_s *stack);

char *get_input();

void print_stack(stack_s *stack);

#endif