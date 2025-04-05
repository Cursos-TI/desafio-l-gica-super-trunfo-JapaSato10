#include <stdio.h>


int main() {
    char Estado1[30] = "SaoPaulo";
    char CodigoCarta1[5] = "A01";
    char Cidade1[20] = "Campinas";
    int Populacao1 = 100000;
    float Área1 = 10000;
    float PIB1 = 1000;
    int PontosTuristicos1 = 100;
    float densidade1 = 1433;
    float pibPerCapita1 = 59000;


    
    char Estado2[30] ="Bahia";
    char CodigoCarta2[5] = "B02";
    char Cidade2[20] = "Salvador";
    int Populacao2 = 200000;
    float Área2 = 20000;
    float PIB2 = 200;
    int PontosTuristico2 = 250;
    float densidade2 = 3486;
    float pibPerCapita2 = 20000;
   
    

printf("Digite a letra do estado da primeira carta: ");
scanf(" %c", &Estado1);

printf("Digite o código da carta: ");
scanf(" %s", CodigoCarta1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Cidade1);


printf("Digite a letra do estado da segunda carta: ");
scanf(" %c", &Estado2);

printf("Digite o código da carta: ");
scanf(" %s", CodigoCarta2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Cidade2);




     densidade1 = Populacao1 / Área1;
     pibPerCapita1 = PIB1* 1000000000 / Populacao1; 
 
 
     densidade2 = Populacao2 / Área2;
     pibPerCapita2 = PIB2 * 1000000000 / Populacao2; 





printf("\nCarta 1:\n");
printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        Estado1, CodigoCarta1, Cidade1, Populacao1, Área1, PIB1, PontosTuristicos1, densidade1, pibPerCapita1);


printf("\nCarta 2:\n");
printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        Estado2, CodigoCarta2, Cidade2, Populacao2, Área2, PIB2, PontosTuristico2, densidade2, pibPerCapita2);

    return 0;
}




