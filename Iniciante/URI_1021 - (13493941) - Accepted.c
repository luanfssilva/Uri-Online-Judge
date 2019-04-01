#include <stdio.h>

int main()
{
    double n;
    int n100,n50,n20,n10,n5,n2;
    int m1,m50,m25,m10,m05,m01;
    int resto;

    scanf("%lf",&n);

    if(n>0 && n<1000000.00)
    {

        n100 = (int) n/100;
        resto = (int) n%100;
        n50 = resto / 50;
        resto %= 50;
        n20 = resto / 20;
        resto %= 20;
        n10 = (resto / 10);
        resto %= 10;
        n5 = (resto / 5);
        resto %= 5;
        n2 = (resto / 2);
        resto %= 2;
        m1 = (resto / 1);
        resto = (int) ((n - (int)n) * 100);
        m50 = resto / 50;
        resto %= 50;
        m25 = resto / 25;
        resto %= 25;
        m10 = resto / 10;
        resto %= 10;
        m05 = resto / 5;
        resto %= 5;
        m01 = resto / 1;

        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",n100);
        printf("%d nota(s) de R$ 50.00\n",n50);
        printf("%d nota(s) de R$ 20.00\n",n20);
        printf("%d nota(s) de R$ 10.00\n",n10);
        printf("%d nota(s) de R$ 5.00\n",n5);
        printf("%d nota(s) de R$ 2.00\n",n2);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",m1);
        printf("%d moeda(s) de R$ 0.50\n",m50);
        printf("%d moeda(s) de R$ 0.25\n",m25);
        printf("%d moeda(s) de R$ 0.10\n",m10);
        printf("%d moeda(s) de R$ 0.05\n",m05);
        printf("%d moeda(s) de R$ 0.01\n",m01);
    }

    return 0;
}
