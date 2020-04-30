#include <stdio.h>
#include <stdlib.h>

void main(){

    int cosso, sosso, ling, arroz, farof, molho, pao, refri, cerva, agua, total, adult, cria, bebem, tipo,perg;
    char titulo[61];

    do{
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t+--------------+CHURRASCOMETRO+---------------+\n");
    printf("\t\t\t+---------------------------------------------+\n\n");
    printf("Nome do dono do churrasco?\n");
    printf("Digite aqui >>");
    scanf("%s", &titulo);
    printf("\n");
    while((tipo != 1) && (tipo != 2)){
    printf("Sera ALMOCO [digite 1] ou EVENTO [digite 2]?\n");
    printf("Digite aqui >>");
    scanf("%d", &tipo);
    }
    printf("\n");
    printf("Qual o total de convidados?\n");
    printf("Digite aqui >>");
    scanf("%d", &total);
    printf("\n");
    printf("Qual a quantidade de adultos?\n");
    printf("Digite aqui >>");
    scanf("%d", &adult);
    printf("\n");
    printf("Qual a quantidade de criancas?\n");
    printf("Digite aqui >>");
    scanf("%d", &cria);
    printf("\n");
    printf("Quantos adultos gostam de cerveja?\n");
    printf("Digite aqui >>");
    scanf("%d", &bebem);
    printf("\n");
    if (tipo == 1){
        ling = 40;
        sosso = 160;
        cosso = 200;
        arroz = 100;
        molho = 400;
        farof = 100;
        pao = total;
        refri = 1000;
        cerva = 4;
        agua = 500;}
        else
            ling = 50;
            sosso = 450;
            cosso = 580;
            arroz = 200;
            molho = 800;
            farof = 200;
            pao = 2 * total;
            refri = 2000;
            cerva = 8;
            agua = 1000;

    int qsosso = adult*sosso + cria*(sosso/2);
    int qcosso = adult*cosso + (cria*(cosso/2));
    int qling = adult*ling + cria*(ling/2);
    int qarroz = adult*arroz + (cria*(arroz/2));
    int qfarof =  adult*farof + (cria*(farof/2));
    int qmolho = adult*molho + (cria*(molho/2));
    int qpao = total;
    int qrefri = adult*refri + (cria*(refri/2));
    int qcerva = bebem * cerva;
    int qagua = adult*agua + (cria*(agua/2));

            printf("|---------------------------------------------|\n");
            printf("|Dono do Churrasco: %s\n",titulo);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE PESSOAS: %d\n",total);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE ADULTOS: %d\n",adult);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE CRIANCAS: %d\n",cria);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE LINGUICA(g): %d\n",qling);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE CARNE SEM OSSO(g): %d\n",qsosso);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE CARNE COM OSSO(g): %d\n",qcosso);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE ARROZ(g): %d\n",qarroz);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE FAROFA(g): %d\n",qfarof);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE MOLHO(ml): %d\n",qmolho);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE PAO DE ALHO(uni): %d\n",qpao);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE REFRIGERANTE(ml): %d\n",qrefri);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE CERVEJA(lata): %d\n",qcerva);
            printf("|---------------------------------------------|\n");
            printf("|QUANTIDADE DE AGUA(ml): %d\n",qagua);
            printf("|---------------------------------------------|\n");
            printf("\n");
            printf("SE QUISER REFAZER, DIGITE 1[SIM] OU 2[NAO].");
            scanf("%d",&perg);
            system("cls");

    }while( perg == 1);


return 0;
}
