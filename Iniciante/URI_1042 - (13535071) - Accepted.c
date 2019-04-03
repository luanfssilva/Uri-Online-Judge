#include <stdio.h>

int main() {

    int x1,x2,x3;

    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);

    if(x1 < x2){
        if(x1 < x3){
            printf("%d\n",x1);
            if(x2 < x3){
                printf("%d\n",x2);
                printf("%d\n",x3);
            }
            else {
                printf("%d\n",x3);
                printf("%d\n",x2);
            }
        }
        else{
            printf("%d\n",x3);
            printf("%d\n",x1);
            printf("%d\n",x2);
        }
    }
    else if(x2 < x3){
        printf("%d\n",x2);
        if (x1 < x3){
            printf("%d\n",x1);
            printf("%d\n",x3);
        }
        else{
            printf("%d\n",x3);
            printf("%d\n",x1);
        }
    }else{
        printf("%d\n",x3);
        printf("%d\n",x2);
        printf("%d\n",x1);
    }

    printf("\n");
    printf("%d\n",x1);
    printf("%d\n",x2);
    printf("%d\n",x3);

    return 0;
}