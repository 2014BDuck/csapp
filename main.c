#include "ch1/hello.c"
#include "ch2/show.c"
#include "ch2/swap.c"
#include <string.h>

int main() {
    hello();
    test_show_bytes(12345);
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));

    const int SIZE = 5;
    int a[SIZE] = {1,2,3,4,5};
    reverse_array(a, SIZE);

    int i;
    for (i = 0; i < SIZE; i++){
        printf("%d", a[i]);
    }
    printf("\n");

    int x = 0x87654399;
    int mask = 0xFF;
    printf("%x", x & mask);
    return 0;
}
