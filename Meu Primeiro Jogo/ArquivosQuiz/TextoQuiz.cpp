#include "../RotaQuiz.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "locale.h"

//part 1 ===========================================
int PerguntaPulaEtapastext()
{
    FILE *PerguntaPulaEtapas;
    char textoPPulaEtapas[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    PerguntaPulaEtapas = fopen("textos/Quizz/PerguntaPulaEtapas.txt", "r");

    while(fgets(textoPPulaEtapas, 20, PerguntaPulaEtapas) !=NULL){
        printf("%s", textoPPulaEtapas);
    }
    printf(" \n\n");
    fclose(PerguntaPulaEtapas);



return 0;
}

int SteveIntroducaotext()
{
    FILE *SteveIntroducao;
    char textoSIntroducao[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveIntroducao = fopen("textos/Quizz/steveIntroducao.txt", "r");

    while(fgets(textoSIntroducao, 20, SteveIntroducao) !=NULL){
        printf("%s", textoSIntroducao);
    }
    printf(" \n\n");
    fclose(SteveIntroducao);



return 0;
}

int SteveAcertouPerguntatext()
{
    FILE *SteveAcertou;
    char textoSAcertou[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveAcertou = fopen("textos/Quizz/steveAcertou.txt", "r");

    while(fgets(textoSAcertou, 20, SteveAcertou) !=NULL){
        printf("%s", textoSAcertou);
    }
    printf(" \n\n");
    fclose(SteveAcertou);



return 0;
}

int SteveErrouPerguntatext()
{
    FILE *SteveErrou;
    char textoSErrou[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    SteveErrou = fopen("textos/Quizz/steveErrou.txt", "r");

    while(fgets(textoSErrou, 20, SteveErrou) !=NULL){
        printf("%s", textoSErrou);
    }
    printf(" \n\n");
    fclose(SteveErrou);



return 0;
}


int StevePerdeuJogotext()
{
    FILE *StevePerdeu;
    char textoSPerdeu[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    StevePerdeu = fopen("textos/Quizz/stevePerdeu.txt", "r");

    while(fgets(textoSPerdeu, 20, StevePerdeu) !=NULL){
        printf("%s", textoSPerdeu);
    }
    printf(" \n\n");
    fclose(StevePerdeu);



return 0;
}

int StevePulaEtapastext()
{
    FILE *StevePulaEtapas;
    char textoSPulaEtapas[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    StevePulaEtapas = fopen("textos/Quizz/stevePulaEtapa.txt", "r");

    while(fgets(textoSPulaEtapas, 20, StevePulaEtapas) !=NULL){
        printf("%s", textoSPulaEtapas);
    }
    printf(" \n\n");
    fclose(StevePulaEtapas);



return 0;
}




int QuizParte1text()
{
    FILE *QuizzParte1;
    char textoQ1[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte1 = fopen("textos/Quizz/quiz1.txt", "r");

    while(fgets(textoQ1, 20, QuizzParte1) !=NULL){
        printf("%s", textoQ1);
    }
    printf(" \n\n");
    fclose(QuizzParte1);



return 0;
}


//part 2 ===========================================
int QuizParte2text()
{
    FILE *QuizzParte2;
    char textoQ2[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte2 = fopen("textos/Quizz/quiz2.txt", "r");

    while(fgets(textoQ2, 20, QuizzParte2) !=NULL){
        printf("%s", textoQ2);
    }
    printf(" \n\n");
    fclose(QuizzParte2);



return 0;
}

int QuizParte3text()
{
    FILE *QuizzParte3;
    char textoQ3[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte3 = fopen("textos/Quizz/quiz3.txt", "r");

    while(fgets(textoQ3, 20, QuizzParte3) !=NULL){
        printf("%s", textoQ3);
    }
    printf(" \n\n");
    fclose(QuizzParte3);



return 0;
}

int QuizParte4text()
{
    FILE *QuizzParte4;
    char textoQ4[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte4 = fopen("textos/Quizz/quiz4.txt", "r");

    while(fgets(textoQ4, 20, QuizzParte4) !=NULL){
        printf("%s", textoQ4);
    }
    printf(" \n\n");
    fclose(QuizzParte4);



return 0;
}

int QuizParte5text()
{
    FILE *QuizzParte5;
    char textoQ5[20];
    setlocale(LC_ALL, "Portuguese_Brazil");

    QuizzParte5 = fopen("textos/Quizz/quiz5.txt", "r");

    while(fgets(textoQ5, 20, QuizzParte5) !=NULL){
        printf("%s", textoQ5);
    }
    printf(" \n\n");
    fclose(QuizzParte5);



return 0;
}


