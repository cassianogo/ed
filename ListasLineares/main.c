#include <stdio.h>
#include <stdlib.h>
#include "minunit.h"
#include <windows.h>
#include <conio.h>

double soma(double x, double y);
double subtracao(double x, double y);
double multiplicacao(double x, double y);
double divisao(double x, double y);

int main() {
    int op = 1;

    printf("OP: \n[0] Rodar Testes \n[1] Rodar a aplicacao: ");
    scanf("%d",&op);

    if(op == 1){

    }else if(op == 0){
        system("cls");
        mu_run_all;
    }
    return 0;
}

void add(int value){

}

void del(int value){

}

double search(int value){

    return -1;
}

double soma(double x, double y){
    double r = x+y;
    return r;
}

double subtracao(double x, double y){
    return x-y;
}

double multiplicacao(double x, double y){
    return x*y;
}

