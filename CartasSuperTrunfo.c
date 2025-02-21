#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade1[3]; 
    char nomeCidade1[20];
    int populacaoCidade1;
    int areaCidade1;
    int pibCidade1;
    int pontosTuristicosCidade1;
    float densidadePopulacionalCidade1;
    float pibPerCaptaCidade1;
    float superPoderCarta1;

    printf("Olá! Primeiro vamos definir o código da cidade! \n");
    printf("Escolha de A a H para o código do estado e de 01 a 04 para o código da cidade.\n");
    printf("Exemplo: C01\n");
    scanf("%3s", &codigoCidade1);
    printf("Digite agora o nome da cidade: \n");
    scanf(" %20s", &nomeCidade1);
    printf("Digite o tamanho da população dessa cidade: \n");
    scanf("%d", &populacaoCidade1);
    printf("Digite a área da cidade: \n");
    scanf("%d", &areaCidade1);
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pibCidade1);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosCidade1);

    densidadePopulacionalCidade1 = (float)populacaoCidade1 / areaCidade1;
    pibPerCaptaCidade1 = (float) pibCidade1 / populacaoCidade1;
    superPoderCarta1 = populacaoCidade1 + areaCidade1 + pibCidade1 +pontosTuristicosCidade1 - densidadePopulacionalCidade1;

    printf("Código da cidade escolhido: %s\n", codigoCidade1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Tamanho da população: %d\n", populacaoCidade1);
    printf("Area da cidade: %d\n", areaCidade1);
    printf("PIB da cidade: %d\n", pibCidade1);
    printf("Quantidade de pontos turístico: %d\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCidade1);
    printf("PIB percapta: %.2f\n", pibPerCaptaCidade1);
    printf("Super poder da carta 1: %.2f\n", superPoderCarta1);
    

    char codigoCidade2[3]; 
    char nomeCidade2[20];
    int populacaoCidade2;
    int areaCidade2;
    int pibCidade2;
    int pontosTuristicosCidade2;
    float densidadePopulacionalCidade2;
    float pibPerCaptaCidade2;
    float superPoderCarta2;

    printf("\n");
    printf("\n");

    printf("Agora vamos para a cidade 2! \n");
    printf("Escolha de A a H para o código do estado e de 01 a 04 para o código da cidade.\n");
    printf("Exemplo: C01\n");
    scanf("%3s", &codigoCidade2);
    printf("Digite agora o nome da cidade: \n");
    scanf(" %20s", &nomeCidade2);
    printf("Digite o tamanho da população dessa cidade: \n");
    scanf("%d", &populacaoCidade2);
    printf("Digite a área da cidade: \n");
    scanf("%d", &areaCidade2);
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pibCidade2);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosCidade2);

    densidadePopulacionalCidade2 = (float)populacaoCidade2 / areaCidade2;
    pibPerCaptaCidade2 = (float) pibCidade2 / populacaoCidade2;
    superPoderCarta2 = populacaoCidade2 + areaCidade2 + pibCidade2 +pontosTuristicosCidade2 - densidadePopulacionalCidade2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Código da cidade escolhido: %s\n", codigoCidade2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Tamanho da população: %d\n", populacaoCidade2);
    printf("Area da cidade: %d\n", areaCidade2);
    printf("PIB da cidade: %d\n", pibCidade2);
    printf("Quantidade de pontos turístico: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCidade2);
    printf("PIB percapta: %.2f\n", pibPerCaptaCidade2);
    printf("Super poder da carta 2: %.2f\n", superPoderCarta2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Se o retorno for 0 significa que o poder da carta 1 é maior que o poder da carta 2 \n");
    printf("%d\n",superPoderCarta1>superPoderCarta2);
    //Abaixo vou inserir a mesma coisa para carta 2

    return 0;
}
