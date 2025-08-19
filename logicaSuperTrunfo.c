#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Menu
    char opcao;

    // Número da carta
    int numeroplayer, numeropc;

    // Dados do jogador
    char estado_player[20], nome_player[30], carta_player[10];
    unsigned long int habitantes_player;
    float area_player, pib_player;
    int pontos_player;
    float pibpercap_player = (float) pib_player/habitantes_player;
    float densidade_player = (float) habitantes_player/area_player;
    float inversodensidade_player = area_player/densidade_player;
    double supoder_player = (habitantes_player + area_player + pib_player + pontos_player + pibpercap_player + densidade_player + inversodensidade_player);
    // Dados do computador
    char estado_pc[20], nome_pc[30], carta_pc[10];
    unsigned long int habitantes_pc;
    float area_pc, pib_pc;
    int pontos_pc;
    float pibpercap_pc = (float) pib_pc/habitantes_pc;
    float densidade_pc = (float) habitantes_pc/area_pc;
    float inversodensidade_pc = area_pc/densidade_pc;
    double superpoder_pc = (habitantes_pc + area_pc + pib_pc + pontos_pc + pibpercap_pc + densidade_pc + inversodensidade_pc);


    // Gera número aleatório
    srand(time(0));
    numeropc = rand() % 3 + 1;

    // Menu inicial
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha uma opção:\n");
    printf("A. Iniciar o jogo\n");
    printf("B. Instruções do jogo\n");
    printf("C. Sair do jogo\n");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A':
        case 'a':
            printf("Iniciando o jogo...\n");
            printf("Digite o número da carta (1 a 3): ");
            scanf("%d", &numeroplayer);

            if (numeroplayer < 1 || numeroplayer > 3) {
                printf("Número inválido! Escolha entre 1 e 3.\n");
                return 1;
            }

            // Dados do jogador
            switch (numeroplayer) {
                case 1:
                    sprintf(carta_player, "Carta 1");
                    sprintf(estado_player, "Maranhão");
                    sprintf(nome_player, "São Luís");
                    habitantes_player = 1000000;
                    area_player = 500.5;
                    pib_player = 2000000.0;
                    pontos_player = 10;
                    pibpercap_player = pib_player / habitantes_player;
                    densidade_player = habitantes_player / area_player;
                    inversodensidade_player = area_player / densidade_player;
                    supoder_player = (habitantes_player + area_player + pib_player + pontos_player + pibpercap_player + densidade_player + inversodensidade_player);
                    break;
                case 2:
                    sprintf(carta_player, "Carta 2");
                    sprintf(estado_player, "São Paulo");
                    sprintf(nome_player, "São Paulo");
                    habitantes_player = 2000000;
                    area_player = 600.5;
                    pib_player = 3000000.0;
                    pontos_player = 20;
                    pibpercap_player = pib_player / habitantes_player;
                    densidade_player = habitantes_player / area_player;
                    inversodensidade_player = area_player / densidade_player;
                    supoder_player = (habitantes_player + area_player + pib_player + pontos_player + pibpercap_player + densidade_player + inversodensidade_player);
                    break;
                case 3:
                    sprintf(carta_player, "Carta 3");
                    sprintf(estado_player, "Bahia");
                    sprintf(nome_player, "Salvador");
                    habitantes_player = 1500000;
                    area_player = 700.5;
                    pib_player = 2500000.0;
                    pontos_player = 15;
                    pibpercap_player = pib_player / habitantes_player;
                    densidade_player = habitantes_player / area_player;
                    inversodensidade_player = area_player / densidade_player;
                    supoder_player = (habitantes_player + area_player + pib_player + pontos_player + pibpercap_player + densidade_player + inversodensidade_player);
                    break;
            }

            // Dados do computador
            switch (numeropc) {
                case 1:
                    sprintf(carta_pc, "Carta 1");
                    sprintf(estado_pc, "Maranhão");
                    sprintf(nome_pc, "São Luís");
                    habitantes_pc = 1000000;
                    area_pc = 500.5;
                    pib_pc = 2000000.0;
                    pontos_pc = 10;
                    pibpercap_pc = pib_pc / habitantes_pc;
                    densidade_pc = habitantes_pc / area_pc;
                    inversodensidade_pc = area_pc / densidade_pc;
                    superpoder_pc = (habitantes_pc + area_pc + pib_pc + pontos_pc + pibpercap_pc + densidade_pc + inversodensidade_pc);
                    break;
                case 2:
                    sprintf(carta_pc, "Carta 2");
                    sprintf(estado_pc, "São Paulo");
                    sprintf(nome_pc, "São Paulo");
                    habitantes_pc = 2000000;
                    area_pc = 600.5;
                    pib_pc = 3000000.0;
                    pontos_pc = 20;
                    pibpercap_pc = pib_pc / habitantes_pc;
                    densidade_pc = habitantes_pc / area_pc;
                    inversodensidade_pc = area_pc / densidade_pc;
                    superpoder_pc = (habitantes_pc + area_pc + pib_pc + pontos_pc + pibpercap_pc + densidade_pc + inversodensidade_pc);   
                    break;
                case 3:
                    sprintf(carta_pc, "Carta 3");
                    sprintf(estado_pc, "Bahia");
                    sprintf(nome_pc, "Salvador");
                    habitantes_pc = 1500000;
                    area_pc = 700.5;
                    pib_pc = 2500000.0;
                    pontos_pc = 15;
                    pibpercap_pc = pib_pc / habitantes_pc;
                    densidade_pc = habitantes_pc / area_pc;
                    inversodensidade_pc = area_pc / densidade_pc;
                    superpoder_pc = (habitantes_pc + area_pc + pib_pc + pontos_pc + pibpercap_pc + densidade_pc + inversodensidade_pc);   
                    break;

            }

            // Exibe cartas
        printf("\nSua carta:\n");
        printf("Carta: %s\n", carta_player);
        printf("Estado: %s\n", estado_player);
        printf("Cidade: %s\n", nome_player);
        printf("Habitantes: %lu\n", habitantes_player);
        printf("Área: %.2f km²\n", area_player);
        printf("PIB: %.2f\n", pib_player);
        printf("Pontos turísticos: %d\n", pontos_player);
        printf("PIB per capita: %.2f\n", pibpercap_player);
        printf("Densidade populacional: %.2f habitantes/km²\n", densidade_player);
        printf("Superpoder: %.2f\n\n", supoder_player);

        printf("Carta do computador:\n");
        printf("Carta: %s\n", carta_pc);
        printf("Estado: %s\n", estado_pc);
        printf("Cidade: %s\n", nome_pc);
        printf("Habitantes: %lu\n", habitantes_pc);
        printf("Área: %.2f km²\n", area_pc);
        printf("PIB: %.2f\n", pib_pc);
        printf("Pontos turísticos: %d\n", pontos_pc);
        printf("PIB per capita: %.2f\n", pibpercap_pc);
        printf("Densidade populacional: %.2f habitantes/km²\n", densidade_pc);
        printf("Superpoder: %.2f\n\n", superpoder_pc);

            // Comparação das cartas
        printf("Comparando as cartas...\n");
            // Comparação simples por PIB
            if (pib_player > pib_pc) {
                printf("Você venceu! Sua cidade tem o maior PIB com o valor de %.2f contra %.2f do computador\n", pib_player, pib_pc);
            } else if (pib_player < pib_pc) {
                printf("O computador venceu! A cidade dele tem o maior PIB com o valor de %.2f contra %.2f do computador\n", pib_pc, pib_player);
            } else {
                printf("Empate! Ambas as cidades têm o mesmo PIB com o valor de %.2f.\n", pib_player);
            }
            // Comparação por pontos turísticos
            if (pontos_player > pontos_pc) {
                printf("Você venceu! Sua cidade tem mais pontos turísticos com %d contra %d pontos turísticos do computador\n", pontos_player, pontos_pc);
            } else if (pontos_player < pontos_pc) {
                printf("O computador venceu! A cidade dele tem mais pontos turísticos com %d contra o seus %d pontos turísticos\n", pontos_pc, pontos_player);
            } else {
                printf("Empate! Ambas as cidades têm o mesmo número com %d pontos turísticos.\n", pontos_player);
            }
             // Comparação por número de habitantes
            if (habitantes_player > habitantes_pc) {
                printf("Você venceu! Sua cidade tem %lu contra %lu habitantes da cidade do computador\n", habitantes_player, habitantes_pc);
            } else if (habitantes_player < habitantes_pc) {
                printf("O computador venceu! A cidade dele tem %lu contra a sua cidade com %lu habitantes.\n", habitantes_pc, habitantes_player);
            } else {
                printf("Empate! Ambas as cidades têm o %lu habitantes.\n",  habitantes_player);
            }
             // Comparação por área
            if (area_player > area_pc) {
                printf("Você venceu! Sua cidade é maior em área com o resultado de %.2fkm² contra %.2fkm² da cidade do computador\n", area_player, area_pc);
            } else if (area_player < area_pc) {
                printf("O computador venceu! A cidade dele é maior em área com o resultado de %.2fkm² contra a sua área de %.2f km²\n", area_pc, area_player);
            } else {
                printf("Empate! Ambas as cidades têm a área de %.2f.\n", area_player);
            } 

            // Comparação por PIB per capita
            if (pibpercap_player > pibpercap_pc) {
                printf("Você venceu! Sua cidade tem o maior PIB per capita com o valor de %.2f contra %.2f do computador\n", pibpercap_player, pibpercap_pc);
            } else if (pibpercap_player < pibpercap_pc) {
                printf("O computador venceu! A cidade dele tem o maior PIB per capita com o valor de %.2f contra %.2f da sua cidade\n", pibpercap_pc, pibpercap_player);
            } else {
                printf("Empate! Ambas as cidades têm o mesmo PIB per capita com o valor de %.2f.\n", pibpercap_player);
            }

            // Comparação por densidade populacional
            if (densidade_player < densidade_pc) {  
                printf("Você venceu! Sua cidade tem menor densidade populacional com o valor de %.2f habitantes/km² contra %.2f do computador\n\n\n", densidade_player, densidade_pc);
            } else if (densidade_player > densidade_pc) {
                printf("O computador venceu! A cidade dele tem menor densidade populacional com o valor de %.2f habitantes/km² contra %.2f da sua cidade\n\n\n", densidade_pc, densidade_player);
            } else {
                printf("Empate! Ambas as cidades têm a mesma densidade populacional com o valor de %.2f habitantes/km².\n\n\n", densidade_player);
            }
            // Comparação de superpoderes
            printf("Resultado da batalha:\n");

                if (superpoder_pc> supoder_player) {
                    printf("O computador venceu com o superpoder de %.2f contra %.2f do jogador.\n", superpoder_pc, supoder_player);
                } else if (superpoder_pc < supoder_player) {
                    printf("O jogador venceu com o superpoder de %.2f contra %.2f do computador.\n", supoder_player, superpoder_pc);
                } else {
                    printf("Empate! Ambos têm o mesmo superpoder de %.2f.\n", supoder_player);
                }
                break;
        case 'B':
        case 'b':
            printf("\nInstruções do jogo:\n");
            printf("Você escolhe uma carta representando uma cidade brasileira.\n");
            printf ("computador também escolhe uma carta aleatória.\n");
            printf ("cidades são comparadas com base no PIB.\n");
            printf("Quem tiver o maior PIB vence!\n");
            break;

        case 'C':
        case 'c':
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opção inválida! Escolha A, B ou C.\n");
            break;
    }

    return 0;
}
