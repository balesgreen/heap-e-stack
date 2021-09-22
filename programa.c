#include <stdio.h> // -> printf();
#include <stdlib.h> // -> malloc();

int main(void) {
			
			// STACK (PILHA)


	// A memória stack, é uma memória limitada. (3mb, 4mb, 5mb)

	char a; // -> 1 byte
	char b; // -> 1 byte
	char c; // -> 1 byte

	printf("Esta variável tem: %zu byte.\n", sizeof(char));
	// Este 1 byte será alocado na memória stack.

		// HEAP (MEMÓRIA HEAP)

	char *ponteiro; // -> Este ponteiro, contém 8 bytes.

	printf("Este ponteiro tem: %zu bytes.\n", sizeof(char *));

	ponteiro = (char *) malloc(200<F9>); /* nós estamos alocando qualquer tipo de tamanho de memória, o unico
						  sera a sua memoria ram */

	free(ponteiro); // utilizando a função free, nós podemos liberar a memória que acabamos de alocar.

	return 0;

}
