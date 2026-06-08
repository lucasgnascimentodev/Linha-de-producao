
#include "funcoes.c"
#include "struct.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 500
// Esse código deve gerar uma lista duplamente encadeada, cada nó da lista é equivalente a uma 
// etapa da linha de produção, cada etapa aponta para a próxima etapa, a etapa anterior e a 
// atividade atual, a cada clock de 1 seg do loop principal, os produtos irão percorrer as 
// atividades da etapa





int main (){
    
    char pletra[30];
    char line[Max];
     dno *f1 = NULL;

    FILE *file =fopen("name.txt","r");
    if(file == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    while(fgtes(line,sizeof(line),file) != NULL){
        if(sscanf(line,"%30s",pletra) == 1){

            if(_stricmp(pletra,"etapa") == 0){
                sscanf(line,"%*s %d %d %d %f %s",
                    &f1->etp->id, &f1->etp->qatv, &f1->etp->cap,
                    &f1->etp->taxai, f1->etp->nome);
            }
        }
    }

    return 0;
}
