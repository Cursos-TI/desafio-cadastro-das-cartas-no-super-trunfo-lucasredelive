#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int PontoTuristico, Populacao;
    float Area, Pib;
    char Nome[61];
    
    printf("Digite a População: \n");
    scanf("%i", &Populacao);
    printf("Digita a quantidade de pontos turisticos: \n");
    scanf("%i", &PontoTuristico);
    printf("Digite a Área: \n");
    scanf("%f", &Area);
    printf("Digite o Pib: \n");
    scanf("%f", &Pib);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Nome);
    printf("População é = %i\n", &Populacao);
    printf("Cidade é = %s\n", &Nome);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
