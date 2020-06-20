#include "../RotaQuiz.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "locale.h"
//Declarando funcoes
int main();
int funcaoCronometro();
int QuizParte1text();
int SteveIntroducaotext();
int SteveAcertouPerguntatext();
int SteveErrouPerguntatext();
int StevePerdeuJogotext();
int StevePulaEtapastext();
int PerguntaPulaEtapastext();
int QuizParte2text();
int QuizParte3text();
int QuizParte4text();
int QuizParte5text();

//Modo Quiz

int vida = 3;
int pulaEtapa = 2;
int pegaResposta;
int jogarNovamente;

// fazer uma funcao de introducao

int SteveIntroducao(){
    SteveIntroducaotext();
}

int QuizParte1() //fase 1
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 1...   ... %i Vidas ...    ... %i Pula-Etapas ... \n\n", vida, pulaEtapa);
    QuizParte1text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        SteveAcertouPerguntatext();
        printf("\n\n     Aperte qualquer letra para ir na Fase 2: ");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            QuizParte1();
            Sleep(5000);

        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            system("pause");
            Sleep(5000);

        }

        break;
    default:
        SteveErrouPerguntatext();
        system("pause");
        Sleep(3000);
        system("cls");
        vida--;
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            Sleep(2000);
            system ("cls");
            vida = 3;
            pulaEtapa = 2;
            QuizParte1();
        }
        QuizParte1();
    }


    return 0;
}
int QuizParte2() //fase 2
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 2...   ... %i Vidas ...    ... %i Pula-Etapas ... \n\n", vida, pulaEtapa);
    QuizParte2text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 3: // resposta certa
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(5000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 3: ");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            Sleep(5000);
            QuizParte2();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            Sleep(3000);
            system("pause");
        }

        break;
    default:
        SteveErrouPerguntatext();
        system("pause");
        Sleep(3000);
        system("cls");
        vida--;
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            Sleep(2000);
            system ("cls");
            vida = 3;
            pulaEtapa = 2;
            QuizParte1();
        }
        QuizParte2();
    }


    return 0;
}
int QuizParte3() //fase 3
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 3...   ... %i Vidas ...    ... %i Pula-Etapas ... \n\n", vida, pulaEtapa);
    QuizParte3text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 2: // resposta certa
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(5000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 4: ");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
             printf("\nNão pode pular etapa\n");
            Sleep(5000);
            QuizParte3();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            Sleep(3000);
            system("pause");
        }
        break;
    default:
        SteveErrouPerguntatext();
        system("pause");
        Sleep(3000);
        system("cls");
        vida--;
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            Sleep(2000);
            system ("cls");
            vida = 3;
             pulaEtapa = 2;
            QuizParte1();
        }
        QuizParte3();
    }


    return 0;
}
int QuizParte4() //fase 4
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 4...   ... %i Vidas ...    ... %i Pula-Etapas ... \n\n", vida, pulaEtapa);
    QuizParte4text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(5000);
        printf("\n\n     Aperte qualquer letra para ir na Fase 5: ");
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            Sleep(5000);
            QuizParte4();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            system("pause");
        }

        break;
    default:
        SteveErrouPerguntatext();
        system("pause");
        Sleep(3000);
        system("cls");
        vida--;
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            Sleep(2000);
            system ("cls");
            vida = 3;
             pulaEtapa = 2;
            QuizParte1();
        }
        QuizParte4();
    }


    return 0;
}




int QuizParte5() //fase 5
{
    system ("cls");
    //inciando jogo
    printf("     ...Quiz 5...   ... %i Vidas ...    ... %i Pula-Etapas ... \n\n", vida, pulaEtapa);
    QuizParte5text();
    if(pulaEtapa > 0){
        PerguntaPulaEtapastext();
    }
    printf("\n          Digite sua resposta: ");
    scanf("%d", &pegaResposta);

    switch (pegaResposta)
    {
    case 1: // resposta certa
        SteveAcertouPerguntatext(); // steve resposta certa
        Sleep(5000);
        system("pause");
        break;
    case 5: // pula etapas

        if(pulaEtapa == 0)
        {
            system ("cls");
            printf("\nNão pode pular etapa\n");
            Sleep(5000);
            QuizParte5();
        }
        else
        {
            pulaEtapa--;
            StevePulaEtapastext();
            system("pause");

        }

        break;
    default:
        SteveErrouPerguntatext();
        system("pause");
        Sleep(3000);
        system("cls");
        vida--;
        if(vida == 0)
        {
            StevePerdeuJogotext(); // mudar o nome do arquivo para stevePerdeuText
            system("pause");
            Sleep(2000);
            system ("cls");
            vida = 3;
             pulaEtapa = 2;
            QuizParte1();
        }
        QuizParte5();
    }


    return 0;
}
