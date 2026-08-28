#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int initialized_global = 10;
int uninitialized_global;

int main(void)
{
    int stack_variable = 20;

    int *heap_variable = malloc(sizeof(int));
    *heap_variable = 30;

    char *string_literal = "Hello Linux";

    printf("Initialized global (Data):  %p\n",
           (void *)&initialized_global);

    printf("Uninitialized global (BSS): %p\n",
           (void *)&uninitialized_global);

    printf("Stack variable:              %p\n",
           (void *)&stack_variable);

    printf("Heap allocation:             %p\n",
           (void *)heap_variable);

    printf("String literal:              %p\n",
           (void *)string_literal);

    printf("PID: %d\n", getpid());

    printf("\nPress Enter to continue...\n");
    getchar();

    free(heap_variable);

    return 0;
}
