#include<stdio.h>

int main(void)
{
    float weight;
    float dosage;
    printf("Enter patient's weight:");
    scanf("%f",&weight);
    dosage=weight*0.8;
    printf("The dosage (mg) for patient is: %f",dosage);
}