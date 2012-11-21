#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
void insert();
void imprime();

struct cel{
    int conteudo;
    struct cel *seg;
};

typedef struct cel celula;

int main(){
    celula c;
    celula *p;

    c.seg = NULL; /*Inicializar a lista com NULL no seguinte essa é a lista com cabeça.*/
    p = &c;

    insert(1, p);
    insert(2, p);
    insert(3, p);
    insert(4, p);
    insert(5, p);

    imprime(p);

    buscaRemove(3, p);

    imprime(p);

    return 0;
}

void imprime(celula *lst){
    celula *p;
    for(p = lst->seg; p != NULL; p = p->seg){
        printf("Valor: %d\n",p->conteudo);
    }
}

void insert(int value, celula *p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = value;
    nova->seg = p->seg;
    p->seg = nova;
}

void buscaRemove(int value, celula *lst){
    celula *p, *q;
    p = lst;
    q = lst->seg;

    while( q != NULL && q->conteudo != value){
        p = q;
        q = q->seg;
    }

    if(q != NULL){
        p->seg = q->seg;
        free(q);
    }
}


