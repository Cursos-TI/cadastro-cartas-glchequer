# include <stdio.h>

int main(){

    char estado1[3], estado2[3], codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    long int pop1, pop2, pt1, pt2;
    float area1 , area2, pib1, pib2, dens1,dens2, pc1, pc2, SP1, SP2, soma1, soma2;
    int atributo1, atributo2, resultado;

    soma1 = 0;
    soma2 = 0;

    //dens = densidade populacional
    //SP = Super Trunfo
    //pc = PIB per capita
    //pt = pontos turísticos
    //pop = população


    //Cidade 1
    printf("Digite o estado(sigla) da cidade 1.\n");
    scanf("%s", estado1);

    printf("Digite o código da cidade 1.\n");
    scanf("%s", codigo1);

    printf("Digite o nome da da cidade 1.\n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade 1.\n");
    scanf("%ld", &pop1);

    printf("Digite a área em km² da cidade 1.\n");
    scanf("%f", &area1);

    printf("Digite o PIB em reais da cidade 1.\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1.\n");
    scanf("%ld", &pt1);

    dens1 = (float) pop1/ area1;
    pc1 = (float) pib1/pop1;
    SP1 = (float) pop1 + area1 + pib1 + pt1 + pc1 + (1/dens1);

    //Cidade 2
    printf("Digite o estado(sigla) da cidade 2.\n");
    scanf("%s", estado2);

    printf("Digite o código da cidade 2.\n");
    scanf("%s", codigo2);

    printf("Digite o nome da da cidade 2.\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade 2.\n");
    scanf("%ld", &pop2);

    printf("Digite a área em km² da cidade 2.\n");
    scanf("%f", &area2);

    printf("Digite o PIB em reais da cidade 2.\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2.\n");
    scanf("%ld", &pt2);

    dens2 =(float) pop2 / area2;
    pc2 = (float) pib2 / pop2;
    SP2 = (float) pop2 + area2 + pib2 + pt2 + pc2 + (1/dens2);


//Menu de interação do jogador atributo 1
    printf("Escolha o atributo 1 da carta você deseja comparar.\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Demográfica\n");
    printf("Atributo a ser comparado: \n");
    scanf("%d", &atributo1);

    

//Menu de interação do jogador atributo 2
    printf("Escolha o atributo 2 da carta você deseja comparar.\n");
    printf("O atributo 2 deve ser diferente do primeiro.\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Demográfica\n");
    printf("Atributo a ser comparado: \n");
    scanf("%d", &atributo2);

    if(atributo1 != atributo2){
        printf("Os atributos são diferentes, a comparação será realizada!\n");
    }else{
        printf("Os atributos são iguais, a comparação não será realizada\n");
        return 0;
    }

    switch (atributo1)
    {
    case 1:
        printf("O atributo comparado será: População \n");
        printf("A cidade de %s tem %ld habitantes.\n", cidade1, pop1);
        printf("A cidade de %s tem %ld habitantes.\n", cidade2, pop2);

        soma1 = soma1 + pop1;
        soma2 = soma2 + pop2;

        if(pop1 > pop2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pop1 == pop2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 2:
        printf("O atributo comparado será: Área\n ");
        printf("A cidade de %s tem %f Km².\n", cidade1, area1);
        printf("A cidade de %s tem %f Km².\n", cidade2, area2);

        
        soma1 = soma1 + area1;
        soma2 = soma2 + area2;

        if(area1 > area2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(area1 == area2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 3:
        printf("O atributo comparado será: PIB\n ");
        printf("A cidade de %s tem %f Reais de PIB.\n", cidade1, pib1);
        printf("A cidade de %s tem %f Reais de PIB.\n", cidade2, pib2);

        
        soma1 = soma1 + pib1;
        soma2 = soma2 + pib2;

        if(pib1 > pib2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pib1 == pib2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 4:
        printf("O atributo comparado será: Pontos Turísticos\n ");
        printf("A cidade de %s tem %ld Pontos Turísticos.\n", cidade1, pt1);
        printf("A cidade de %s tem %ld Pontos Turísticos.\n", cidade2, pt2);

        
        soma1 = soma1 + pt1;
        soma2 = soma2 + pt2;

        if(pt1 > pt2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pt1 == pt2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 5:
        printf("O atributo comparado será: Densidade Demográfica\n ");
        printf("A cidade de %s tem %.2f habitantes por km².\n", cidade1, dens1);
        printf("A cidade de %s tem %.2f habitantes por Km².\n", cidade2, dens2);

        
        soma1 = soma1 + dens1;
        soma2 = soma2 + dens2;

        if(dens1 < dens2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(dens1 == dens2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;
    
    default:
        printf("A opção escolhida é inválida");
        break;
    }

    switch (atributo2)
    {
    case 1:
        printf("O atributo comparado será: População \n");
        printf("A cidade de %s tem %ld habitantes.\n", cidade1, pop1);
        printf("A cidade de %s tem %ld habitantes.\n", cidade2, pop2);

        soma1 = soma1 + pop1;
        soma2 = soma2 + pop2;

        if(pop1 > pop2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pop1 == pop2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 2:
        printf("O atributo comparado será: Área\n ");
        printf("A cidade de %s tem %f Km².\n", cidade1, area1);
        printf("A cidade de %s tem %f Km².\n", cidade2, area2);

        
        soma1 = soma1 + area1;
        soma2 = soma2 + area2;

        if(area1 > area2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(area1 == area2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 3:
        printf("O atributo comparado será: PIB\n ");
        printf("A cidade de %s tem %f Reais de PIB.\n", cidade1, pib1);
        printf("A cidade de %s tem %f Reais de PIB.\n", cidade2, pib2);

        
        soma1 = soma1 + pib1;
        soma2 = soma2 + pib2;

        if(pib1 > pib2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pib1 == pib2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 4:
        printf("O atributo comparado será: Pontos Turísticos\n ");
        printf("A cidade de %s tem %ld Pontos Turísticos.\n", cidade1, pt1);
        printf("A cidade de %s tem %ld Pontos Turísticos.\n", cidade2, pt2);

        
        soma1 = soma1 + pt1;
        soma2 = soma2 + pt2;

        if(pt1 > pt2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(pt1 == pt2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;

        case 5:
        printf("O atributo comparado será: Densidade Demográfica\n ");
        printf("A cidade de %s tem %.2f habitantes por km².\n", cidade1, dens1);
        printf("A cidade de %s tem %.2f habitantes por Km².\n", cidade2, dens2);

        
        soma1 = soma1 + dens1;
        soma2 = soma2 + dens2;

        if(dens1 < dens2){
            printf("A cidade de %s venceu!", cidade1);
        } else if(dens1 == dens2){
            printf("As cartas empataram!");
        }else{
            printf("A cidade de %s venceu!", cidade2);
        }
        break;
    
    default:
        printf("A opção escolhida é inválida");
        break;
    }

    if(soma1 > soma2){
        print("A carta 1 venceu!");
    }else if(soma2 > soma1){
        printf("A carta 2 venceu!");
    }else{
        printf("As cartas empataram");
    }

    printf("A carta 1 fez : %.2f pontos", soma1);
    printf("A carta 2 fez : %.2f pontos", soma2);
    
    return 0;

}
