#include <stdio.h>

int main(int argc, char *argv[]){

    int a[3] = {1, 2, 3};
    printf("%p\n", a);
    printf("%p\n", &a);
    printf("%p\n", *&a);
    void *ptr = &(&a);
    printf("%p\n", &*a);
    return 0;
}
