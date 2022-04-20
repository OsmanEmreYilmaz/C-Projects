#include<stdio.h>
int main(){
    int enbyk,a,b,c;
    printf("sayilari girin(a,b,c)\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            enbyk = a;
        else
            enbyk = c;
    }
    else{
        if(b>c)
            enbyk=b;
        else
            enbyk=c;
    }
    printf("enbuyuk sayi = %d",enbyk);
}