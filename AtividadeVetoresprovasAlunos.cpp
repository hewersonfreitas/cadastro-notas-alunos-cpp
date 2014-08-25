#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

double geraNota();

double calculaMedia(double vetorNotas[],int totalNotas);
double exibirNotas(double Notas);
void cadastrarMedia();
int chamarMenu();
int lerOperacao();
double recebeNotas();

//main
int main()
{
    chamarMenu();

    return 0;
}
//end main

double geraNota()
{
    double notaRand = (double)(rand() % 10);
    return notaRand;
}

double calculaMedia(double vetorNotas[],int totalNotas)
{
    double mediaNotas = 0;
    for(int ind; ind < totalNotas; ind++)
    {
        mediaNotas+=vetorNotas[ind];
    }
    return mediaNotas;
}

void verificarNota(double vetorNotas[]){
    int indiceNota;
    cout<<"Digite qual nota deseja buscar, sendo elas de 1 a 10;"
    cout<<"A nota da prova "<<indiceNota<<" que solicitou e: "<<vetorNotas[indiceNota-1]<<endl;
}

double exibirNotas(double Notas);

void cadastrarMedia();

int chamarMenu();
int lerOperacao()
{   int op;

    cout << "Digite sua Opcao: ";
    cin >> op;

    switch(op)
    {
    case 1:
        cout<<"Cadastrar Media"<<endl;
        chamarMenu();
        break;
    case 2:
        verificarNota();
        chamarMenu();
        break;
    case 3:
        cout<<"Verifica Nota Especifica"<<endl;
        chamarMenu();
        break;
    case 4:
        cout<<"Saiu"<<endl;
        break;
    }
}

double recebeNotas()
{
    int totalNotas = 10;
    double notasAlunos[totalNotas];

    for(int i=0; i < totalNotas; i++)
    {
        notasAlunos[i] = geraNota();
        cout << notasAlunos[i] <<endl;
    }
}

int chamarMenu()
{
    cout<<"CADASTRO NOTAS"<<endl;
    cout<<"------------------"<<endl;
    cout<<"##Escola Opcao Desejada##"<<endl;
    cout<<"[1] - Cadastrar Notas"<<endl;
    cout<<"[2] - Verificar Nota"<<endl;
    cout<<"[3] - Verificar Nota Especifica"<<endl;
    cout<<"[4] - Sair"<<endl;
    lerOperacao();
}
