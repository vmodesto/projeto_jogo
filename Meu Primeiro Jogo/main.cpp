#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include "RotaQuiz.h"
#include "rotasPuzzle.h"
#include <sys/stat.h>
//==================
int Pazzle(int fase);
int Quiz();
int main();
void menu();
int Login();

//var globais
int decisaoGlobal;
bool admOnline = false;
char logADM[20] = {"adm"};
char tipoArquivo[10] = {".txt"}; //tipo de arquivo para junção com os registros em .TXT.

char nomeLogin[20] = {""};

//var para as fases
bool PuzzleContinuaG = false; //serve para quando o jogador ja tiver passado da fase 1.

//var para registro e leitura de arquivo
char nomeLoginComCaminho[30] = {"logs/"}; // Define o caminho para a pasta de registros( logs ), para juntar com o nome do arquvivo.
//FILE *abreARegistro;
FILE *abreRegistro;
char nome[20];
char senha[30];
char PersN[6];
char faseAtual[20];
char QuizAtual[20];

int numF = 1;
int numQ = 1;
int NewPer = 2;
int fase = 0;

int faseAtual2Main;
//teste de continuidade
void PassaVar2(int faseAtual2){
faseAtual2Main = faseAtual2;
}

//attDedados
void Att(){
strcat(nomeLoginComCaminho, nomeLogin);
strcat(nomeLoginComCaminho, ".txt");

abreRegistro = fopen(nomeLoginComCaminho, "r");


fscanf(abreRegistro,"Nome:%s\n", nome);
fscanf(abreRegistro,"Senha:%s\n", senha);
fscanf(abreRegistro,"Fase:%s\n", faseAtual);
fscanf(abreRegistro,"NewPers:%s\n", PersN);
fscanf(abreRegistro,"Quiz:%s\n", QuizAtual);



if (strcmp(faseAtual, "1") == 0){fase = 1;}
if (strcmp(faseAtual, "2") == 0){fase = 2;}
if (strcmp(faseAtual, "3") == 0){fase = 3;}
if (strcmp(faseAtual, "4") == 0){fase = 4;}
if (strcmp(faseAtual, "5") == 0){fase = 5;}
if (strcmp(faseAtual, "6") == 0){fase = 6;}
if (strcmp(faseAtual, "7") == 0){fase = 7;}
if (strcmp(faseAtual, "8") == 0){fase = 8;}
if (strcmp(faseAtual, "9") == 0){fase = 9;}
if (strcmp(faseAtual, "10") == 0){fase = 10;}

fclose(abreRegistro);
}


//----------------------------------------------------------------------
using namespace std;

