#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[2];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional; 
    float pibPerCapta ;
 

    printf("Digite o código da cidade \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da cidade \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = (float) populacao / area;
    pibPerCapta  =(float) pib / populacao;

    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População da cidade: %d \n", populacao);
    printf("Área da cidade: %f \n", area);
    printf("PIB da cidade: %f \n", pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %f \n", densidadePopulacional);
    printf("PIB per Capta: %f \n", pibPerCapta);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
