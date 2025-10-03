//create some struct to hold data and num of items
typedef struct {
	void **data; // have an array an items thats dynamically allocated thats why use a double pointer, instead of regular pointer
	int num_items
} stack_s;

// push needs the stack and a new item to put on there
//returns a zero if successful, 1 otherwise
int push(stack_s, void *data); //and item itself(void pointer)

//pop removes last item from stack
//returns pointer which is NULL if no items exist
void *pop(stack_s);
