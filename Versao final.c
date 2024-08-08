#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TEXTO_verde_CLARO "\x1b[32m"
#define TEXTO_VERDE "\x1b[32;1m"
#define COLOR_RESET "\033[0m"
#define TEXTO_AMARELO_CLARO "\x1b[33;1m"
#define TEXTO_VERMELHO "\x1b[31;1m"
#define TEXTO_AZUL "\x1b[34;1m"


int main()
{

    //DECLARAÇAO DE VARIAVEIS
    int cardi,linha1,aux1,reset, mjogo,linhas1,i,j,x,escolha1, escolha2, linhas, lim_inf_lin1, lim_inf_col1,lim_inf_lin2, lim_inf_col2, largura, altura;
    int lim_sup_col1, lim_sup_lin1, lim_sup_col2, lim_sup_lin2, aux, pares=0, cont, cards[20]={0};

    char tela1[32][130]= {TEXTO_AMARELO_CLARO"\t v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_v_",
                          "\t|___________________________________________________________________________________________________________________|",
                          "\t|       _______________       _______________       _______________       _______________       _______________     |",
                          "\t|    1.|               |   2.|               |   3.|               |   4.|               |   5.|               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |_______________|     |_______________|     |_______________|     |_______________|     |_______________|    |",
                          "\t|       _______________       _______________       _______________       _______________       _______________     |",
                          "\t|    6.|               |   7.|               |   8.|               |   9.|               |  10.|               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |_______________|     |_______________|     |_______________|     |_______________|     |_______________|    |",
                          "\t|       _______________       _______________       _______________       _______________       _______________     |",
                          "\t|   11.|               |  12.|               |  13.|               |  14.|               |  15.|               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |_______________|     |_______________|     |_______________|     |_______________|     |_______________|    |",
                          "\t|       _______________       _______________       _______________       _______________       _______________     |",
                          "\t|   16.|               |  17.|               |  18.|               |  19.|               |  20.|               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |               |     |               |     |               |     |               |     |               |    |",
                          "\t|      |_______________|     |_______________|     |_______________|     |_______________|     |_______________|    |",
                          "\t|                                                                                                                   |",
                          "\t|                                               ||ANIMAL MENORY ASCII||                                             |",
                          "\t|___________________________________________________________________________________________________________________|"
                         };
    COLOR_RESET;

    char cao[3] [11]= { "(___()'`; ",
                        " /,  /`   ",
                        "//-//     "
                      };

    char rato[4] [11]= { ") _       ",
                         "(_( ))    ",
                         "(7__'`.   ",
                         "`  ``     "
                       };
    char macaco[3] [11]= { "   __     ",
                           " c(..)o   ",
                           "  (-)     "
                         };

    char ave[3] [11]= { "   |/     ",
                        "   (o>    ",
                        "   (()    "
                      };

    char coruja[3] [11]= { " {o,o}    ",
                           "./)_)     ",
                           " ''''     "
                         };


    char porco[3] [11]= { "  ^..^    ",
                          "  (oo)    ",
                          " ''  ''   "
                        };

    char pato[3] [11]= { ">(')____, ",
                         " (` =~~/  ",
                         "    ''    "
                       };

    char peixe[3] [11]= {"   ,-,    ",
                         "  ('_)<   ",
                         "   `-`    "
                        };

    char castor[3] [11]= { "_.---.    ",
                           "c ' Y'`.  ",
                           " |_ w_/   "
                         };

    char vaca[3] [11]= {" _(~)_    ",
                        " )''(     ",
                        "(@__@)    "
                       };


    printf(TEXTO_verde_CLARO"BEM VINDO AO JOGO, DIVIRTA-SE ;D\n\n"COLOR_RESET);

    printf("\n\n\n\n\n\n");
    char nomegame[10][160]= {TEXTO_AMARELO_CLARO"\t _______  __    _  ___  __   __  _______  ___        __   __  _______  __   __  _______  ______    __   __    _______  _______  _______  ___   ___ ",
                             "\t|   _   ||  |  | ||   ||  |_|  ||   _   ||   |      |  |_|  ||       ||  |_|  ||       ||    _ |  |  | |  |  |   _   ||       ||    __| |   | |   |",
                             "\t|  |_|  ||   |_| ||   ||       ||  |_|  ||   |      |       ||    ___||       ||   _   ||   | ||  |  |_|  |  |  |_|  ||  _____||    |    | |   | |",
                             "\t|       ||       ||   ||       ||       ||   |      |       ||   |___ |       ||  | |  ||   |_||_ |       |  |       || |_____ |    |    | |   | |",
                             "\t|       ||  _    ||   ||       ||       ||   |___   |       ||    ___||       ||  |_|  ||    __  ||_     _|  |       ||_____  ||    |    | |   | |",
                             "\t|   _   || | |   ||   || ||_|| ||   _   ||       |  | ||_|| ||   |___ | ||_|| ||       ||   |  | |  |   |    |   _   | _____| ||    |__  | |   | |",
                             "\t|__| |__||_|  |__||___||_|   |_||__| |__||_______|  |_|   |_||_______||_|   |_||_______||___|  |_|  |___|    |__| |__||_______||_______||___| |___|"
                COLOR_RESET };
        srand(time(NULL));       // pseudo-random
        for (i = 0; i < 10; i++) // gera as primeiras 10 cartas
        {
            cards[i] = 1 + (rand() % 10);
        }
        for (i = 0; i < 10; i++) // for aninhado pra numeros repetidos
        {
            for (j = 0; j < 10; j++)
            {
                if (i != j)
                {

                    while (cards[i] == cards[j])
                    {
                        cards[i] = 1 + (rand() % 10);
                    }
                    for (x = 0; x < 10; x++)
                    {
                        if (i != x)
                        {
                            while (cards[i] == cards[x])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                        }
                    }
                }
            }
        }
        for (i = 10; i < 20; i++) // gera as outras 10 cartas para formar par
        {
            cards[i] = 1 + (rand() % 10);
        }
        for (i = 10; i < 20; i++) // for aninhado pra numeros repetidos
        {
            for (j = 10; j < 20; j++)
            {
                if (i != j)
                {
                    while (cards[i] == cards[j])
                    {
                        cards[i] = 1 + (rand() % 10);
                    }
                    for (x = 10; x < 20; x++)
                    {
                        if (i != x)
                        {
                            while (cards[i] == cards[x])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                        }
                    }
                }
            }
        }

    for (linha1=0; linha1<10; linha1++)
    {
        printf("%s\n", nomegame[linha1]);
    } //for do nome do jogo
    printf(TEXTO_verde_CLARO"\n\n");

    printf("Deseja jogar em dupla ou solo?|| Para sair digite (0)||| Para solo digite (1)|| Para dupla digite (2) ");
    scanf("%d",&mjogo);
    scanf("%*[^\n]");
    scanf("%*c");

    while(mjogo<0 || mjogo>2)
    {
        
        printf("Deseja jogar em dupla ou solo?|| Para sair digite (0)||| Para solo digite (1)|| Para dupla digite (2) ");
        scanf("%d",&mjogo);
        scanf("%*[^\n]");
        scanf("%*c");
    }

    if(mjogo==1)
    {

        do
        {
            system("clear||cls");
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }//for da tebela
            printf("\n\n");

            printf(TEXTO_verde_CLARO"Escolha um card! 0 para sair: ");
            scanf("%d%*c",&escolha1);
            while(escolha1 < 0 || escolha1 >20)
            {
                printf(TEXTO_VERMELHO"esse card nao existe!\n"COLOR_RESET);
                printf(TEXTO_verde_CLARO"Escolha um card! 0 para sair: ");
                scanf("%d%*c",&escolha1);
			
			
			}

            if (escolha1==0) break; // if para saida do jogo

         
        

            switch (escolha1)
            {
            case  1:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=13;
                lim_sup_col1=22; //  switch cases das cordenas da primera escolha do cards cards
                break;
            case 2:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 3:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 4:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 5:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 6:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 7:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 8:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 9:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=79;
                lim_sup_col1=87;
                break;
            case 10:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 11:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 12:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 13:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 14:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 15:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 16:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 17:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=35;
                lim_sup_col1=45;
                break;
            case 18:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 19:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 20:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            }
            for ( altura=0, cont=lim_inf_lin1; cont<lim_sup_lin1; cont++, altura++)
            {
                for (aux=lim_inf_col1, largura=0; aux<lim_sup_col1; aux++, largura++) //for do cards
                {
                    switch (cards[escolha1-1])
                    {
                    case 1:
                        tela1[cont][aux]=cao[altura][largura];  //switch case dos cards
                        break;
                    case 2:
                        tela1[cont][aux]=rato[altura][largura];
                        break;
                    case 3:
                        tela1[cont][aux]=macaco[altura][largura];
                        break;
                    case 4:
                        tela1[cont][aux]=ave[altura][largura];
                        break;
                    case 5:
                        tela1[cont][aux]=coruja[altura][largura];
                        break;
                    case 6:
                        tela1[cont][aux]=porco[altura][largura];
                        break;
                    case 7:
                        tela1[cont][aux]=pato[altura][largura];
                        break;
                    case 8:
                        tela1[cont][aux]=peixe[altura][largura];
                        break;
                    case 9:
                        tela1[cont][aux]=castor[altura][largura];
                        break;
                    case 10:
                        tela1[cont][aux]=vaca[altura][largura];
                        break;
                    }
                }
            }
            system("clear||cls"); //limpar a tela1
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }
            printf("\n\n");

            printf(TEXTO_verde_CLARO"Escolha outro card! 0 para sair: "); // for da tabela
            scanf("%d%*c",&escolha2);
            while(escolha2 < 0 || escolha2 >20)
            {
                printf(TEXTO_VERMELHO"Esse card nao existe!\n"COLOR_RESET);
                printf(TEXTO_verde_CLARO"Escolha outro card! 0 para sair: "); // for da tabela
                scanf("%d%*c",&escolha2);
            }

            if(escolha2 == escolha1)
            {
                while(escolha2 == escolha1)
                {
                    printf(TEXTO_VERMELHO"Opa! Card ja escolhido: "COLOR_RESET);
                    scanf("%d",&escolha2);
                    scanf("%*[^\n]");
                    scanf("%*c");
               
			    if (escolha2==0) break;
			   
			    }
            }
                

            switch (escolha2)
            {
                break;
            case 1:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=13;
                lim_sup_col2=22; //  switch cases das cordenas da segunda escolha do cards cards
                break;
            case 2:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 3:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 4:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=79;
                lim_sup_col2=89;
                break;
            case 5:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 6:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 7:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 8:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 9:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 10:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 11:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 12:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 13:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 14:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 15:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 16:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 17:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 18:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 19:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 20:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=101;
                lim_sup_col2=110;
            }
            for ( altura=0, cont=lim_inf_lin2; cont<lim_sup_lin2; cont++, altura++)
            {
                for (aux=lim_inf_col2, largura=0; aux<lim_sup_col2; aux++, largura++) //  switch cases dos cards
                {
                    switch (cards[escolha2-1])
                    {
                    case 1:
                        tela1[cont] [aux]=cao[altura][largura];
                        break;
                    case 2:
                        tela1[cont] [aux]=rato[altura][largura];
                        break;
                    case 3:
                        tela1[cont] [aux]=macaco[altura][largura];
                        break;
                    case 4:
                        tela1[cont] [aux]=ave[altura][largura];
                        break;
                    case 5:
                        tela1[cont] [aux]=coruja[altura][largura];
                        break;
                    case 6:
                        tela1[cont] [aux]=porco[altura][largura];
                        break;
                    case 7:
                        tela1[cont] [aux]=pato[altura][largura];
                        break;
                    case 8:
                        tela1[cont] [aux]=peixe[altura][largura];
                        break;
                    case 9:
                        tela1[cont] [aux]=castor[altura][largura];
                        break;
                    case 10:
                        tela1[cont] [aux]=vaca[altura][largura];
                        break;

                    }
                }
            }
            system("clear||cls");
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }


            if (cards[escolha1-1]==cards[escolha2-1])
            {
                printf(TEXTO_verde_CLARO"\nParabens, voce achou um par...\n");
                pares++;
            }

            else
            {
                printf(TEXTO_VERMELHO"\nNão sao iguais, mas continue tentando...\n"COLOR_RESET);
                for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                {
                    for (aux=lim_inf_col1, largura=0; aux<lim_sup_col1; aux++, largura++)
                    {
                        switch (cards[escolha1-1])
                        {

                        case 1:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 2:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 3:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 4:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 5:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 6:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 7:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 8:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 9:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 10:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        }
                    }
                }
                for ( altura=0; lim_inf_lin2<lim_sup_lin2; lim_inf_lin2++, altura++)
                {
                    for (aux=lim_inf_col2, largura=0; aux<lim_sup_col2; aux++, largura++)
                    {
                        switch (cards[escolha2-1])
                        {

                        case 1:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 2:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 3:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 4:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 5:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 6:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 7:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 8:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 9:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 10:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        }
                    }
                }
            }

            if (pares==10)
            {
                pares=0;
                printf(TEXTO_verde_CLARO"\nParabéns, voce achou todos os pares!!!!\n");

                printf("\n\n");
                printf(TEXTO_verde_CLARO"\nPronto pra proxima ? 0-Sair, qualquer coisa pra continuar\n");
                scanf("%d%*c",&reset);

                if (reset==0)
                {

                    printf("OK, ATE LOGO");
                    return 0;
                }

                else
                {
                    //1
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //2
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //3
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //4
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=80;
                    lim_sup_col1=90;


                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //5
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //6
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1] = ' ';
                        }
                    }
                    //7
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //8
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //9
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=79;
                    lim_sup_col1=87;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }

                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=101;
                    lim_sup_col1=110;
                    //10
                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //11
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //12
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //13
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {

                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //14
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=80;
                    lim_sup_col1=90;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //15
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //16
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //17
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=35;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //18
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //19
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=80;
                    lim_sup_col1=90;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //20
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                }

                srand(time(NULL));       // gerar numeros aleatorios
                for (i = 0; i < 10; i++) // gera as primeiras 10 cartas
                {
                    cards[i] = 1 + (rand() % 10);
                }
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        if (i != j)
                        {

                            while (cards[i] == cards[j])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                            for (x = 0; x < 10; x++)
                            {
                                if (i != x)
                                {
                                    while (cards[i] == cards[x])
                                    {
                                        cards[i] = 1 + (rand() % 10);
                                    }
                                }
                            }
                        }
                    }
                }
                for (i = 10; i < 20; i++) // gera as outras 10 cartas para formar par
                {
                    cards[i] = 1 + (rand() % 10);
                }
                for (i = 10; i < 20; i++)
                {
                    for (j = 10; j < 20; j++)
                    {
                        if (i != j)
                        {
                            while (cards[i] == cards[j])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                            for (x = 10; x < 20; x++)
                            {
                                if (i != x)
                                {
                                    while (cards[i] == cards[x])
                                    {
                                        cards[i] = 1 + (rand() % 10);
                                    }
                                }
                            }
                        }
                    }
                }

            }


            printf(TEXTO_verde_CLARO"Pressione <ENTER> pra continuar...\n");
            scanf("%*c");
        }
        while (escolha1);
        printf("Obrigado por jogar.\n");
        printf("\nAte logo...\n"COLOR_RESET);
    }

    else if(mjogo==2)
    {

            int TetstAlternar=0, pares1=0,pares2=0;
            char nome1[50], nome2[50];

        printf("\n\n");
        printf(TEXTO_AZUL"Digite o nome do jogador 1: \n");
        scanf("%[^\n]s", nome1);
        scanf("[^\n]");
        scanf("%*c");

        printf("\nDigite o nome do jogador 2: \n");
        scanf("%[^\n]s", nome2);
        scanf("[^\n]");
        scanf("%*c");

            do{
            system("clear||cls");
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }//for da tebela
             printf("\n\n"COLOR_RESET);
            printf("OLA, %s e %s\n",nome1,nome2);
            printf("\n\n");

            if(TetstAlternar%2==0){
            printf(TEXTO_verde_CLARO"%s, escolha um card! 0 para sair: ", nome1);
            scanf("%d%*c",&escolha1);
            while(escolha1 < 0 || escolha1 >20)
            {
                printf(TEXTO_VERMELHO"Esse card nao existe!\n"COLOR_RESET);
                printf(TEXTO_verde_CLARO"Escolha um card! Ou 0 para sair: ");
                scanf("%d%*c",&escolha1);
            }
            if (escolha1==0) break; // if para saida do jogo
            }



            else if(TetstAlternar%2!=0){
            printf(TEXTO_verde_CLARO"%s, escolha um card! 0 para sair: ", nome2);
            scanf("%d%*c",&escolha1);
            while(escolha1 < 0 || escolha1 >20)
            {
                printf(TEXTO_VERMELHO"Esse card nao existe !\n"COLOR_RESET);
                printf(TEXTO_verde_CLARO"Escolha um card! Ou 0 para sair: ");
                scanf("%d%*c",&escolha1);
            }
            if (escolha1==0) break; // if para saida do jogo
            
			
			}
        
             
        
        
            switch (escolha1)
            {
            case  1:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=13;
                lim_sup_col1=22; //  switch cases das cordenas da primera escolha do cards cards
                break;
            case 2:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 3:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 4:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 5:
                lim_inf_lin1=4;
                lim_sup_lin1=7;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 6:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 7:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 8:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 9:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=79;
                lim_sup_col1=87;
                break;
            case 10:
                lim_inf_lin1=10;
                lim_sup_lin1=13;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 11:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 12:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=36;
                lim_sup_col1=45;
                break;
            case 13:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 14:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 15:
                lim_inf_lin1=16;
                lim_sup_lin1=19;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            case 16:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=13;
                lim_sup_col1=22;
                break;
            case 17:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=35;
                lim_sup_col1=45;
                break;
            case 18:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=57;
                lim_sup_col1=66;
                break;
            case 19:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=80;
                lim_sup_col1=90;
                break;
            case 20:
                lim_inf_lin1=22;
                lim_sup_lin1=25;
                lim_inf_col1=101;
                lim_sup_col1=110;
                break;
            }
            for ( altura=0, cont=lim_inf_lin1; cont<lim_sup_lin1; cont++, altura++)
            {
                for (aux=lim_inf_col1, largura=0; aux<lim_sup_col1; aux++, largura++) //for do cards
                {
                    switch (cards[escolha1-1])
                    {
                    case 1:
                        tela1[cont][aux]=cao[altura][largura];  //switch case dos cards
                        break;
                    case 2:
                        tela1[cont][aux]=rato[altura][largura];
                        break;
                    case 3:
                        tela1[cont][aux]=macaco[altura][largura];
                        break;
                    case 4:
                        tela1[cont][aux]=ave[altura][largura];
                        break;
                    case 5:
                        tela1[cont][aux]=coruja[altura][largura];
                        break;
                    case 6:
                        tela1[cont][aux]=porco[altura][largura];
                        break;
                    case 7:
                        tela1[cont][aux]=pato[altura][largura];
                        break;
                    case 8:
                        tela1[cont][aux]=peixe[altura][largura];
                        break;
                    case 9:
                        tela1[cont][aux]=castor[altura][largura];
                        break;
                    case 10:
                        tela1[cont][aux]=vaca[altura][largura];
                        break;
                    }
                }
            }
            system("clear||cls"); //limpar a tela1
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }
            printf("\n\n");

            if(TetstAlternar%2==0){
            printf(TEXTO_verde_CLARO"%s, escolha um card! 0 para sair: ", nome1);
            scanf("%d%*c",&escolha2);
            while(escolha2 < 0 || escolha2 >20){
                printf(TEXTO_VERMELHO"Esse card nao existe !\n");
                printf(TEXTO_verde_CLARO"Escolha um card! 0 para sair: ");
                scanf("%d%*c",&escolha2);
            }
            while(escolha2 == escolha1){
                    printf("Opa! Card ja escolhido: ");
                    scanf("%d",&escolha2);
                    scanf("%*[^\n]");
                    scanf("%*c");
                }
            if (escolha2==0) break; // if para saida do jogo

            }
        
            
            else if(TetstAlternar%2!=0){
           printf(TEXTO_verde_CLARO"%s, escolha um card! 0 para sair: ", nome2);
            scanf("%d%*c",&escolha2);
            while(escolha2 < 0 || escolha2 >20){
                printf(TEXTO_VERMELHO"Esse card nao existe!\n");
                printf(TEXTO_verde_CLARO"Escolha um card! 0 para sair: ");
                scanf("%d%*c",&escolha2);
            
			
			
			
			}
            while(escolha2 == escolha1){
                    printf(TEXTO_VERMELHO"Opa! Card ja escolhido: "COLOR_RESET);
                    scanf("%d",&escolha2);
                    scanf("%*[^\n]");
                    scanf("%*c");
                
				}
				
				
				
				
            if (escolha2==0) break; // if para saida do jogo
            }

        


            switch (escolha2)
            {
                break;
            case 1:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=13;
                lim_sup_col2=22; //  switch cases das cordenas da segunda escolha do cards cards
                break;
            case 2:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 3:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 4:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=79;
                lim_sup_col2=89;
                break;
            case 5:
                lim_inf_lin2=4;
                lim_sup_lin2=7;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 6:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 7:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 8:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 9:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 10:
                lim_inf_lin2=10;
                lim_sup_lin2=13;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 11:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 12:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 13:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 14:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 15:
                lim_inf_lin2=16;
                lim_sup_lin2=19;
                lim_inf_col2=101;
                lim_sup_col2=110;
                break;
            case 16:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=13;
                lim_sup_col2=22;
                break;
            case 17:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=36;
                lim_sup_col2=45;
                break;
            case 18:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=57;
                lim_sup_col2=66;
                break;
            case 19:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=80;
                lim_sup_col2=90;
                break;
            case 20:
                lim_inf_lin2=22;
                lim_sup_lin2=25;
                lim_inf_col2=101;
                lim_sup_col2=110;
            }
            for ( altura=0, cont=lim_inf_lin2; cont<lim_sup_lin2; cont++, altura++)
            {
                for (aux=lim_inf_col2, largura=0; aux<lim_sup_col2; aux++, largura++) //  switch cases dos cards
                {
                    switch (cards[escolha2-1])
                    {
                    case 1:
                        tela1[cont] [aux]=cao[altura][largura];
                        break;
                    case 2:
                        tela1[cont] [aux]=rato[altura][largura];
                        break;
                    case 3:
                        tela1[cont] [aux]=macaco[altura][largura];
                        break;
                    case 4:
                        tela1[cont] [aux]=ave[altura][largura];
                        break;
                    case 5:
                        tela1[cont] [aux]=coruja[altura][largura];
                        break;
                    case 6:
                        tela1[cont] [aux]=porco[altura][largura];
                        break;
                    case 7:
                        tela1[cont] [aux]=pato[altura][largura];
                        break;
                    case 8:
                        tela1[cont] [aux]=peixe[altura][largura];
                        break;
                    case 9:
                        tela1[cont] [aux]=castor[altura][largura];
                        break;
                    case 10:
                        tela1[cont] [aux]=vaca[altura][largura];
                        break;

                    }
                }
            }
            system("clear||cls");
            for (linhas=0; linhas<32; linhas++)
            {
                printf("%s\n", tela1[linhas]);
            }


            if (cards[escolha1-1]==cards[escolha2-1]&&TetstAlternar%2==0)
            {
                printf(TEXTO_verde_CLARO"\nParabens, voce achou um par...\n");
                pares1++;
            }
            else if(cards[escolha1-1]==cards[escolha2-1]&&TetstAlternar%2==1){
                printf(TEXTO_verde_CLARO"\nParabens, voce achou um par...\n");
                pares2++;
            }

            if(cards[escolha1-1]!=cards[escolha2-1])
            {
                TetstAlternar = TetstAlternar + 1;
                printf(TEXTO_VERMELHO"\nNão sao iguais, mas continue tentando...\n"COLOR_RESET);
                for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                {
                    for (aux=lim_inf_col1, largura=0; aux<lim_sup_col1; aux++, largura++)
                    {
                        switch (cards[escolha1-1])
                        {

                        case 1:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 2:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 3:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 4:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 5:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 6:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 7:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 8:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 9:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        case 10:
                            tela1[lim_inf_lin1][aux]=' ';
                            break;
                        }
                    }
                }
                for ( altura=0; lim_inf_lin2<lim_sup_lin2; lim_inf_lin2++, altura++)
                {
                    for (aux=lim_inf_col2, largura=0; aux<lim_sup_col2; aux++, largura++)
                    {
                        switch (cards[escolha2-1])
                        {

                        case 1:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 2:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 3:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 4:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 5:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 6:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 7:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 8:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 9:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        case 10:
                            tela1[lim_inf_lin2][aux]=' ';
                            break;
                        }
                    }
                }
            }

            if (pares1+pares2==10)
            {
               
                printf(TEXTO_verde_CLARO"\nParabéns, voce achou todos os pares!!!!\n");
                
                if (pares1>pares2){
				
                printf ("\nParabens, %s voce venceu!!!",nome1);
            }
				else{
				
                printf ("\nParabens, %s vc venceu!!",nome2);
}
                printf("\n\n");
                printf(TEXTO_verde_CLARO"\nPronto pra proxima ? (0) Para Sair, qualquer coisa pra continuar\n");
                scanf("%d%*c",&reset);

               if (pares1 ==pares2) 
                printf("\nVoces empataram");
				
				if (reset==0)
                {

                    printf("OK, ATE LOGO");
                    break;
                }

                else
                {
                    //1
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //2
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //3
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //4
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=80;
                    lim_sup_col1=90;


                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //5
                    lim_inf_lin1=4;
                    lim_sup_lin1=7;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //6
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1] = ' ';
                        }
                    }
                    //7
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //8
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //9
                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=79;
                    lim_sup_col1=87;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }

                    lim_inf_lin1=10;
                    lim_sup_lin1=13;
                    lim_inf_col1=101;
                    lim_sup_col1=110;
                    //10
                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //11
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //12
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=36;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //13
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {

                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //14
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=80;
                    lim_sup_col1=90;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //15
                    lim_inf_lin1=16;
                    lim_sup_lin1=19;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //16
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=13;
                    lim_sup_col1=22;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //17
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=35;
                    lim_sup_col1=45;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //18
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=57;
                    lim_sup_col1=66;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //19
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=80;
                    lim_sup_col1=90;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                    //20
                    lim_inf_lin1=22;
                    lim_sup_lin1=25;
                    lim_inf_col1=101;
                    lim_sup_col1=110;

                    for ( altura=0; lim_inf_lin1<lim_sup_lin1; lim_inf_lin1++, altura++)
                    {
                        for (aux1=lim_inf_col1, largura=0; aux1<lim_sup_col1; aux1++, largura++)
                        {
                            tela1[lim_inf_lin1][aux1]=' ';
                        }
                    }
                }

                srand(time(NULL));       // gerar numeros aleatorios
                for (i = 0; i < 10; i++) // gera as primeiras 10 cartas
                {
                    cards[i] = 1 + (rand() % 10);
                }
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        if (i != j)
                        {

                            while (cards[i] == cards[j])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                            for (x = 0; x < 10; x++)
                            {
                                if (i != x)
                                {
                                    while (cards[i] == cards[x])
                                    {
                                        cards[i] = 1 + (rand() % 10);
                                    }
                                }
                            }
                        }
                    }
                }
                for (i = 10; i < 20; i++) // gera as outras 10 cartas para formar par
                {
                    cards[i] = 1 + (rand() % 10);
                }
                for (i = 10; i < 20; i++)
                {
                    for (j = 10; j < 20; j++)
                    {
                        if (i != j)
                        {
                            while (cards[i] == cards[j])
                            {
                                cards[i] = 1 + (rand() % 10);
                            }
                            for (x = 10; x < 20; x++)
                            {
                                if (i != x)
                                {
                                    while (cards[i] == cards[x])
                                    {
                                        cards[i] = 1 + (rand() % 10);
                                    }
                                }
                            }
                        }
                    }
                }

            }


            printf(TEXTO_verde_CLARO"Pressione <ENTER> pra continuar...\n");
            scanf("%*c");
        }
        while (escolha1);
        printf("Obrigado por jogar.\n");
        printf("\nVolte logo...\n"COLOR_RESET);

    }

    return 0;
}
