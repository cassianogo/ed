#include <stdio.h>
#include "minunit.h"

int tests_run = 0;

/*static char * test_soma(){
    ->int p1 = 1;
    ->int p2 = 1;
    ->int result = 2;
    mu_assert("Soma: ",soma(p1,p2) == result);
    return 0;
 }*/

static char * test_soma(){
    double n1 = 1;
    double n2 = 1;
    double result = 2;
    printf("%f\n",soma(n1,n2));
    printf("%f",result);
    system("pause");

    mu_assert("FAILL-> Soma \n",soma(n1,n2) == result);
    return 0;
}

static char * test_subtracao(){
    double n1 = 1;
    double n2 = -1;
    double result = 2;
    mu_assert("FAIL-> Subtracao \n", subtracao(n1,n2) == result);
    return 0;
}

static char * test_multiplicacao(){
    double n1 = 2;
    double n2 = 2;
    double result = 4;
    mu_assert("FAILL-> Multiplicacao\n", multiplicacao(n1,n2) == result);
    return 0;
}

static char * test_divisao(){

    return 0;
}

char * all_tests() {
    mu_run_test(test_soma);
    mu_run_test(test_subtracao);
    mu_run_test(test_multiplicacao);
    mu_run_test(test_divisao);
    return 0;
}
