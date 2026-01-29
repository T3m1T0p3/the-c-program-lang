#include <stdio.h>

/* print Fahrenheit-celcius table
	for far=0,20...300*/
int main(){
	float fahr,celcius;
	int lower,upper, step;
	lower=0;
	upper=300;
	step=20;
	celcius=lower;
	printf("Celcius\tFahr\n");
	while(celcius<=upper){
		fahr=9*(celcius)/5 + 32;
		printf("%3.0f\t%3.1f\n",celcius,fahr);
		celcius+=step;
	}
}
