#include <stdio.h>
#include <math.h>

int main() {

    int hours,speed;
    double l;

    scanf("%d",&hours);
    scanf("%d",&speed);

    l = hours*speed/12.0;

    printf("%.3f\n",l);

    return 0;
}