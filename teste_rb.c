#include <stdio.h>
#include <stdlib.h>
#include "rb.h"

int main(int argc, char * argv[]) {
	arvore a;
	int opcao;
	inicializar(&a);

	while(1) {
		scanf("%d", &opcao);

		switch(opcao) {
				int valor;

				case 1:
						scanf("%d", &valor);
						adicionar(valor, &a);
						break;
				case 2:
						pre_order(a);
						printf("\n");
						break;
				case 3:
						in_order(a);
						printf("\n");
						break;
				case 4:
						pos_order(a);
						printf("\n");
						break;
				case 9:
						scanf("%d", &valor);
						remover(valor, &a);
						break;
						
				case 10:
						imprimir(a);
						printf("\n");
						break;

				case 99:
						exit(0);
		}
	}
}
