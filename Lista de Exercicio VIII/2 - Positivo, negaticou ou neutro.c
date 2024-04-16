#include<stdio.h>
#include<locale.h>

void testedenumero (int n){
    if (n > 0){
        printf("%i é positivo.", n);
    }else if(n < 0){
        printf("%i é negativo.", n);
    }else{
        printf("0 é neutro");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;
    printf("Informe um numero inteiro: ");
    scanf("%i", &n1);
    testedenumero(n1);
}