#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------------------------------------------------------funções Login

struct Usuario {
    char username[50];
    char password[50];
    char nomeMae[50];
};

void recuperarsenha(struct Usuario usuarios[], int numUsuarios);

void fazerlogin(struct Usuario usuarios[], int numUsuarios) {
    char username[50];
    char password[50];
    int encontrado = 0;

    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].username, username) == 0 && strcmp(usuarios[i].password, password) == 0) {
            printf("Login realizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        char resposta;
        printf("Usuário ou senha incorretos.\n");
        printf("Deseja tentar recuperar a senha? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            recuperarsenha(usuarios, numUsuarios);
        } else {
            printf("Encerrando o programa.\n");
            exit(0); // Encerra o programa
        }
    }
}

void recuperarsenha(struct Usuario usuarios[], int numUsuarios) {
    char username[50];
    char nomeMae[50];
    int encontrado = 0;

    printf("Para recuperar a senha, digite seu username: ");
    scanf("%s", username);
    printf("Digite o nome da sua mãe: ");
    scanf("%s", nomeMae);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].username, username) == 0 && strcmp(usuarios[i].nomeMae, nomeMae) == 0) {
            printf("Senha recuperada com sucesso: %s\n", usuarios[i].password);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        char resposta;
        printf("Dados incorretos, não foi possível recuperar a senha.\n");
        printf("Deseja tentar novamente? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            recuperarsenha(usuarios, numUsuarios);
        } else {
            printf("Encerrando o programa.\n");
            exit(0); // Encerra o programa
        }
    }
}

//-------------------------------------------------------funções Estoque

typedef struct {
    int id;
    char nome[50];
    int quantidade;
} Produto;

Produto* estoque = NULL;
int contador_produto = 0;
int capacidade_estoque = 0;

// Função para redimensionar o vetor de produtos
void redimensionarEstoque() {
    if (capacidade_estoque == 0) {
        capacidade_estoque = 2;
        estoque = (Produto*)malloc(capacidade_estoque * sizeof(Produto));
    } else {
        capacidade_estoque *= 2;
        estoque = (Produto*)realloc(estoque, capacidade_estoque * sizeof(Produto));
    }
    if (estoque == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
}

void cadastrarProduto() {
    if (contador_produto == capacidade_estoque) {
        redimensionarEstoque();
    }

    Produto novoProduto;
    novoProduto.id = contador_produto + 1; // ID incremental
    printf("Nome do Produto: ");
    scanf(" %[^\n]", novoProduto.nome);
    printf("Quantidade: ");
    scanf("%d", &novoProduto.quantidade);

    estoque[contador_produto] = novoProduto;
    contador_produto++;

    printf("Produto cadastrado com sucesso!\n");
}

void alterarProduto() {
    int id;
    printf("ID do produto a alterar: ");
    scanf("%d", &id);

    int encontrado_estoque = 0;
    for (int i = 0; i < contador_produto; i++) {
        if (estoque[i].id == id) {
            printf("Novo nome do Produto: ");
            scanf(" %[^\n]", estoque[i].nome);
            printf("Nova quantidade: ");
            scanf("%d", &estoque[i].quantidade);

            printf("Produto alterado com sucesso!\n");
            encontrado_estoque = 1;
            break;
        }
    }

    if (!encontrado_estoque) {
        printf("Produto não encontrado!\n");
    }
}

void excluirProduto() {
    int id;
    printf("ID do produto a excluir: ");
    scanf("%d", &id);

    int encontrado_estoque = 0;
    for (int i = 0; i < contador_produto; i++) {
        if (estoque[i].id == id) {
            for (int j = i; j < contador_produto - 1; j++) {
                estoque[j] = estoque[j + 1];
            }
            contador_produto--;
            printf("Produto excluído com sucesso!\n");
            encontrado_estoque = 1;
            break;
        }
    }

    if (!encontrado_estoque) {
        printf("Produto não encontrado!\n");
    }
}

void listarProdutos() {
    if (contador_produto == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("ID\tNome\tQuantidade\n");
    for (int i = 0; i < contador_produto; i++) {
        printf("%d\t%s\t%d\n", estoque[i].id, estoque[i].nome, estoque[i].quantidade);
    }
}

//-------------------------------------------------------funções Vendas
// Adicione funções de vendas aqui, se necessário
//-------------------------------------------------------funções Vendas

int main() {
    struct Usuario usuarios[3];
    strcpy(usuarios[0].username, "usuario1");
    strcpy(usuarios[0].password, "senha1");
    strcpy(usuarios[0].nomeMae, "Maria");

    strcpy(usuarios[1].username, "usuario2");
    strcpy(usuarios[1].password, "senha2");
    strcpy(usuarios[1].nomeMae, "Ana");

    strcpy(usuarios[2].username, "usuario3");
    strcpy(usuarios[2].password, "senha3");
    strcpy(usuarios[2].nomeMae, "Joana");

    int opcao;

    do {
        printf("\nOpções:\n");
        printf("1 - Fazer login\n");
        printf("2 - Recuperar senha\n");
        printf("3 - Encerrar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fazerlogin(usuarios, 3);
                break;
            case 2:
                recuperarsenha(usuarios, 3);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                exit(0); // Encerra o programa
            default:
                printf("Opção inválida.\n");
        }
    } while (1); // Loop infinito, será encerrado com exit(0)

//-------------------------------------------------------estoque
    int opcao_estoque;

    do {
        printf("\nMENU\n");
        printf("1. Cadastrar Novo Produto\n");
        printf("2. Alterar Produto\n");
        printf("3. Excluir Produto Cadastrado\n");
        printf("4. Listar Produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_estoque);

        switch (opcao_estoque) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                alterarProduto();
                break;
            case 3:
                excluirProduto();
                break;
            case 4:
                listarProdutos();
                break;
            case 0:
                printf("Saindo...\n");
                free(estoque);
                exit(0); // Encerra o programa
            default:
                printf("Opção inválida!\n");
        }
    } while (1); // Loop infinito, será encerrado com exit(0)
}
