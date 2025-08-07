#include <stdio.h>

int main() {
    
// 1ª Carta
    char Carta[4] = "B01"; // usando um array de caracteres para armazenar o código da carta 
    char Estado[20] = "Rio Grande do Sul"; // Usamos char para armazenar o nome do estado, pois é uma string curta
    char Cidade[20] = "Porto Alegre"; // Cidade também é uma string curta, então usamos char, 20 caracteres são suficientes
    unsigned long int População = 1332000; // População é um número grande, então usamos unsigned long int para garantir que não haja overflow
    float Área = 496.8; // Área em km², usando float para permitir casas decimais
    double PIB = 81560000000.0; // PIB em reais, usando double para maior precisão
    int Pontos= 32; // Número de pontos turísticos, usando int já que é um número inteiro
    float Densidade_Populacional = População / Área; // Densidade populacional é a população dividida pela área
    double PIBPerCapita = PIB / População; // PIB per capita é o PIB dividido pela população
    double DPI = (1.0 / Densidade_Populacional); // DPI é o inverso da densidade populacional
    double SuperPoder = População + Área + PIB + Pontos + PIBPerCapita + DPI; // SuperPoder é uma métrica combinada de todos os atributos

// 2ª Carta
    char Carta2[4] = "B02";
    char Estado2[20] = "Ceará";
    char Cidade2[20] = "Fortaleza";
    unsigned long int População2 = 2627000;
    float Área2 = 313.8;
    double PIB2 = 73000000000.0;
    int Pontos2 = 28;
    float Densidade_Populacional2 = População2 / Área2;
    double PIBPerCapita2 = PIB2 / População2;
    double DPI2 = (1.0 / Densidade_Populacional2);
    double SuperPoder2 = População2 + Área2 + PIB2 + Pontos2 + PIBPerCapita2 + DPI2;

// População
    printf("População:\n"); // Exibindo os dados de população de cada carta
    printf("Carta 1 (%s): %lu\n", Estado, População); // %s para string, %lu para unsigned long int
    printf("Carta 2 (%s): %lu\n", Estado2, População2);
    if (População > População2) { // Usando if (se) para verificar se a população da carta 1 é maior que a da carta 2, então ela vence
        printf("A carta 1 (%s) venceu na População.\n", Estado);
    } else if (População < População2) { //usando else if (senão se) para verificar se a população da carta 2 é maior, então ela vence
        printf("A carta 2 (%s) venceu na População.\n", Estado2); 
    } else { // se nenhuma das condições acima for verdadeira, então as populações são iguais
        printf("Empate na População!\n"); // Exibindo que houve empate
    }

    printf("\n");
// Área
    printf("Área:\n"); // Exibindo os dados de área de cada carta
    printf("Carta 1 (%s): %.2f\n", Estado, Área); // %.2f para exibir float com duas casas decimais
    printf("Carta 2 (%s): %.2f\n", Estado2, Área2); 
    if (Área > Área2) {
        printf("A carta 1 (%s) venceu na Área.\n", Estado);
    } else if (Área < Área2) {
        printf("A carta 2 (%s) venceu na Área.\n", Estado2);
    } else {
        printf("Empate na Área!\n");
    }

    printf("\n");
// PIB
    printf("PIB:\n"); // Exibindo os dados de PIB de cada carta
    printf("Carta 1 (%s): %.2f\n", Estado, PIB);
    printf("Carta 2 (%s): %.2f\n", Estado2, PIB2);
    if (PIB > PIB2) {
        printf("A carta 1 (%s) venceu no PIB.\n", Estado);
    } else if (PIB < PIB2) {
        printf("A carta 2 (%s) venceu no PIB.\n", Estado2);
    } else {
        printf("Empate no PIB!\n");
    }

    printf("\n");
// Pontos turísticos
    printf("Pontos turísticos:\n"); // Exibindo os dados de pontos turísticos de cada carta
    printf("Carta 1 (%s): %d\n", Estado, Pontos); // %d para exibir int
    printf("Carta 2 (%s): %d\n", Estado2, Pontos2);
    if (Pontos > Pontos2) {
        printf("A carta 1 (%s) venceu nos Pontos turísticos.\n", Estado);
    } else if (Pontos < Pontos2) {
        printf("A carta 2 (%s) venceu nos Pontos turísticos.\n", Estado2);
    } else {
        printf("Empate nos Pontos turísticos!\n");
    }

    printf("\n");
// Densidade Populacional (menor é melhor)
    printf("Densidade Populacional:\n"); // Exibindo os dados de densidade populacional de cada carta
    printf("Carta 1 (%s): %.2f\n", Estado, Densidade_Populacional);
    printf("Carta 2 (%s): %.2f\n", Estado2, Densidade_Populacional2);
    if (Densidade_Populacional < Densidade_Populacional2) { // Aqui, menor é melhor, então verificamos se a densidade populacional da carta 1 é menor que a da carta 2
        printf("A carta 1 (%s) venceu na Densidade Populacional.\n", Estado);
    } else if (Densidade_Populacional > Densidade_Populacional2) {
        printf("A carta 2 (%s) venceu na Densidade Populacional.\n", Estado2);
    } else {
        printf("Empate na Densidade Populacional!\n");
    }

    printf("\n");
// PIB per capita
    printf("PIB per capita:\n"); // Exibindo os dados de PIB per capita de cada carta
    printf("Carta 1 (%s): %.2f\n", Estado, PIBPerCapita);
    printf("Carta 2 (%s): %.2f\n", Estado2, PIBPerCapita2);
    if (PIBPerCapita > PIBPerCapita2) {
        printf("A carta 1 (%s) venceu no PIB per capita.\n", Estado);
    } else if (PIBPerCapita < PIBPerCapita2) {
        printf("A carta 2 (%s) venceu no PIB per capita.\n", Estado2);
    } else {
        printf("Empate no PIB per capita!\n");
    }

    printf("\n");
// DPI
    printf("DPI:\n"); // Exibindo os dados de DPI de cada carta
    printf("Carta 1 (%s): %.6f\n", Estado, DPI); // %.6f para exibir double com seis casas decimais
    printf("Carta 2 (%s): %.6f\n", Estado2, DPI2);
    if (DPI > DPI2) {
        printf("A carta 1 (%s) venceu no DPI.\n", Estado);
    } else if (DPI < DPI2) {
        printf("A carta 2 (%s) venceu no DPI.\n", Estado2);
    } else {
        printf("Empate no DPI!\n");
    }

    printf("\n");
// SuperPoder
    printf("SuperPoder:\n"); // Exibindo os dados de SuperPoder de cada carta
    printf("Carta 1 (%s): %.2f\n", Estado, SuperPoder);
    printf("Carta 2 (%s): %.2f\n", Estado2, SuperPoder2);
    if (SuperPoder > SuperPoder2) {
        printf("A carta 1 (%s) venceu no SuperPoder.\n", Estado);
    } else if (SuperPoder < SuperPoder2) {
        printf("A carta 2 (%s) venceu no SuperPoder.\n", Estado2);
    } else {
        printf("Empate no SuperPoder!\n");
    }
}