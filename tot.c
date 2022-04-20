#include <stdio.h>
int main(){
int i,n,tot=0;
printf("lutfen bir sayi giriniz");
scanf("%d",&n);
for(i=0;i<=n;i++){
    tot += i; 
}
printf("%d",tot);
}