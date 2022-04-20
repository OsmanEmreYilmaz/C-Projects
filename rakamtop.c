#include<stdio.h>
int main(){
    int c,top=0,i;
    printf("sayi giriniz  ");
    scanf("%d",&i);
    while(i>0){
        c =i%10;
        i = i/10;
        top += c;
    }
    printf("%d",top);
}
