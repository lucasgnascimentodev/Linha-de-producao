#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "struct.c"
// esse código deve gerar uma fila de produtos a serem alocados e caso tenha capacidade 
// será enviado para a fila duplamente encadeada, caso não tenha capacidade, o produto irá
// esperar na fila de produtos, e a cada ciclo de alocação, o produto irá verificar se tem
// capacidade para ser alocado,e irá ser criado um novo produto a cada ciclo,
// caso tenha, ele é alocado, caso não tenha,
// ele continua esperando na fila de produtos.


//função para alocar um novo produto e um novo nó
 no* alocar(){
        no *novo = (no*)malloc(sizeof(no));
        novo->prod = (struct produto*)malloc(sizeof(struct produto));
        novo->prox = NULL;
        return novo;
}
//função que inicia a fila geradora de produtos
void  iniciar_fp(no **f,int t){

    for(int i = 0 ; i < t; i++){
        no *novo = alocar();
        no *aux = *f;

        if(aux == NULL){
            novo->prod->id = 1;
            *f = novo;
            (*f)->cont = 1;
        }else{
            aux->cont++;
            while(aux->prox != NULL){
                aux = aux->prox;
        }
            novo->prod->id =(aux->prod->id) + 1;
            aux->prox = novo;
    }
}
}






void imprimir(no *f){
    no *aux = f;
    printf("[");
    while (aux){
         printf("%d ", aux->prod->id);
         aux = aux->prox;
    }
     printf("]\n");

}

// Main teste 
int main (){
    struct no *f1 = NULL;
    iniciar_fp(&f1,3);
    imprimir(f1);
    iniciar_fp(&f1,2);
    imprimir(f1);
    
    return 0;
}