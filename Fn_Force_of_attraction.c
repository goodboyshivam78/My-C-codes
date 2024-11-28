#include <stdio.h>

float gravitational_force(float);

float gravitational_force(float mass) {
    float force = 9.8*mass;
    return force;
}

int main() {
    printf("-----------------------Hare Krishna-------------------------\n");
    float mass;
    printf("\nEnter the mass of bodyin kg: ");
    scanf("%f",&mass);
    printf("The Gravtitional Force on the body is: %f N",gravitational_force(mass));

    return 0;
}