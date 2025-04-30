#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MATRIZ 4

// Exercício 1
int calcularFatorial(int numero);
// Exercício 2
int calcularSomaNaturais(int numero);
// Exercício 3
int calcularFibonacci(int numero);
// Exercício 4
int calcularPotencia(int base, int expoente);
int calcularPotenciaOtimizada(int base, int expoente);
// Exercício 5
void exibirContagemRegressiva(int numero);
// Exercício 6
int somarDigitos(int numero);
// Exercício 7
void inverterString(char *str, int inicio, int fim);
// Exercício 8
int verificarPalindromo(char str[], int inicio, int fim);
// Exercício 9
int calcularMDC(int num1, int num2);
// Exercício 10
int multiplicarNumeros(int num1, int num2);
// Exercício 11
int contarCaracteres(const char* str, char caractere);
// Exercício 12
int somarArray(int arr[], int tamanho, int indice);
// Exercício 13
int verificarPrimo(int numero, int divisor);
// Exercício 14
void converterParaBinario(int numero);
// Exercício 15
void imprimirPares(int numero);
// Exercício 16
void imprimirImpares(int numero);
// Exercício 17
int buscarElemento(int arr[], int tamanho, int indice, int elemento);
// Exercício 18
int calcularComprimentoString(const char* str);
// Exercício 19
void resolverHanoi(int numeroDiscos, char origem, char auxiliar, char destino);
// Exercício 20
void permutarString(char *str, int inicio, int fim);
// Exercício 21
void gerarCombinacoes(int arr[], int n, int k, int indice, int dados[], int i);
// Exercício 22
void gerarSubconjuntos(int arr[], int n, int indice, int *sub, int subIndice);
// Exercício 23
void realizarMergeSort(int arr[], int l, int r);
void realizarMerge(int arr[], int l, int m, int r);
// Exercício 24
void realizarQuickSort(int arr[], int baixo, int alto);
int realizarPartition(int arr[], int baixo, int alto);
// Exercício 25
int realizarBuscaBinaria(int arr[], int esquerda, int direita, int alvo);
// Exercício 26
int calcularExponenciacaoRapida(int base, int expoente);
// Exercício 27
int calcularCaminhosMatriz(int x1, int y1, int x2, int y2);
// Exercício 28
void resolverNQueens(int n);
int resolverNQueensUtil(int tabuleiro[], int linha, int n);
int verificarSeguranca(int tabuleiro[], int linha, int coluna, int n);
// Exercício 29
int resolverLabirinto(int lab[3][4], int x, int y, int sol[3][4]);
// Exercício 30
void gerarCombinacoesParenteses(int abertos, int fechados, char *str, int pos, int n);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MATRIZ 4


