#include <stdio.h>
#include <string.h>


int main() {


    // declarando as variáveis    
   
    char pais1[20];
    int pop1, ptur1;
    float area1, pib1;
    float den_pop1, pib_percapita1;

    char pais2[20];
    int pop2, ptur2;
    float area2, pib2;
    float den_pop2, pib_percapita2;

    int fator_conv = 1000000000; // fator de conversao para bilhao

    float inv_den_pop1, inv_den_pop2; //inverso da densidade populacional

    // declarando varievel para escolha das opções
    int comparar1, comparar2;
    float soma_carta1, soma_carta2; //soma dos valores das escolhas
    
        
    //Cadastro da carta 1

    printf("***** Cadastre a Primeira carta *****\n");

        printf("Informe o País: ");
            fgets(pais1, 20, stdin);
            pais1[strcspn(pais1, "\n")] = 0;
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

    printf("***** Cadastre a Segunda carta *****\n");

fgets(pais2, 20, stdin); // limpa as entradas para o fgets nao ignorar a digitação

        printf("Informe o País: ");
            fgets(pais2, 20, stdin);
            pais2[strcspn(pais2, "\n")] = 0;
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

        // escolhendo o atributo e comparando as cartas
printf("\n\n");
        printf("*****     Escolha o Primeiro Atributo a ser Comparado     *****\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Nº de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        scanf("%d", &comparar1);

printf("\n\n");
        printf("*****     Escolha o Segundo Atributo a ser Comparado     *****\n");
        printf("**** ATENÇÃO !! O ATRIBUTO DEVE SER DIFERENTE DA PRIMEIRA ESCOLHA. ****\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Nº de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        scanf("%d", &comparar2);

        if (comparar1 < 1 || comparar1 > 5 || comparar2 < 1 || comparar2 > 5){ // verificando se tem alguma opção inválida
    printf("****    Opção Inválida !!    ****\n");
}else if (comparar1 == comparar2){
    printf("Voçê escolheu o mesmo atributo para comparar!!!!\n"); //verificando se o usuário escolheu o mesmo atributo
}else{
printf("\n\n");

        switch (comparar1)
        {
        case 1:
            if (pop1 == pop2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** Empate !! ***\n\n");
                soma_carta1 = pop1;
                soma_carta2 = pop2;
            }else if (pop1 > pop2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais1);
                soma_carta1 = pop1;
                soma_carta2 = pop2;
            }else
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais2);
                soma_carta1 = pop1;
                soma_carta2 = pop2;
            }   
              
            break;
        case 2:
            if (area1 == area2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** Empate !! ***\n\n");
                soma_carta1 = area1;
                soma_carta2 = area2;
            }else if (area1 > area2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais1);
                soma_carta1 = area1;
                soma_carta2 = area2;
            }else
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais2);
                soma_carta1 = area1;
                soma_carta2 = area2;
            }   
            break;
        case 3:
            if (pib1 == pib2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando PIB    ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** Empate !! ***\n\n");
                soma_carta1 = pib1;
                soma_carta2 = pib2;
            }else if (pib1 > pib2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando PIB   ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais1);
                soma_carta1 = pib1;
                soma_carta2 = pib2;
            }else
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando PIB    ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais2);
                soma_carta1 = pib1;
                soma_carta2 = pib2;
            }
            break;
        case 4:
            if (ptur1 == ptur2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** Empate !! ***\n\n");
                soma_carta1 = ptur1;
                soma_carta2 = ptur2;
            }else if (ptur1 > ptur2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais1);
                soma_carta1 = ptur1;
                soma_carta2 = ptur2;
            }else
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais2);
                soma_carta1 = ptur1;
                soma_carta2 = ptur2;
            }
            break;
        case 5:
            if (den_pop1 == den_pop2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica    ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** Empate !! ***\n\n");
                soma_carta1 = den_pop1;
                soma_carta2 = den_pop2;
            }else if (den_pop1 < den_pop2)
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica   ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais1);
                soma_carta1 = den_pop1;
                soma_carta2 = den_pop2;
            }else
            {
                printf("****    Carta %s X Carta %s    ****\n\n", pais1, pais2);
                printf("*****    Comparando o Primeiro Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica    ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** A Carta %s Venceu !! ***\n\n", pais2);
                soma_carta1 = den_pop1;
                soma_carta2 = den_pop2;
            }
            break;
        
        default:
            printf("Opção inválida !!\n");
            break;
        }

        switch (comparar2)
        {
        case 1:
            if (pop1 == pop2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** Empate !! ***\n");
                soma_carta1 = soma_carta1 + pop1;
                soma_carta2 = soma_carta2 + pop2;
            }else if (pop1 > pop2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** A Carta %s Venceu !! ***\n", pais1);
                soma_carta1 = soma_carta1 + pop1;
                soma_carta2 = soma_carta2 + pop2;
            }else
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando População    ****\n\n");
                printf("População %s: %d\n", pais1, pop1);
                printf("População %s: %d\n\n", pais2, pop2);
                printf("*** A Carta %s Venceu !! ***\n", pais2);
                soma_carta1 = soma_carta1 + pop1;
                soma_carta2 = soma_carta2 + pop2;
            }   
              
            break;
        case 2:
            if (area1 == area2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** Empate !! ***\n");
                soma_carta1 = soma_carta1 + area1;
                soma_carta2 = soma_carta2 + area2;
            }else if (area1 > area2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** A Carta %s Venceu !! ***\n", pais1);
                soma_carta1 = soma_carta1 + area1;
                soma_carta2 = soma_carta2 + area2;
            }else
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Área    ****\n\n");
                printf("Área %s: %.2f\n", pais1, area1);
                printf("Área %s: %.2f\n\n", pais2, area2);
                printf("*** A Carta %s Venceu !! ***\n", pais2);
                soma_carta1 = soma_carta1 + area1;
                soma_carta2 = soma_carta2 + area2;
            }   
            break;
        case 3:
            if (pib1 == pib2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando PIB    ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** Empate !! ***\n");
                soma_carta1 = soma_carta1 + pib1;
                soma_carta2 = soma_carta2 + pib2;
            }else if (pib1 > pib2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando PIB   ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** A Carta %s Venceu !! ***\n", pais1);
                soma_carta1 = soma_carta1 + pib1;
                soma_carta2 = soma_carta2 + pib2;
            }else
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando PIB    ****\n\n");
                printf("PIB %s: %.2f\n", pais1, pib1);
                printf("PIB %s: %.2f\n\n", pais2, pib2);
                printf("*** A Carta %s Venceu !! ***\n", pais2);
                soma_carta1 = soma_carta1 + pib1;
                soma_carta2 = soma_carta2 + pib2;
            }
            break;
        case 4:
            if (ptur1 == ptur2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** Empate !! ***\n");
                soma_carta1 = soma_carta1 + ptur1;
                soma_carta2 = soma_carta2 + ptur2;
            }else if (ptur1 > ptur2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** A Carta %s Venceu !! ***\n", pais1);
                soma_carta1 = soma_carta1 + ptur1;
                soma_carta2 = soma_carta2 + ptur2;
            }else
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Nº de Pontos Turisticos    ****\n\n");
                printf("Nº de Pontos Turisticos %s: %d\n", pais1, ptur1);
                printf("Nº de Pontos Turisticos %s: %d\n\n", pais2, ptur2);
                printf("*** A Carta %s Venceu !! ***\n", pais2);
                soma_carta1 = soma_carta1 + ptur1;
                soma_carta2 = soma_carta2 + ptur2;
            }
            break;
        case 5:
            if (den_pop1 == den_pop2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica    ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** Empate !! ***\n");
                soma_carta1 = soma_carta1 + den_pop1;
                soma_carta2 = soma_carta2 + den_pop2;
            }else if (den_pop1 < den_pop2)
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica   ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** A Carta %s Venceu !! ***\n", pais1);
                soma_carta1 = soma_carta1 + den_pop1;
                soma_carta2 = soma_carta2 + den_pop2;
            }else
            {
                printf("*****    Comparando o Segundo Atributo    *****\n\n");
                printf("****    Comparando Densidade Demográfica    ****\n\n");
                printf("Densidade Demográfica %s: %.2f\n", pais1, den_pop1);
                printf("Densidade Demográfica %s: %.2f\n\n", pais2, den_pop2);
                printf("*** A Carta %s Venceu !! ***\n", pais2);
                soma_carta1 = soma_carta1 + den_pop1;
                soma_carta2 = soma_carta2 + den_pop2;
            }
            break;
        
        default:
            printf("Opção inválida !!\n");
            break;
    }
    // comparando a soma dos atributos
if(comparar1 >= 1 && comparar1 <= 5 && comparar2 >= 1 && comparar2 <= 5 && comparar1 != comparar2) // verificando se tem alguma opção invalida
{
printf("\n\n");
printf("---- Soma dos Atributos Escolhidos ----\n\n");
printf("Carta %s: %.2f\n", pais1, soma_carta1);
printf("Carta %s: %.2f\n", pais2, soma_carta2);

if(soma_carta1 == soma_carta2){
    printf("Empate !!");    
}else if(soma_carta1 > soma_carta2){
    printf(" A Carta %s Venceu !!\n", pais1);
}else {
    printf(" A Carta %s Venceu !!\n", pais2);
}
}else{
    printf("****    Entradas Inválidas !!!    ****\n");
}
}

    return 0;
}