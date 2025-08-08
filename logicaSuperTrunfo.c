#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
// 1ª Carta
    char Carta[4] = "B01"; // usando um array de caracteres para armazenar o código da carta 
    char Estado[20] = "Rio Grande do Sul"; // Usamos char para armazenar o nome do estado, pois é uma string curta
    char Cidade[20] = "Porto Alegre"; // Cidade também é uma string curta, então usamos char, 20 caracteres são suficientes
    unsigned long int População = 1332000; // População é um número grande, então usamos unsigned long int para garantir que não haja overflow
    float Área = 496.8; // Área em km², usando float para permitir casas decimais
    double PIB = 81560000000.0; // PIB usando double para maior precisão
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
    int Pontos2 = 32;
    float Densidade_Populacional2 = População2 / Área2;
    double PIBPerCapita2 = PIB2 / População2;
    double DPI2 = (1.0 / Densidade_Populacional2);
    double SuperPoder2 = População2 + Área2 + PIB2 + Pontos2 + PIBPerCapita2 + DPI2;
    
    int opcao; // Variável para armazenar a escolha do usuário

    printf("Escolha o atributo para comparar:\n"); // Menu de opções para o usuário escolher qual atributo comparar
    printf("1 - População\n"); // Opção 1: População
    printf("2 - Área\n"); // Opção 2: Área
    printf("3 - PIB\n"); // Opção 3: PIB
    printf("4 - Pontos turísticos\n"); // Opção 4: Pontos turísticos
    printf("5 - Densidade demográfica\n"); // Opção 5: Densidade demográfica
    printf("Digite o número da opção: "); // Solicita ao usuário que insira sua escolha
    scanf("%d", &opcao); // Lê a escolha do usuário

    printf("\nEstados: %s e %s\n", Estado, Estado2); // Exibe os estados que estão sendo comparados

    switch (opcao) { // Estrutura switch para comparar os atributos com base na escolha do usuário
        case 1: // Caso o usuário escolheu comparar a população
            printf("Atributo: População\n"); // Exibe o atributo que está sendo comparado
            printf("Carta 1: %s = %lu\n", Estado, População); // Exibe o Estado e a população da primeira carta
            printf("Carta 2: %s = %lu\n", Estado2, População2); // Exibe o Estado e a população da segunda carta
            if (População > População2) // Estrutura if para determinar se a população primeira carta é maior
                printf("Carta 1 venceu!\n"); // Exibe que a primeira carta venceu
            else if (População < População2) // Estrutura else if para se a população da segunda carta for maior
                printf("Carta 2 venceu!\n"); // Exibe que a segunda carta venceu
            else // Caso as populações sejam iguais
                printf("Empate!\n"); // Exibe que houve um empate
            break; // Encerra o case 1
        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1: %s = %.2f\n", Estado, Área);
            printf("Carta 2: %s = %.2f\n", Estado2, Área2);
            if (Área > Área2)
                printf("Carta 1 venceu!\n");
            else if (Área < Área2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1: %s = %.2f\n", Estado, PIB);
            printf("Carta 2: %s = %.2f\n", Estado2, PIB2);
            if (PIB > PIB2)
                printf("Carta 1 venceu!\n");
            else if (PIB < PIB2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos turísticos\n");
            printf("Carta 1: %s = %d\n", Estado, Pontos);
            printf("Carta 2: %s = %d\n", Estado2, Pontos2);
            if (Pontos > Pontos2)
                printf("Carta 1 venceu!\n");
            else if (Pontos < Pontos2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade demográfica\n");
            printf("Carta 1: %s = %.2f\n", Estado, Densidade_Populacional);
            printf("Carta 2: %s = %.2f\n", Estado2, Densidade_Populacional2);
            if (Densidade_Populacional < Densidade_Populacional2) // Menor densidade populacional vence
                printf("Carta 1 venceu!\n");
            else if (Densidade_Populacional > Densidade_Populacional2) // Maior densidade populacional perde
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        default: // Caso o usuário insira uma opção inválida
            printf("Opção inválida!\n"); // Exibe mensagem de erro
    }
}