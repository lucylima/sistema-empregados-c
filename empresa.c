#include "libempresa.h"
#include <stdlib.h>

int main() {
  char nome[20];
  Empregado T[50];
  int result = 0;
  int pos = 0;
  char op;

  while (1) {
    menu(&op);

    switch (op) {
    case 'a':
      add_empregado(T, &pos);
      break;

    case 'b':
      result = busca_max_sal(T, pos);
      imprimir_empegado(T, result);
      break;

    case 'c':
      printf("digite o nome do funcionário: ");
      fgets(nome, 20, stdin);
      result = busca_nome(T, pos, nome);

      if (result == -1)
        printf("funcionario nao encontrado! \n");
      else
        imprimir_empegado(T, result);
      break;

    case 'd':
      imprimir_tabela(T, pos);
      break;

    case 's':
      exit(0);
    }
  }
  return 0;
}
