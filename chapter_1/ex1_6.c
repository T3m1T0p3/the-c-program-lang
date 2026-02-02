#include <stdio.h>

/* verify that the expression getchar()!=EOF is 0 or 1*/

int main(){
	char c;
	int expr;
	while(expr=((c=getchar())!=EOF));
	printf("getchar()!=EOF%d",expr);
}
