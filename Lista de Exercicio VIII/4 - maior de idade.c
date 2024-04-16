#include<stdio.h>
#include<locale.h>

void checarid(int id){
    if(id >= 18){
        printf("é maior de idade.");
    }else{
        printf("é menor de idade");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int id;
    printf("Informe sua idade: ");
    scanf("%i", &id);
    checarid(id);
    return(0);
}