int main(void) {
    // Exercício 1 - Fatorial
    printf("Exercício 1 - Fatorial de 5: %d\n", calcularFatorial(5));

    // Exercício 2 - Soma dos números naturais até 10
    printf("Exercício 2 - Soma dos naturais até 10: %d\n", calcularSomaNaturais(10));

    // Exercício 3 - Fibonacci até o 6º termo
    printf("Exercício 3 - Fibonacci de 6: %d\n", calcularFibonacci(6));

    // Exercício 4 - Potência (2^3)
    printf("Exercício 4 - Potência (2^3): %d\n", calcularPotencia(2, 3));

    // Exercício 5 - Contagem regressiva de 5
    printf("Exercício 5 - Contagem regressiva de 5: ");
    exibirContagemRegressiva(5);
    printf("\n");

    // Exercício 6 - Soma dos dígitos de 12345
    printf("Exercício 6 - Soma dos dígitos de 12345: %d\n", somarDigitos(12345));

    // Exercício 7 - Inverter a string "Hello"
    char str1[] = "Hello";
    inverterString(str1, 0, strlen(str1) - 1);
    printf("Exercício 7 - String invertida: %s\n", str1);

    // Exercício 8 - Verificar se "madam" é palíndromo
    char str2[] = "madam";
    printf("Exercício 8 - 'madam' é palíndromo? %d\n", verificarPalindromo(str2, 0, strlen(str2) - 1));

    // Exercício 9 - MDC de 36 e 60
    printf("Exercício 9 - MDC de 36 e 60: %d\n", calcularMDC(36, 60));

    // Exercício 10 - Multiplicar 6 por 7
    printf("Exercício 10 - Multiplicar 6 por 7: %d\n", multiplicarNumeros(6, 7));

    // Exercício 11 - Contar o número de vezes que 'l' aparece em "hello world"
    printf("Exercício 11 - 'l' em 'hello world' aparece %d vezes\n", contarCaracteres("hello world", 'l'));

    // Exercício 12 - Somar todos os elementos de um array
    int arr1[] = {1, 2, 3, 4, 5};
    printf("Exercício 12 - Soma do array: %d\n", somarArray(arr1, 5, 0));

    // Exercício 13 - Verificar se 17 é primo
    printf("Exercício 13 - 17 é primo? %d\n", verificarPrimo(17, 17 / 2));

    // Exercício 14 - Converter 10 para binário
    printf("Exercício 14 - Binário de 10: ");
    converterParaBinario(10);
    printf("\n");

    // Exercício 15 - Imprimir pares até 10
    printf("Exercício 15 - Pares até 10: ");
    imprimirPares(10);
    printf("\n");

    // Exercício 16 - Imprimir ímpares até 10
    printf("Exercício 16 - Ímpares até 10: ");
    imprimirImpares(10);
    printf("\n");

    // Exercício 17 - Buscar elemento 3 no array
    int arr2[] = {1, 2, 3, 4, 5};
    printf("Exercício 17 - Elemento 3 encontrado? %d\n", buscarElemento(arr2, 5, 0, 3));

    // Exercício 18 - Calcular comprimento de "hello"
    printf("Exercício 18 - Comprimento de 'hello': %d\n", calcularComprimentoString("hello"));

    // Exercício 19 - Resolver Torre de Hanoi com 3 discos
    printf("Exercício 19 - Resolvendo Torre de Hanoi com 3 discos:\n");
    resolverHanoi(3, 'A', 'B', 'C');

    // Exercício 20 - Permutar a string "abc"
    char str3[] = "abc";
    printf("Exercício 20 - Permutações de 'abc':\n");
    permutarString(str3, 0, strlen(str3) - 1);

    // Exercício 21 - Gerar combinações de 3 elementos de um array
    int arr3[] = {1, 2, 3, 4};
    printf("Exercício 21 - Combinações de 3 elementos:\n");
    gerarCombinacoes(arr3, 4, 3, 0, (int[]) {0, 0, 0}, 0);

    // Exercício 22 - Gerar subconjuntos do array
    printf("Exercício 22 - Subconjuntos do array {1, 2}:\n");
    gerarSubconjuntos(arr3, 4, 0, (int[]) {0, 0}, 0);

    // Exercício 23 - Realizar Merge Sort
    int arr4[] = {5, 2, 9, 1, 5, 6};
    printf("Exercício 23 - Merge Sort:\n");
    realizarMergeSort(arr4, 0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr4[i]);
    }
    printf("\n");

    // Exercício 24 - Realizar Quick Sort
    int arr5[] = {10, 7, 8, 9, 1, 5};
    printf("Exercício 24 - Quick Sort:\n");
    realizarQuickSort(arr5, 0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr5[i]);
    }
    printf("\n");

    // Exercício 25 - Busca Binária de 9 em array ordenado
    int arr6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Exercício 25 - Busca Binária de 9: %d\n", realizarBuscaBinaria(arr6, 0, 8, 9));

    // Exercício 26 - Exponenciação rápida de 2^8
    printf("Exercício 26 - Exponenciação rápida de 2^8: %d\n", calcularExponenciacaoRapida(2, 8));

    // Exercício 27 - Caminhos em uma matriz 3x3 de (0, 0) a (2, 2)
    printf("Exercício 27 - Caminhos na matriz 3x3: %d\n", calcularCaminhosMatriz(0, 0, 2, 2));

    // Exercício 28 - Resolver N-Queens para N=4
    printf("Exercício 28 - Resolver N-Queens para N=4:\n");
    resolverNQueens(4);

    // Exercício 29 - Resolver Labirinto 3x4
    int labirinto[3][4] = {
        {0, 0, 0, 0},
        {0, 1, 0, 1},
        {0, 0, 0, 0}
    };
    int sol[3][4] = {0};
    printf("Exercício 29 - Resolver Labirinto:\n");
    resolverLabirinto(labirinto, 0, 0, sol);

    // Exercício 30 - Gerar combinações de parênteses para n=3
    char str4[7];
    printf("Exercício 30 - Combinações de parênteses para n=3:\n");
    gerarCombinacoesParenteses(0, 0, str4, 0, 3);

    return 0;
}

// Exercício 1 - Fatorial
int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    return numero * calcularFatorial(numero - 1);
}

// Exercício 2 - Soma dos números naturais
int calcularSomaNaturais(int numero) {
    if (numero == 0)
        return 0;
    return numero + calcularSomaNaturais(numero - 1);
}

// Exercício 3 - Fibonacci
int calcularFibonacci(int numero) {
    if (numero <= 1)
        return numero;
    return calcularFibonacci(numero - 1) + calcularFibonacci(numero - 2);
}

