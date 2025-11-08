#include <stdio.h>
int main( ){
    int y = 5;
    int z = 6;
    int const *yPtr = &y;
    printf("%p\n", yPtr);
    *yPtr = &z; // This line will cause a compilation error
    printf("%p\n", yPtr);
}