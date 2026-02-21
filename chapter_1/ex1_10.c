#include <stdio.h>

int main(){
    int c;
    while((c=getchar())!=EOF){
        if(c=='\b')  printf("%s","\\\\b");
        else if(c=='\t') printf("%s","\\\\t");
        else if(c=='\\') printf("%s","\\\\");
        else printf("%c",c);
    }
}
