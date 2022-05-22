#include <stdio.h>
#include <string.h>
#include <math.h>
int renkKodu(char *renk){
    if(strcmp(renk,"siyah")==0) return 0;
    if(strcmp(renk,"kahverengi")==0) return 1;
    if(strcmp(renk,"kirmizi")==0) return 2;
    if(strcmp(renk,"turuncu")==0) return 3;
    if(strcmp(renk,"sari")==0) return 4;
    if(strcmp(renk,"yesil")==0) return 5;
    if(strcmp(renk,"mavi")==0) return 6;
    if(strcmp(renk,"mor")==0) return 7;
    if(strcmp(renk,"gri")==0) return 8;
    if(strcmp(renk,"beyaz")==0) return 9;
    if(strcmp(renk,"altin")==0) return 5;
    if(strcmp(renk,"gumus")==0) return 10;
    // Strcmp fonksiyonu ifin icinde string ifade ile karsilastirma yapmamizi sagliyor. 
    //ilk indexten baslayarak sirasiyla kelimeyi kontrol ediyor.
    // strcmp olmadan bu karsilastirma yapilirsa if sadece kelimenin ilk harflerini karsilastirir.
}
int main(){
    int bantsay;
    float D= 0,TolDk = 0,TolDb = 0,Sicaklik_K = 0,D_Degisimi = 0;
    char renk[15];
    printf("Bant sayisini girin= ");
    scanf("%d",&bantsay);
    if(bantsay == 4){
        printf("1.Rengi girin: "); scanf("%s",&renk);
        D = 10 * renkKodu(renk); 
        printf("2.Rengi girin: "); scanf("%s",&renk);
        D += renkKodu(renk);
        printf("3.Rengi girin: "); scanf("%s",&renk);
        D *= pow(10,renkKodu(renk));
        printf("4.Rengi girin: "); scanf("%s",&renk);
        TolDk = D - (D*renkKodu(renk))/100;
        TolDb = D + (D*renkKodu(renk))/100;
    }
    else if(bantsay == 5){
        printf("1.Rengi girin: "); scanf("%s",&renk);
        D = 100 * renkKodu(renk); 
        printf("2.Rengi girin: "); scanf("%s",&renk);
        D += 10 * renkKodu(renk);
        printf("3.Rengi girin: "); scanf("%s",&renk);
        D += renkKodu(renk);
        printf("4.Rengi girin: "); scanf("%s",&renk);
        if(strcmp(renk,"altin") == 0)
            D *= pow(10,-1);
        else if(strcmp(renk,"gumus") == 0)
            D *= pow(10,-2);
        else
            D *= pow(10,renkKodu(renk));
        printf("5.Rengi girin: "); scanf("%s",&renk);
        TolDk = D - (D*renkKodu(renk))/100;
        TolDb = D + (D*renkKodu(renk))/100;
    }
    else if(bantsay == 6){
        printf("1.Rengi girin: "); scanf("%s",&renk);
        D = 100 * renkKodu(renk); 
        printf("2.Rengi girin: "); scanf("%s",&renk);
        D += 10 * renkKodu(renk);
        printf("3.Rengi girin: "); scanf("%s",&renk);
        D += renkKodu(renk);
        printf("4.Rengi girin: "); scanf("%s",&renk);
        if(strcmp(renk,"altin") == 0)
            D *= pow(10,-1);
        else if(strcmp(renk,"gumus") == 0)
            D *= pow(10,-2);
        else
            D *= pow(10,renkKodu(renk));
        printf("5.Rengi girin: "); scanf("%s",&renk);
        TolDk = D - (D*renkKodu(renk))/100;
        TolDb = D + (D*renkKodu(renk))/100;
        printf("6.Rengi girin: "); scanf("%s",&renk);
        if(strcmp(renk,"turuncu") == 0)
            Sicaklik_K = 15;
        else
            Sicaklik_K = 100/renkKodu(renk);
        D_Degisimi = D * (1 + 1/(Sicaklik_K * 100.0)) - D;
    }
    else{
        printf("Hatali bantsayisi girdiniz.");
    }
    printf("D: %.2f Ohm\nTolerans Araligi: %.2f - %.2f\nSicaklik Katsayisi: %.2f ppm/C\n1 C'deki Direnc Degisimi : %.2f",D,TolDk,TolDb,Sicaklik_K,D_Degisimi);
    return 0;
}