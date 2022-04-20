#include <stdio.h>
int main(){
    float cevre,area,pi=3.14;
    int r;
    printf("dairenin yaricapini girin\n");
    scanf("%d",&r);
    area = pi * r * r;
    cevre = 2 * pi * r;
    printf("cevre = %f\n",cevre);
    printf("area = %f",area);

}
