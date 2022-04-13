#include <stdio.h>

int main()
{
	int dusu;
	float E, P_ort, g, Q_ort, md, mt, mg;
	mg=0.95, md=0.85, g= 9.81;
	Q_ort =750000000.0/(365*24*3600);
	printf("Nominal dusu yuksekligini(m) giriniz.");
	scanf("%d",&dusu);
	
	if(1<dusu && dusu<34)
        mt=0.883;
    else if(34<=dusu && dusu<300)
        mt=0.94;
    else if(dusu>=300)
        mt=0.912;
    else{
        printf("Lutfen giris parametrelerini dogru giriniz.");
        return 0;
	}
	P_ort = (float)g * Q_ort * dusu * mg * md * mt;
	E = (365 * 24.0 * P_ort);
	printf("Santralde uretilebilecek yillik enerji miktari =%.2f kWh",E);
return 0;
}

