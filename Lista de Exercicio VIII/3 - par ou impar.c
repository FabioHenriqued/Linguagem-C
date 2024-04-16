#include<stdio.h>
#include<locale.h>

void parouimpar(int n){
    if(n % 2 == 0){
        printf("%i é par.", n);
    }else{
        printf("%i é impar", n);
    }
}

int main (){
    setlocale(LC_ALL, "Portuguese");
    int num1;
    printf("Informe um numero");
    scanf("%i", &num1);
    parouimpar(num1);
    return(0);
}