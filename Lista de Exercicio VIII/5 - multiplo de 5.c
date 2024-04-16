#include<stdio.h>
#include<locale.h>

void multi5(int n){
    if(n % 5 == 0){
        printf("%i é multiplo de 5.", n);
    }else{
        printf("%i não é multiplo de 5", n);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1;
    printf("Informe um numero: ");
    scanf("%i", &num1);
    multi5(num1);
    return(0);
}