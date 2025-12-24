#include <stdio.h>
#ifndef LIBEMPRESA_H_INCLUDED
#define LIBEMPRESA_H_INCLUDED

typedef struct Empregado
{
  char nome[20];
  char cpf[11];
  char sexo;
  int idade;
  char cargo[15];
  float salario;
} Empregado;

void add_empregado(Empregado arr[], int *pos);
int busca_max_sal(Empregado arr[], int pos);
int busca_nome(Empregado arr[], int pos, char nome[]);
void imprimir_tabela(Empregado arr[], int pos);
void imprimir_empegado(Empregado empregado[], int id);
char menu(char *op);
void limpar_buffer_entrada();
void limparTela();


#endif // !LIBEMPRESA_H_INCLUDED
