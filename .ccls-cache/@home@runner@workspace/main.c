#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>

//Exercicio 1

int fatorial (int n);

//Exercicio 2

int soma (int n);

//Exercicio 3
int fibonacci(int n);

//Exercicio 4
int potencia(int x, int n);
int potencia_otimizada(int x, int n);

//Exercicio 5
void contagem_regressiva(int n);

//Exercicio 6
int soma_digitos(int n);

//Exercicio 7
void inverter_string(char *str, int inicio, int fim);

int main(void) {  
    int Rfat = fatorial(5);
    int Rsom = soma(5);
    int Rfib = 6;
    int x = 2, n = 5;
    int ctr = 3;
    int somaD = 1234;
    char str[] = "recursao";

    printf("O resultado da conta do numero fatorial é: %d \n", Rfat);

    printf("O resultado da soma de numeros naturais é: %d \n", Rsom);

    printf("Fibonacci(%d) = %d\n", Rfib, fibonacci(Rfib));


    printf("%d elevado a %d = %d\n", x, n, potencia_otimizada(x, n));

    printf("Soma dos dígitos de %d = %d\n", somaD, soma_digitos(somaD));


    contagem_regressiva(ctr);
    printf("\n");


    inverter_string(str, 0, strlen(str) - 1);
    printf("String invertida: %s\n", str);

    return 0;  
}

int fatorial (int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return n;
    }
    return n*fatorial(n-1);
}

int soma (int n){

  if(n <= 0){
    return n;
}
  return n+soma(n-1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int potencia(int x, int n) {
    if (n == 0) return 1; 
    return x * potencia(x, n - 1); 
}

int potencia_otimizada(int x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int half = potencia_otimizada(x, n / 2);
        return half * half; 
    } else {
        return x * potencia_otimizada(x, n - 1); 
    }
}

void contagem_regressiva(int n) {
    if (n < 0) return; 
    printf("%d ", n); 
    contagem_regressiva(n - 1); 
}

int soma_digitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + soma_digitos(n / 10);
}

void inverter_string(char *str, int inicio, int fim) {
    if (inicio >= fim) return; 
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp; 
    inverter_string(str, inicio + 1, fim - 1);
}