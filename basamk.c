#include<stdio.h>
int main(){
    int kuptop,yuz,on,bir;

    for(int sayi=0;sayi<=999;sayi++){
        yuz = sayi / 100;
        on = (sayi-yuz*100) / 10;
        bir = sayi % 10;


        kuptop= bir*bir*bir+on*on*on+yuz*yuz*yuz;
        if(sayi== kuptop)
            printf("%d\n",sayi);
    }
}
