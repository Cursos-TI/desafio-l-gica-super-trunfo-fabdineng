#include <stdio.h>
#include <string.h>


int main() {


    // declarando as variáveis    
    char uf1[3];
    char codcarta1[5], cid1[20];
    int pop1, ptur1;
    float area1, pib1;
    float den_pop1, pib_percapita1;

    char uf2[3];
    char codcarta2[5], cid2[20];
    int pop2, ptur2;
    float area2, pib2;
    float den_pop2, pib_percapita2;

    int fator_conv = 1000000000; // fator de conversao para bilhao

    // declarando variaveis pra resultado da comparação

    int res_pop, res_ptur, res_area, res_pib, res_den_pop, res_pib_percapita, res_superpoder;
    float superpoder1, superpoder2;
    float inv_den_pop1, inv_den_pop2; //inverso da densidade populacional

        
    //Cadastro da carta 1

    printf("Código da carta = UF+nº da carta (RJ01)\n\n");

    printf("***** Cadastro da Primeira carta *****\n");

        printf("Informe o Estado: ");
           scanf("%s", &uf1);
        printf("Informe o Codigo da Carta: "); 
            scanf("%s", &codcarta1);

fgets(cid1, 20, stdin); // limpa as entradas para o fgets nao ignorar a digitação

        printf("Informe a Cidade: ");
            fgets(cid1, 20, stdin);
            cid1[strcspn(cid1, "\n")] = 0;
        printf("Informe a População: ");
            scanf("%d", &pop1);
        printf("Informe a Área: ");
            scanf("%f", &area1);
        printf("Informe o PIB: ");
            scanf("%f", &pib1);
        printf("Informe a Quantidade de Pontos Turisticos: ");
            scanf("%d", &ptur1);

        // calculando a densidade populacional e pib per capita da carta 1

        den_pop1 = pop1 / area1;
        pib_percapita1 = (pib1 * fator_conv) / pop1;
        
      
               
printf("\n");

    //Cadastro da carta 2

    printf("***** Cadastro da Segunda carta *****\n");

        printf("Informe o Estado: ");
            scanf("%s", &uf2);
        printf("Informe o Codigo da Carta: ");
            scanf("%s", &codcarta2);

fgets(cid2, 20, stdin); // limpa as entradas para o fgets nao ignorar a digitação

        printf("Informe a Cidade: ");
            fgets(cid2, 20, stdin);
            cid2[strcspn(cid2, "\n")] = 0;
        printf("Informe a População: ");
            scanf("%d", &pop2);
        printf("Informe a Área: ");
            scanf("%f", &area2);
        printf("Informe o PIB: ");
            scanf("%f", &pib2);
        printf("Informe a Quantidade de Pontos Turisticos: ");
            scanf("%d", &ptur2);

        // calculando a densidade populacional e pib per capita da carta 2

        den_pop2 = pop2 / area2;
        pib_percapita2 = (pib2 * fator_conv) / pop2;


        // calculando o inverso da densidade populacional
        inv_den_pop1 = 1 / den_pop1;
        inv_den_pop2 = 1 / den_pop2;

        // calculando o super poder
        superpoder1 = pop1 + area1 + pib1 + ptur1 + inv_den_pop1;
        superpoder2 = pop2 + area2 + pib2 + ptur2 + inv_den_pop2;

        // comparando as cartas - carta1 > carta2
        res_pop = pop1 > pop2;
        res_area = area1 > area2;
        res_pib = pib1 > pib2;
        res_ptur = ptur1 > ptur2;
        res_den_pop = den_pop1 < den_pop2;
        res_pib_percapita = pib_percapita1 > pib_percapita2;
        res_superpoder = superpoder1 > superpoder2;


printf("\n\n");

// exibe a densidade populacional e PIB per capita
    printf("***** Carta 1 *****\n");
    printf("Densidade Populacional: %.2f Hab/Km2\n", den_pop1);
    printf("PIB Per Capita: %.2f R$/Hab.\n", pib_percapita1);

    printf("\n\n");

    printf("***** Carta 2 *****\n");
    printf("Densidade Populacional: %.2f Hab/Km2\n", den_pop2);
    printf("PIB Per Capita: %.2f R$/Hab.\n\n", pib_percapita2);
        
// comparando as cartas no atributo população e exibindo

    printf("***** Comparação de Cartas (Atributo: População) *****\n\n");
    printf("Carta 1 - %s (%s): %d\n", cid1, uf1, pop1);
    printf("Carta 2 - %s (%s): %d\n\n", cid2, uf2, pop2);

    if(pop1 > pop2){
        printf("Resultado: Carta 1 (%s) venceu !!", cid1);
    } else{
        if(pop2 > pop1){
           printf("Resultado: Carta 2 (%s) venceu !!", cid2); 
        } else{
            printf("Resultado: Carta 1 e Carta 2 possuem a mesma População (%s) e (%s) Empataram !!", cid1, cid2);
        }
    }




    return 0;
}