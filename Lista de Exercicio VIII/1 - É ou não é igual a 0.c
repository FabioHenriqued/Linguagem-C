#include<stdio.h>
#include<locale.h>

void checarnum(int n){
    if(n == 0){
        printf("é igual a 0.");
    }else{
        printf("não é igual a 0");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1;
    printf("Informe um numero inteiro: ");
    scanf("%i", &num1);
    checarnum(num1);
    return(0);
}