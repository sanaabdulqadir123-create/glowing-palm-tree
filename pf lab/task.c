#include <stdio.h>
int main()
{
    int department1, department2;
    printf("1. department of bcit\n");
    printf("2. department business\n");
    printf("3. department of engineering\n");
    printf("make your selection\n");
    scanf("%d", &department1);
    switch (department1)
    {
    case 1:
        printf("department of bcit");
        break;
    case 2:
        printf("department of business");
        break;
    case 3:
        printf("department of engineering");
        break;
    }
    switch (department2)
    {
    case 1:
        // code execute department=a
        printf("you choose department of business");
        break;
    case 2:
        // code execute department=b
        printf("you choose department of bcit");
        break;
    }
}