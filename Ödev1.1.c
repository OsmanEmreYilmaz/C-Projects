#include <stdio.h>

int main()
{
	int dusu;
	float E, P_ort, g, V, Q_Ort, md, mt, mg;
	md=0.85, mg=0.95, mt=0.75, g= 9.81;
	
	printf("Santralde toplanabilecek su hacmini(m3/day) giriniz.");
	scanf("%f",&V);
	printf("Nominal dusu yuksekligini(m) giriniz.");
	scanf("%d",&dusu);
	Q_Ort = V/(24*3600);  /*Su hacmi (m3/second)*/
	P_ort = g * Q_Ort * dusu * mg * md * mt;
	E = P_ort * 24 * 365;
	printf("Santralde uretilebilecek yillik enerji miktari =%.2f kWh",E);
return 0;
}
