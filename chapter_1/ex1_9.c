#include <stdio.h>

/*write a program that copies its inputs to its  outputs, replacing each string of one or more  blanks by a single 
blank*/
int main(){

    int c;
    int last_char=0;
    while((c=getchar())!=EOF){
        if(c==' ')
         {
             if(!last_char)
             {
                  printf("%c",c);
                  last_char=1;
             }
         }
        else{
            printf("%c",c);
		last_char=0;
            }
    }
    printf("\n");
}
