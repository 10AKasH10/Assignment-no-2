#include<stdio.h>
void Encripted(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
    *ptr = *ptr -1;
    ptr++;    
    }
}
int main(){
    char c[]="ifmp!xpse";
    Encripted(c);

    printf("the Encripted string =%s",c);

return 0;
}