#include<stdio.h>
int main(){
    int n,top=0;
    float artort=0;
    printf("lutfen sayi giriniz  ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        top += i;
    }
    artort =(float)top / n;
    printf("aritmetik ortalama = %f",artort);
}