#include <stdio.h>
#include <stdlib.h>

//struct referente ao pruduto
struct produto{
    char nome[40];
    int id;
    struct produto *prox;

};

//no da fila geradora de produtos 
struct no{
    struct produto *prod;
    struct no *prox;
    int cont;
};
typedef struct no no;

//struct da fila duplamente encadeada, referente as etapas da linha de produção

struct double_no {
    int cap, qtd;
    struct produto *prod;
    struct double_no *prox;
    struct double_no *ant;
    struct double_no *atv;
};
typedef struct double_no dno;