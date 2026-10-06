#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_NOME 100

// Definição da estrutura do cliente
typedef struct {
    char nome[MAX_NOME];
    int idade;
    char sexo;
} Cliente;

int main() {
    FILE *arquivo = fopen("clientes.csv", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo clientes.csv\n");
        return 1;
    }

    Cliente clientes[MAX_CLIENTES];
    char linha[256];
    int total_clientes = 0;

    // Ignora a primeira linha (cabeçalho)
    if (fgets(linha, sizeof(linha), arquivo) == NULL) {
        printf("Arquivo vazio ou inválido.\n");
        fclose(arquivo);
        return 1;
    }

    // Leitura dos dados do arquivo CSV
    while (fgets(linha, sizeof(linha), arquivo) != NULL && total_clientes < MAX_CLIENTES) {
        // Remove a quebra de linha se existir
        linha[strcspn(linha, "\n")] = 0;

        // Extração dos campos separados por vírgula
        char *token = strtok(linha, ",");
        if (token != NULL) {
            strcpy(clientes[total_clientes].nome, token);
            
            token = strtok(NULL, ",");
            if (token != NULL) {
                clientes[total_clientes].idade = atoi(token);
                
                token = strtok(NULL, ",");
                if (token != NULL) {
                    clientes[total_clientes].sexo = token[0];
                    total_clientes++;
                }
            }
        }
    }
    fclose(arquivo);

    // Variáveis para estatísticas
    int soma_idade = 0;
    int qtd_m = 0, qtd_f = 0;
    int soma_idade_m = 0, soma_idade_f = 0;

    // Exibição do relatório formatado na tela
    printf("==================================================\n");
    printf("%-25s | %-5s | %-4s\n", "Nome", "Idade", "Sexo");
    printf("==================================================\n");

    for (int i = 0; i < total_clientes; i++) {
        printf("%-25s | %-5d | %-4c\n", clientes[i].nome, clientes[i].idade, clientes[i].sexo);
        
        soma_idade += clientes[i].idade;

        if (clientes[i].sexo == 'M' || clientes[i].sexo == 'm') {
            qtd_m++;
            soma_idade_m += clientes[i].idade;
        } else if (clientes[i].sexo == 'F' || clientes[i].sexo == 'f') {
            qtd_f++;
            soma_idade_f += clientes[i].idade;
        }
    }

    // Cálculo das médias aritméticas
    float media_geral = total_clientes > 0 ? (float)soma_idade / total_clientes : 0;
    float media_m = qtd_m > 0 ? (float)soma_idade_m / qtd_m : 0;
    float media_f = qtd_f > 0 ? (float)soma_idade_f / qtd_f : 0;

    // Resumo Estatístico
    printf("==================================================\n");
    printf("RESUMO DOS DADOS:\n");
    printf("--------------------------------------------------\n");
    printf("Total de clientes: %d\n", total_clientes);
    printf("Média de idade geral: %.2f anos\n", media_geral);
    printf("--------------------------------------------------\n");
    printf("Quantidade de homens (M): %d\n", qtd_m);
    printf("Média de idade dos homens: %.2f anos\n", media_m);
    printf("--------------------------------------------------\n");
    printf("Quantidade de mulheres (F): %d\n", qtd_f);
    printf("Média de idade das mulheres: %.2f anos\n", media_f);
    printf("==================================================\n");

    return 0;
}
