#include <stdio.h>
#include <math.h>
void vypocetSplatky(float suma, float urok, int dlzka, float *splatka){
	int y = dlzka /12;
	if(dlzka%12>0)y++;
	urok = pow((1+(urok/100)),y);
	*splatka = (suma*urok)/dlzka;
}

main(){
	float suma,urok,splatka,prijem;
	int dlzka;
	printf("zadajte sumu\n");
	scanf("%f",&suma);
	printf("\nzadajte urok (p.a.)\n");
	scanf("%f",&urok);
	printf("\ndlzku splatky (pocet mesiacov)\n");
	scanf("%d",&dlzka);
	printf("\nzadajte mesacny prijem\n");
	scanf("%f",&prijem);
	vypocetSplatky(suma,urok,dlzka,&splatka);
	float max = prijem*0.15;
	if(max>=splatka)
	printf("pozicka je mozna vyska splatky je %.2f",splatka);
	else printf("pozicka nieje mozna");
}
