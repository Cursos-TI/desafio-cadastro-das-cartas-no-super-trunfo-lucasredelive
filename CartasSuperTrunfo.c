#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  // Cidade 1

    int PontoTuristico1, Populacao1;
    float Area1, Pib1;
    char Nome1[61], Estado1[61], CodigoCarta1[61];
    
    printf("Digite as informações da primeira cidade\n");
    printf("Digite a População: \n");
    scanf("%i", &Populacao1);
    printf("Digita a quantidade de pontos turisticos: \n");
    scanf("%i", &PontoTuristico1);
    printf("Digite a Área: \n");
    scanf("%f", &Area1);
    printf("Digite o Pib: \n");
    scanf("%f", &Pib1);
    printf("Digite o nome da primeira Cidade: \n");
    fgets(Nome1,61,stdin);
    printf("Digite o estado da primeira Cidade: \n");
    scanf("%s", &Estado1);
    printf("Digite o codigo da primeira Cidade: \n");
    scanf("%s", &CodigoCarta1);


      // Cidade 2
      int PontoTuristico2, Populacao2;
      float Area2, Pib2;
      char Nome2[61], Estado2[61], CodigoCarta2[61];
      
      printf("Digite as informações da segunda cidade\n");
      printf("Digite a População: \n");
      scanf("%i", &Populacao2);
      printf("Digita a quantidade de pontos turisticos: \n");
      scanf("%i", &PontoTuristico2);
      printf("Digite a Área: \n");
      scanf("%f", &Area2);
      printf("Digite o Pib: \n");
      scanf("%f", &Pib2);
      printf("Digite o nome da segunda Cidade:\n");
      fgets(Nome2,61,stdin);
      printf("Digite o estado da segunda Cidade: \n");
      scanf("%s", &Estado2);
      printf("Digite o codigo da segunda Cidade: \n");
      scanf("%s", &CodigoCarta2);
     
      //Exibe as informações da cidada 1
      printf("____________________\n");
      printf("Informações da primeira cidade\n");
      printf("____________________\n");
      printf("População é = %i\n", Populacao1);
      printf("A Cidade tem %i pontos turristicos\n", PontoTuristico1);
      printf("A Area da cidade é: %f km²\n ", Area1);
      printf("O Pib da cidade é: %.2f\n ", Pib1);
      printf("População é = %i\n", Populacao1);
      printf("Cidade é = %s\n", Nome1);
      printf("O Estado é : %s\n", Estado1);
      printf("O Codigo é: %s\n", CodigoCarta1);


      // Exibe as informações da cidade 2
      printf("____________________\n");
      printf("Informações da segunda cidade\n");
      printf("____________________\n");
      printf("População é = %i\n", Populacao2);
      printf("A Cidade tem %i pontos turristicos\n", PontoTuristico2);
      printf("A Area da cidade é: %f km²\n ", Area2);
      printf("O Pib da cidade é: %.2f bilhoes de reais\n ", Pib2);
      printf("População é = %i\n", Populacao2);
      printf("Cidade é = %s\n", Nome2);
      printf("O Estado é : %s\n", Estado2);
      printf("O Codigo é: %s\n", CodigoCarta2);

  

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