// Exercício 4 - Potência
int calcularPotencia(int base, int expoente) {
    if (expoente == 0)
        return 1;
    return base * calcularPotencia(base, expoente - 1);
}

// Exercício 4 (Otimizada) - Potência
int calcularPotenciaOtimizada(int base, int expoente) {
    if (expoente == 0)
        return 1;
    if (expoente % 2 == 0)
        return calcularPotenciaOtimizada(base * base, expoente / 2);
    return base * calcularPotenciaOtimizada(base, expoente - 1);
}

// Exercício 5 - Contagem regressiva
void exibirContagemRegressiva(int numero) {
    if (numero < 0)
        return;
    printf("%d ", numero);
    exibirContagemRegressiva(numero - 1);
}

// Exercício 6 - Soma dos dígitos
int somarDigitos(int numero) {
    if (numero == 0)
        return 0;
    return numero % 10 + somarDigitos(numero / 10);
}

// Exercício 7 - Inverter string
void inverterString(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverterString(str, inicio + 1, fim - 1);
}

// Exercício 8 - Verificar palíndromo
int verificarPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim)
        return 1;
    if (str[inicio] != str[fim])
        return 0;
    return verificarPalindromo(str, inicio + 1, fim - 1);
}

// Exercício 9 - MDC (Máximo Divisor Comum)
int calcularMDC(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return calcularMDC(num2, num1 % num2);
}

// Exercício 10 - Multiplicação de dois números
int multiplicarNumeros(int num1, int num2) {
    if (num2 == 0)
        return 0;
    return num1 + multiplicarNumeros(num1, num2 - 1);
}

// Exercício 11 - Contar caracteres
int contarCaracteres(const char* str, char caractere) {
    if (*str == '\0')
        return 0;
    return (*str == caractere) + contarCaracteres(str + 1, caractere);
}

// Exercício 12 - Soma de array
int somarArray(int arr[], int tamanho, int indice) {
    if (indice == tamanho)
        return 0;
    return arr[indice] + somarArray(arr, tamanho, indice + 1);
}

// Exercício 13 - Verificar se o número é primo
int verificarPrimo(int numero, int divisor) {
    if (numero <= 1)
        return 0;
    if (divisor == 1)
        return 1;
    if (numero % divisor == 0)
        return 0;
    return verificarPrimo(numero, divisor - 1);
}

// Exercício 14 - Converter para binário
void converterParaBinario(int numero) {
    if (numero == 0)
        return;
    converterParaBinario(numero / 2);
    printf("%d", numero % 2);
}

// Exercício 15 - Imprimir números pares até 'numero'
void imprimirPares(int numero) {
    if (numero < 2)
        return;
    imprimirPares(numero - 1);
    if (numero % 2 == 0)
        printf("%d ", numero);
}

// Exercício 16 - Imprimir números ímpares até 'numero'
void imprimirImpares(int numero) {
    if (numero < 1)
        return;
    imprimirImpares(numero - 1);
    if (numero % 2 != 0)
        printf("%d ", numero);
}

// Exercício 17 - Buscar elemento no array
int buscarElemento(int arr[], int tamanho, int indice, int elemento) {
    if (indice == tamanho)
        return 0;
    if (arr[indice] == elemento)
        return 1;
    return buscarElemento(arr, tamanho, indice + 1, elemento);
}

// Exercício 18 - Calcular comprimento da string
int calcularComprimentoString(const char* str) {
    if (*str == '\0')
        return 0;
    return 1 + calcularComprimentoString(str + 1);
}

// Exercício 19 - Torre de Hanoi
void resolverHanoi(int numeroDiscos, char origem, char auxiliar, char destino) {
    if (numeroDiscos == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    resolverHanoi(numeroDiscos - 1, origem, destino, auxiliar);
    printf("Mover disco %d de %c para %c\n", numeroDiscos, origem, destino);
    resolverHanoi(numeroDiscos - 1, auxiliar, origem, destino);
}

// Exercício 20 - Permutar string
void permutarString(char *str, int inicio, int fim) {
    if (inicio == fim)
        printf("%s\n", str);
    else {
        for (int i = inicio; i <= fim; i++) {
            char temp = str[inicio];
            str[inicio] = str[i];
            str[i] = temp;
            permutarString(str, inicio + 1, fim);
            temp = str[inicio];
            str[inicio] = str[i];
            str[i] = temp;
        }
    }
}

// Exercício 21 - Gerar combinações
void gerarCombinacoes(int arr[], int n, int k, int indice, int dados[], int i) {
    if (i == k) {
        for (int j = 0; j < k; j++)
            printf("%d ", dados[j]);
        printf("\n");
        return;
    }
    if (indice >= n)
        return;
    dados[i] = arr[indice];
    gerarCombinacoes(arr, n, k, indice + 1, dados, i + 1);
    gerarCombinacoes(arr, n, k, indice + 1, dados, i);
}

// Exercício 22 - Gerar subconjuntos
void gerarSubconjuntos(int arr[], int n, int indice, int *sub, int subIndice) {
    if (indice == n) {
        for (int i = 0; i < subIndice; i++)
            printf("%d ", sub[i]);
        printf("\n");
        return;
    }
    sub[subIndice] = arr[indice];
    gerarSubconjuntos(arr, n, indice + 1, sub, subIndice + 1);
    gerarSubconjuntos(arr, n, indice + 1, sub, subIndice);
}

// Exercício 23 - Merge Sort
void realizarMergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        realizarMergeSort(arr, l, m);
        realizarMergeSort(arr, m + 1, r);
        realizarMerge(arr, l, m, r);
    }
}

