#include <stdio.h>
int main(){
    int n,i,toplm=0;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        toplm += i*i;
    }
    printf("toplam = %d",toplm);
}
