#include <stdio.h>

/* task: modify the temperature conversion program to print the table in reverse order i.e from 300 degree to 8 */

int main(){
	int fahr;
	printf("Fahr\tCelsius\n");
	for(fahr=300;fahr>=0;fahr-=20)
		printf("%d\t%3.1f\n",fahr,(5.0/9)*(fahr-32));
}
