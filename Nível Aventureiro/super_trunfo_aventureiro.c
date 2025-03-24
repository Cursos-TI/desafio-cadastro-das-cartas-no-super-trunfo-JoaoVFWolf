#include <stdio.h>
#include <string.h> //Precisei incluir esta biblioteca também para corrigir alguns erros do meu código

// Função criada para calcular a densidade populacional
float calcular_densidade_p(int populacao, float area){
    return populacao / area;
}

int main() {
    // Aqui eu declaro as variaveis da primeira carta
    char estado; 
    char codigo[5]; 
    char cidade[25];
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontos_t = 0;

    // Aqui eu declaro as variaveis da segunda carta
    char estado2; 
    char codigo2[5]; 
    char cidade2[25];
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontos_t2 = 0;

    // Peço para o usuario digitar os dados da carta 1
    printf("Digite um estado com uma letra de A-H:\n");
    scanf(" %c", &estado);

    printf("Digite um codigo para a sua cidade com a letra do estado seguida de um número de 01-04:\n");
    scanf("%4s", codigo);
    getchar(); // Estava com alguns erros, o programa pulava algumas linhas no terminal, então dei uma pesquisada e colocar alguns getchar(), ajudaram a não ocorrer mais
               // para limpar o buffer de entrada do ENTER
    printf("Digite uma cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);  // Precisei colocar este fgets para ler cidades com espaços entre o nome
    cidade[strcspn(cidade, "\n")] = 0;     

    printf("Digite a população da sua cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a area em km² da sua cidade:\n");
    scanf("%f", &area);

    printf("Digite o pib da sua cidade:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos_t);
    getchar(); 

    //peço para o usuario digitar os dados da carta 2
    printf("Digite outro estado com uma letra de A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite um codigo para a sua outra cidade com a letra do estado seguida de um número de 01-04:\n");
    scanf("%s", codigo2);
    getchar();

    printf("Digite a sua outra cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população da sua outra cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da sua outra cidade:\n");
    scanf("%f", &area2);

    printf("Digite o pib da sua outra cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos da sua outra cidade:\n");
    scanf("%d", &pontos_t2);

    // Aqui eu exibo no terminal a primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_t);

    // Aqui eu exibo no terminal a segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_t2);

    return 0;

}