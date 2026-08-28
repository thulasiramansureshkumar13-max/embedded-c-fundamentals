#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    void *ptr1;
    void *ptr2;

    printf("PID: %d\n", getpid());

    printf("\n===== BEFORE ALLOCATION =====\n");
    printf("Press Enter to continue...\n");
    getchar();

    ptr1 = malloc(1 * 1024 * 1024);

    printf("\n===== AFTER 1 MB MALLOC =====\n");
    printf("ptr1 = %p\n", ptr1);
    printf("Press Enter to continue...\n");
    getchar();

    ptr2 = malloc(10 * 1024 * 1024);

    printf("\n===== AFTER 10 MB MALLOC =====\n");
    printf("ptr2 = %p\n", ptr2);
    printf("Press Enter to exit...\n");
    getchar();

    free(ptr1);
    free(ptr2);

    return 0;
}