int registro(){
//var
char nomeRegister[20] = {""};
char nomeRegisterComCaminho[30] = {"logs/"}; // caminho para pasta de registros.
char senhaRegister[20] = {""};


     // abre arquivo

    printf("\n\n\t Digite seu nome de login[maximo 10 digitos]: ");
    fflush(stdin);
    gets(nomeRegister);

    //junção do nome com o caminho da pasta.
    strcat(nomeRegisterComCaminho, nomeRegister); // variavel caminho está declarada como variavel global no inicio do codigo.
    strcat(nomeRegisterComCaminho, tipoArquivo);
    //--------------------------------------

    //veridica se arquivo ja existe
    abreRegistro = fopen(nomeRegisterComCaminho, "r");
    if ((abreRegistro = fopen(nomeRegisterComCaminho, "r")) == NULL){
        printf("\n\t\t Nome disponivel");
        printf("\n\n\t Digite sua senha: ");
        gets(senhaRegister);

        //Grava dados nele
        //geração de configurações pra cada conta.
        abreRegistro = fopen(nomeRegisterComCaminho, "w+t");
        fprintf(abreRegistro, "Nome:%s\nSenha:%s\nFase:%i\nNewPers:%i\nQuiz:%i", nomeRegister, senhaRegister, numF, NewPer, numQ);
        fclose(abreRegistro);
        //-------------------------------------------------------------

        main();
        }else{

        //Quando arquivo ja existe
        printf("\n\n\t\t Nome já está sendo usado. Faça login na tela de login ");
        Sleep(5001);
        fclose(abreRegistro);
        main();
        }

system("pause");
return 0;
}
int login(){

char senhaLogin[20] = {""};
char nomeLoginComCaminho[30] = {"logs/"};

//veridicação de senha

char senhaVerific[20];



    printf("\n\t nome: ");
    fflush(stdin);
    gets(nomeLogin);

    //junção do nome com o caminho da pasta.
    strcat(nomeLoginComCaminho, nomeLogin); // variavel caminho está declarada como variavel global no inicio do codigo.
    strcat(nomeLoginComCaminho, tipoArquivo);
    //--------------------------------------

    //verificando nome
    abreRegistro = fopen(nomeLoginComCaminho, "r");
    if ((abreRegistro = fopen(nomeLoginComCaminho, "r")) == NULL){
        printf("\n\n\t\t Usuario Não existe.");

        Sleep(3001);
        fclose(abreRegistro);
        main();
    }else{

        //Quando o nome existe.
        printf("\n\t Senha: ");
        fflush(stdin);
        gets(senhaLogin);

    printf("\n\t Verificando credenciais...");
    Sleep(2001);


    //leitura de arquivo: -------------------Global
    Att();
    //---------------------------------------------------Global

     //verificando se sao iguai
     if (strcmp(senha, senhaLogin) != 0){
        printf("\n\n\t Senha errada.");
        fclose(abreRegistro);
        Sleep(2001);
        main();

     }else{
        printf("\n\n\t Login confirmado.");
        //add aqui o menu.
        //verificar se é adm.
        if (strcasecmp(nomeLogin, logADM) == 0){
            admOnline = true;
            printf("\n\t\t\t Entrando como Administrador.");
        }

        //add aqui o menu.
        Sleep(2001);
        fclose(abreRegistro);
        menu();

     }

    }




return 0;
}
int main(){
printf("Carregando...");

setlocale(LC_ALL, "Portuguese");
Login();
return 0;
}
int Login(){
    setlocale(LC_ALL, "Portuguese");
    //Verifica se pasta logs existe. se nao existir o sistema cria uma.


    //-----------------------------------------------------------------

    system("cls");
    //PlaySound(TEXT("Musica Antiguo Egipto.wav"), NULL, SND_ASYNC|SND_LOOP);


    printf("\t\t\t\tBem-vindo ao projeto integrador do curso de Ciência da computação – 1P UniFagoc.\n");

    printf("\n\t1] Login");
    printf("\n\t2] registro");
    printf("\n\t Escolha do jogador: ");
    scanf("%d", &decisaoGlobal);



    switch(decisaoGlobal){
        case 1:
            login();
            break;
        case 2:
            registro();
            break;
        default:
            printf("\n\tOpção invalida.");
            break;
    }


}

void menu(){
//var
bool RunMenu = true;
//PassaVar(nomeLoginComCaminho, PersN, nome, senha, faseAtual, QuizAtual); // Envia as variaveis de registro para o arquivo FunçõesFase.cpp
Att();
    while(RunMenu){
        system("cls");
        printf("\t\t Bem-vindo ao projeto integrador, do curso “Ciência da Computação – 1p 2020 UniFagoc”");
        puts("\n\n");
        puts("\n\n");
        printf("\n\t1] Jogar Modo Quiz.");
        printf("\n\t2] Jogar Modo Puzzle.");
        printf("\n\t3] Ranking.");
        printf("\n\t4] Opções.");
        printf("\n\t5] Informações do Jogo.");
        printf("\n\t6] Sair.");
        if (admOnline == true){
            printf("\n\n\t7]Escolher fases.");
            printf("\n\n\t8]Ir para fase em desenvolvimento Puzzle.");
        }
        printf("\n\n\t Escolha do jogador: ");
        scanf("%d", &decisaoGlobal);

        switch(decisaoGlobal){

        case 1:
            RunMenu = false;
            Quiz();
            break;
        case 2:
            RunMenu = false;
            Pazzle(fase);
            break;
        case 3:
            printf("\n\t Em construção!");
            Sleep(3001);

            break;
        case 4:
            printf("\n\t Em construção!");
            Sleep(3001);
            break;
        case 5:
            printf("\n\t Em construção!");
            Sleep(3001);

            break;
        case 6:
            Sleep(600);
            main();
            break;
        if (admOnline == true){
        case 7:
            printf("\n\tPuzzle 1 a 10");
            printf("\n\tIr para o menu: 0");
            printf("\n\tEscolha do adm: ");
            scanf("%d", &decisaoGlobal);
            switch(decisaoGlobal){
           // case 1: PazzleFase1(); break; case 2:PazzleFase12(); break; case 3:PuzzleFase2p1(); /*matarmembro(); naomatar();*/ break;
           // case 4:PuzzleFase2p2(); break;case 5:menu(); break; case 6:menu(); break; case 7:menu(); break;
            //case 8:menu(); break;case 9:menu(); break; case 10:menu(); break; case 11: menu(); break;

            default:
                printf("\n\topções de 1 a 11");
                break;
            }
            break;
        case 8:
            //PuzzleFase2p2();
            break;
        }
        default:
            printf("\n\t Opção invalida! Tente: 1, 2, 3, 4 e 5.");
            break;
        }
    }
}

