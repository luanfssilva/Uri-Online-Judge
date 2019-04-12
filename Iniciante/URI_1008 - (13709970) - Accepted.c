#include <stdio.h>

int main() {

    int number, hours;
    double salary;

    scanf("%d",&number);
    scanf("%d",&hours);
    scanf("%lf",&salary);

    salary *= hours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}