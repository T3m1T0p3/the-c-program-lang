#include <stdio.h>

/* print Fahrenheit-celcius table
	for far=0,20...300*/
int main(){
	float fahr,celcius;
	int lower,upper, step;
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	printf("Fahr\tCelcius\n");
	while(fahr<=upper){
		celcius=5*(fahr-32)/9;
		printf("%3.0f\t%3.1f\n",fahr,celcius);
		fahr+=step;
	}
}
