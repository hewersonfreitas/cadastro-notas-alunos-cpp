#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

//Assinatura de funções
int lerOperacao(double notasAlunos[],int totalNotas);
double recebeNotas(double notasAlunos[],int totalNotas);
double exibirNotas(double notasAlunos, int totalNotas);
double chamarMenu(double notasAlunos[], int totalNotas);
double calculaMedia(double vetorNotas[],int totalNotas);
void verificarNota(double vetorNotas[]);


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
    return mediaNotas/totalNotas;
}

void verificarNota(double vetorNotas[]){
    int indiceNota;
    cout<<"Digite qual nota deseja buscar, sendo elas de 1 a 10: ";
    cin>>indiceNota;
    cout<<"A nota da prova "<<indiceNota<<" que solicitou e: "<<vetorNotas[indiceNota-1]<<endl;
}

int lerOperacao(double notasAlunos[],int totalNotas)
{   int op;

    cout << "Digite sua Opcao: ";
    cin >> op;

    switch(op)
    {
    case 1:
        cout<<"Verifica Nota Especifica"<<endl;
        recebeNotas(notasAlunos,totalNotas);
        chamarMenu(notasAlunos,totalNotas);
        break;
    case 2:
        cout<<calculaMedia(notasAlunos,totalNotas)<<endl;
        chamarMenu(notasAlunos,totalNotas);
        break;
    case 3:
        verificarNota(notasAlunos);
        chamarMenu(notasAlunos,totalNotas);
        break;
    case 4:
        cout<<"Saiu"<<endl;
        break;
    }
}

double recebeNotas(double notasAlunos[],int totalNotas)
{
    for(int i=0; i < totalNotas; i++)
    {
        notasAlunos[i] = geraNota();
        cout << notasAlunos[i] <<", ";
    }
    endl(cout);

    return *notasAlunos;
}

double chamarMenu(double notasAlunos[],int totalNotas)
{
    cout<<"CADASTRO NOTAS"<<endl;
    cout<<"------------------"<<endl;
    cout<<"##Escola Opcao Desejada##"<<endl;
    cout<<"[1] - Cadastrar Notas"<<endl;
    cout<<"[2] - Calcular Media"<<endl;
    cout<<"[3] - Verificar Nota Especifica"<<endl;
    cout<<"[4] - Sair"<<endl;
    lerOperacao(notasAlunos,totalNotas);
}

//main
int main()
{
    int totalNotas = 10;
    double notasAlunos[totalNotas];
    chamarMenu(notasAlunos,totalNotas);

    return 0;
}
//end main