void realizarMerge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Exercício 24 - Quick Sort
void realizarQuickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = realizarPartition(arr, baixo, alto);
        realizarQuickSort(arr, baixo, pi - 1);
        realizarQuickSort(arr, pi + 1, alto);
    }
}

int realizarPartition(int arr[], int baixo, int alto) {
    int pivot = arr[alto];
    int i = (baixo - 1);
    for (int j = baixo; j < alto; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;
    return i + 1;
}

// Exercício 25 - Busca Binária
int realizarBuscaBinaria(int arr[], int esquerda, int direita, int alvo) {
    if (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == alvo)
            return meio;
        if (arr[meio] > alvo)
            return realizarBuscaBinaria(arr, esquerda, meio - 1, alvo);
        return realizarBuscaBinaria(arr, meio + 1, direita, alvo);
    }
    return -1;
}

// Exercício 26 - Exponenciação rápida
int calcularExponenciacaoRapida(int base, int expoente) {
    if (expoente == 0)
        return 1;
    if (expoente % 2 == 0)
        return calcularExponenciacaoRapida(base * base, expoente / 2);
    return base * calcularExponenciacaoRapida(base, expoente - 1);
}

// Exercício 27 - Caminhos em matriz
int calcularCaminhosMatriz(int x1, int y1, int x2, int y2) {
    if (x1 == x2 || y1 == y2)
        return 1;
    return calcularCaminhosMatriz(x1 + 1, y1, x2, y2) + calcularCaminhosMatriz(x1, y1 + 1, x2, y2);
}

// Exercício 28 - N-Queens
void resolverNQueens(int n) {
    int tabuleiro[n];
    if (resolverNQueensUtil(tabuleiro, 0, n)) {
        printf("Solução encontrada:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (tabuleiro[i] == j)
                    printf("Q ");
                else
                    printf(". ");
            }
            printf("\n");
        }
    } else {
        printf("Nenhuma solução encontrada\n");
    }
}

int resolverNQueensUtil(int tabuleiro[], int linha, int n) {
    if (linha == n)
        return 1;
    for (int i = 0; i < n; i++) {
        if (verificarSeguranca(tabuleiro, linha, i, n)) {
            tabuleiro[linha] = i;
            if (resolverNQueensUtil(tabuleiro, linha + 1, n))
                return 1;
            tabuleiro[linha] = -1;
        }
    }
    return 0;
}

int verificarSeguranca(int tabuleiro[], int linha, int coluna, int n) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i] == coluna || tabuleiro[i] - i == coluna - linha || tabuleiro[i] + i == coluna + linha)
            return 0;
    }
    return 1;
}

// Exercício 29 - Resolver labirinto
int resolverLabirinto(int lab[3][4], int x, int y, int sol[3][4]) {
    if (x == 2 && y == 3) {
        sol[x][y] = 1;
        return 1;
    }
    if (x >= 0 && x < 3 && y >= 0 && y < 4 && lab[x][y] == 0) {
        sol[x][y] = 1;
        if (resolverLabirinto(lab, x + 1, y, sol))
            return 1;
        if (resolverLabirinto(lab, x, y + 1, sol))
            return 1;
        sol[x][y] = 0;
    }
    return 0;
}

// Exercício 30 - Combinações de parênteses
void gerarCombinacoesParenteses(int abertos, int fechados, char *str, int pos, int n) {
    if (fechados == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (abertos < n) {
        str[pos] = '(';
        gerarCombinacoesParenteses(abertos + 1, fechados, str, pos + 1, n);
    }
    if (fechados < abertos) {
        str[pos] = ')';
        gerarCombinacoesParenteses(abertos, fechados + 1, str, pos + 1, n);
    }
}