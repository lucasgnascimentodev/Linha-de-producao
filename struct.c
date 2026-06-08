#include <stdio.h>
#include <stdlib.h>

// struct referente a etapa da linha de produção; 
struct etapa{
    int id, qatv, cap;
    float taxai;
    char *nome;
};
struct ativ{

    int id, tempo;
    float taxaf;
    char *nome;
};

//struct referente ao arquivo de entrada
struct arq{
    struct etapa *aetp;
    struct ativ *aatv;
};
typedef struct arq arq;

//struct referente ao pruduto
struct produto{
    char nome[40];
    int id, tempo;
    struct produto *prox;
};
typedef struct produto produto;
//no da fila geradora de produtos 
struct no{
    struct produto *prod;
    struct no *prox;
    int cont;
};
typedef struct no no;

//struct da fila duplamente encadeada
struct double_no {
    struct etapa *etp;
    struct produto **prod;
    struct double_no *prox;
    struct double_no *ant;
    struct ativ *atv;
};
typedef struct double_no dno;