//==========Quiz incio ==============
int Quiz()
{
setlocale(LC_ALL, "Portuguese");
//var global para modo QUIZ
int TQ = 1000; // Tempo padrao para algo Desenvolvimento.
int TQ1 = 1500; // Tempo padrao para algo Desenvolvimento.
char QuizResp[20];
char RecQuizResp[20] = "S";
int ResuRecQuizResp;
bool initQuiz = false;



    Sleep(1500);
    system("cls");
    Sleep(TQ1);
    Sleep(TQ1);
    printf("\n   Bem vindo ao modo Quiz :)");
    Sleep(TQ1);
    printf("\n   Esse modo terá vidas, e Pula-Etapas:)");
    Sleep(TQ1);
    printf("\n   Importante saber que o jogo está em versão beta, então alguns mecanismos estarão inacessíveis. :)");
    Sleep(TQ1);
    printf("\n   Tenha um bom proveito. :)");
    Sleep(TQ1);
    printf("\n\n                 Divirta-se...");
    Sleep(TQ1);
    printf("\n\n\t\t Iniciar Quiz? [S-N]\n\n");
    scanf("%s", &QuizResp);
    ResuRecQuizResp = strcasecmp(QuizResp, RecQuizResp);
        if (ResuRecQuizResp == 0)
        {
            initQuiz = true;
        }
        if (ResuRecQuizResp != 0)
        {
            printf("\n\n OK, Voce sera retornado ao menu inicial...");
            Sleep(1000);
            system("cls");
            Sleep(1500);
            menu();
        }
            if (initQuiz == true)
            {   //inicio do jogo

                Sleep(2000);
                system("cls");
                Sleep(1000);
                printf("          Iniciando Quiz...");
                Sleep(2000);
                system("cls");
                Sleep(1500);
                printf("     ...Quiz 1...    ...Vida [indisponivel]...    ...Pula-Etapas [indisponivel]... \n\n");
                printf("     \n\n");
                system("pause");
                system("cls");
                //printf("     ...Quiz 1...         ...Vida [indisponivel]...    ...Pula-Etapas [indisponivel]... \n\n");
                 printf("     \n\n");
                 SteveIntroducao();
                 system("pause");
                QuizParte1(); // Pergunta 1
                //fase2
                system("cls");
                QuizParte2();
                system("pause");
                system("cls");
                QuizParte3();
                system("pause");
                system("cls");
                QuizParte4();
                system("pause");
                system("cls");
                QuizParte5();
                system("pause");








               //fim do codigo pazzle
                system("pause");
                printf("\t\t Desenvolvido até aqui...\n\n");
                printf("\t\t Desenvolvido até aqui...\n\n");
                printf("\t\t será retornado ao menu inicial em [10 segundos]...\n\n");
                Sleep(10000);
                menu();
            }





return 0;
}
//==========Quiz fim ==============


//==========Puzzle incio ==============
int Pazzle(int fase){

return 0;
}
//==========Puzzle Final ==============
