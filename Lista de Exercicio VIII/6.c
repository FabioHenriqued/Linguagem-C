#include<stdio.h>
#include<locale.h>
#include<math.h>

float area(float n){
    float a;
    a = 3.14 * (pow (n, 2));
    return(a);
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, r;
    printf("Informe o raio: ");
    scanf("%f", &r);
    a = area(r);
    printf("a area é igual a: %.2f", a);
    return(0);
}