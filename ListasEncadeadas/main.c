#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
void insert();
void imprime();
int total = 0;

struct cel{
    int conteudo;
    struct cel *seg;
};

typedef struct cel celula;

int main(){
    celula c;
    celula *p;
    int i = 0;

    c.seg = NULL; /*Inicializar a lista com NULL no seguinte essa é a lista com cabeça.*/
    p = &c;

    printf("Informe o valor:\n");
    scanf("%d",&i);

    while(i != 0 ){
        insert(i, p);
        printf("Informe o valor:\n");
        scanf("%d",&i);
    }

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
    nova = (celula *) malloc(sizeof(celula)); //Mudança pra realizar o cast para o tipo do ponteiro.
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


