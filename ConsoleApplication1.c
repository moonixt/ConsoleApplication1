#include <stdio.h>


int second(void) {
    const char* name = "Derek\n";
    printf("%s", name);
    return 0;
}

int main(void) {
    printf("Hello, World!\n");
    second();
    return 0;
}
