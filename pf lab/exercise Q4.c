#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;
    double root1 = (discriminant >= 0) ? (-b + sqrt(discriminant)) / (2 * a) : 0;
    double root2 = (discriminant >= 0) ? (-b - sqrt(discriminant)) / (2 * a) : 0;

    if (discriminant > 0) {
        printf("Roots are real and distinct: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        printf("Roots are real and equal: root1 = root2 = %.2lf\n", root1);
    } else {
        printf("Roots are complex.\n");
    }

    return 0;
}