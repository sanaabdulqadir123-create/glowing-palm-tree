 #include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *ptrX = &x;
    int *ptrY = &y;

    printf("x = %d, y = %d\n", *ptrX, *ptrY);

    // swap using pointers
    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;

    printf("After swap: x = %d, y = %d\n", *ptrX, *ptrY);

    return 0;
}