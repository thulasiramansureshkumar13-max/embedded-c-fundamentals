#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int *ptr4;

    printf("PID: %d\n\n", getpid());

    ptr1 = malloc(100);
    ptr2 = malloc(1024);
    ptr3 = malloc(10 * 1024);
    ptr4 = malloc(100 * 1024);

    printf("100 bytes:\n");
    printf("&ptr1 = %p\n", (void *)&ptr1);
    printf("ptr1  = %p\n\n", (void *)ptr1);

    printf("1 KB:\n");
    printf("&ptr2 = %p\n", (void *)&ptr2);
    printf("ptr2  = %p\n\n", (void *)ptr2);

    printf("10 KB:\n");
    printf("&ptr3 = %p\n", (void *)&ptr3);
    printf("ptr3  = %p\n\n", (void *)ptr3);

    printf("100 KB:\n");
    printf("&ptr4 = %p\n", (void *)&ptr4);
    printf("ptr4  = %p\n\n", (void *)ptr4);

    printf("Press Enter to exit...\n");
    getchar();

    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr4);

    return 0;
}
