#include <stdio.h>
#include <stdlib.h>

void main(){

    int cosso, sosso, ling, arroz, farof, molho, pao, refri, cerva, agua, total, adult, cria, bebem, tipo,perg;
    char titulo[61];
    system("color 30");

    do{
    printf("\t\t\t\t\t\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t+--------------+CHURRASCOMETRO+---------------+\n");
    printf("\t\t\t\t\t\t\t\t+---------------------------------------------+\n\n");
    printf("\t\t\t\t\t\t\t\tNome do dono do churrasco?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
    scanf("%s", &titulo);
    printf("\n");
    while((tipo != 1) && (tipo != 2)){
    printf("\t\t\t\t\t\t\t\tSera ALMOCO [digite 1] ou EVENTO [digite 2]?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
    scanf("%d", &tipo);
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\tQual o total de convidados?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
    scanf("%d", &total);
    printf("\n");
    printf("\t\t\t\t\t\t\t\tQual a quantidade de adultos?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
    scanf("%d", &adult);
    printf("\n");
    printf("\t\t\t\t\t\t\t\tQual a quantidade de criancas?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
    scanf("%d", &cria);
    printf("\n");
    printf("\t\t\t\t\t\t\t\tQuantos adultos gostam de cerveja?\n");
    printf("\t\t\t\t\t\t\t\tDigite aqui >>");
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

            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|Dono do Churrasco: %s\n",titulo);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE PESSOAS: %d\n",total);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE ADULTOS: %d\n",adult);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE CRIANCAS: %d\n",cria);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE LINGUICA(g): %d\n",qling);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE CARNE SEM OSSO(g): %d\n",qsosso);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE CARNE COM OSSO(g): %d\n",qcosso);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE ARROZ(g): %d\n",qarroz);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE FAROFA(g): %d\n",qfarof);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE MOLHO(ml): %d\n",qmolho);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE PAO DE ALHO(uni): %d\n",qpao);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE REFRIGERANTE(ml): %d\n",qrefri);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE CERVEJA(lata): %d\n",qcerva);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t|QUANTIDADE DE AGUA(ml): %d\n",qagua);
            printf("\t\t\t\t\t\t\t\t|---------------------------------------------|\n");
            printf("\n");
            printf("\t\t\t\t\t\t\t\tSe quiser refazer, digite 1[SIM] OU 2[NAO].");
            printf("\t\t\t\t\t\t\t\t\t\t\t\tDigite aqui >>");
            scanf("%d", &perg);
            system("cls");
    }while( perg == 1);

return 0;
}