#include<stdio.h>
int main()
{
	float luismanzanas, luisuvas;
	float juanmanzanas, juanfresas;
	float laurafresas, laurauvas;
	float gananciaindividual1, gananciaindividual2, gananciaindividual3, gananciatotal, porcentajeindividual1, porcentajeindividual2, porcentajeindividual3;

printf("Manzanas de Luis (en Kg):");
scanf("%f", &luismanzanas);
printf("Uvas de Luis (en Kg):");
scanf("%f", &luisuvas);
gananciaindividual1=(luismanzanas*20)+(luisuvas*40);
printf("Las ganancias de Luis son:");
printf("%.2f\n", gananciaindividual1);

printf("\n\nManzanas de Juan (en Kg):");
scanf("%f", &juanmanzanas);
printf("Fresas de Luis (en Kg):");
scanf("%f", &juanfresas);
gananciaindividual2=(juanmanzanas*20)+(juanfresas*30);
printf("Las ganancias de Luis son:");
printf("%.2f\n", gananciaindividual2);

printf("\n\nFresas de Laura (en Kg):");
scanf("%f", &laurafresas);
printf("Uvas de Laura (en Kg):");
scanf("%f", &laurauvas);
gananciaindividual3=(laurafresas*30)+(laurauvas*40);
printf("Las ganancias de Luis son:");
printf("%.2f\n", gananciaindividual3);

gananciatotal= gananciaindividual1+gananciaindividual2+gananciaindividual3;
printf("\n\nLas ganancias totales son:");
printf("%.2f", gananciatotal);

porcentajeindividual1=(gananciaindividual1/gananciatotal)*100;
porcentajeindividual2=(gananciaindividual2/gananciatotal)*100;
porcentajeindividual3=(gananciaindividual3/gananciatotal)*100;

printf("\n\nEl porcentaje aportado por Luis es:");
printf("%.2f", porcentajeindividual1);

printf("\n\nEl porcentaje aportado por Juan es:");
printf("%.2f", porcentajeindividual2);

printf("\n\nEl porcentaje aportado por Laura es:");
printf("%.2f", porcentajeindividual3);



return 0;
}
