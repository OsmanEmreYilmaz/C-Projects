#include<stdio.h>
int main(){
    int a,b,carp;
    printf("ilk sayiyi giriniz  ");
    scanf("%d",&a);
    printf("ikinci sayiyi giriniz  ");
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        carp += b;
    }
    printf("carpim = %d",carp);
}