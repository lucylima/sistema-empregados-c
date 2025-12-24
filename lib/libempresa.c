#include "libempresa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char menu(char *op) {
  printf("seja bem vindo ao menu\nescolha uma opcao:\n");
  printf("a - inserir um empregado\n");
  printf("b - buscar por maior salario\n");
  printf("c - procurar um funcionário por nome\n");
  printf("d - imprimir todos os funcionarios\n");
  printf("s - sair");
  printf("\n>>> ");
  scanf(" %c", op);
  limpar_buffer_entrada();
  return *op;
}

void limparTela() { system("clear"); }

void imprimir_empegado(Empregado empregado[], int id) {
  printf("id: %d\n", id);
  printf("Nome: %s\n", empregado[id].nome);
  printf("CPF: %s\n", empregado[id].cpf);
  printf("sexo: %c\n", empregado[id].sexo);
  printf("idade: %d\n", empregado[id].idade);
  printf("cargo: %s\n", empregado[id].cargo);
  printf("salario: %.2f\n", empregado[id].salario);
  printf("-----------------------------------------------\n");
}

void add_empregado(Empregado arr[], int *pos) {
  printf("digite o nome do funcionário: ");
  fgets(arr[*pos].nome, 20, stdin);

  printf("digite o cpf: ");
  fgets(arr[*pos].cpf, 11, stdin);

  printf("digite o sexo (F) ou (M): ");
  scanf(" %c", &arr[*pos].sexo);
  limpar_buffer_entrada();

  printf("digite a idade: ");
  scanf("%d", &arr[*pos].idade);
  limpar_buffer_entrada();

  printf("digite o cargo: ");
  fgets(arr[*pos].cargo, 15, stdin);

  printf("digite o salario: ");
  scanf("%f", &arr[*pos].salario);

  (*pos)++;
}

int busca_max_sal(Empregado arr[], int pos) {
  int max = arr[0].salario;
  int encontrou = 0;

  for (int i = 0; i < pos; i++) {
    if (arr[i].salario >= max) {
      max = arr[i].salario;
      encontrou = i;
    }
  }

  return encontrou;
}

int busca_nome(Empregado arr[], int pos, char nome[]) {
  int encontrou = -1;

  for (int i = 0; i < pos; i++) {
    if (strcmp(arr[i].nome, nome) == 0) {
      encontrou = i;
    }
  }

  return encontrou;
}

void imprimir_tabela(Empregado arr[], int pos) {
  printf("\n-----------------------------------------------\n");
  for (int i = 0; i < pos; i++) {
    printf("id: %d\n", i);
    printf("Nome: %s\n", arr[i].nome);
    printf("CPF: %s\n", arr[i].cpf);
    printf("sexo: %c\n", arr[i].sexo);
    printf("idade: %d\n", arr[i].idade);
    printf("cargo: %s\n", arr[i].cargo);
    printf("salario: %.2f\n", arr[i].salario);
    printf("-----------------------------------------------\n");
  }
}

void confirmar_sair() {}

void limpar_buffer_entrada() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}
