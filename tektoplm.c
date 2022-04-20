#include <stdio.h>
int main(){
    int n,i,toplm=0;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        toplm += i;
    }
    printf("toplam = %d",toplm);
}
