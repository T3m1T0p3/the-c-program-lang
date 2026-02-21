#include <stdio.h>

/*write a program to  count blanks, tabs, and newlines in input.*/

int main(){
	int tc=0, bc=0,nlc=0;
	char tab='\t';
	char blank=' ';
	char new_line='\n';
	int c;
	while((c=getchar())!=EOF){
		if(c==tab)
			++tc;
		if(c==blank) ++bc;
		if(c==new_line) ++nlc;
	}
	printf("tabs:%d blank:%d new line:%d",tc,bc,nlc);
}
