#include <stdio.h>
#include <stdlib.h>
#include "stack_utils.h"

int main() {
	//TODO: Add test foor push
	//TODO: Add test for pop
    char select = 0;
    stack_s s = {0};
    void *tmp_ptr = NULL;
    
    
    while (1) {
        printf("A. Add item (push)\n");
        printf("B. Remove item (pop)\n");
        printf("C. Print all items\n");
        printf("E. Exit\n");
        printf("-------------\n");

        scanf("%c", &select);
        while (getchar() != '\n'); //empties the buffer

        
            switch(select) {
                case 'a':
                    push(&s, get_input());
                    break;
                case 'b':
                    tmp_ptr = pop(&s);
                    printf("%p removed.\n", tmp_ptr);
                    if(tmp_ptr!=NULL) {
                        free(tmp_ptr);
                        tmp_ptr = NULL;
                    }
                    break;
                case 'c':
                    print_stack(&s);
                    break;
                case 'e':
                    "Successfully exiting program.\n";
                    break;
                default:
                    printf("Selection is not valid.\n");
                    break;
            }
        
    }
    free_elem(tmp_ptr);
    return 0;
}