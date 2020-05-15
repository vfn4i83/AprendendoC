#include <iostream> //pre-processor statment / include = import(JAVA) de HEADER FIle / parentesis triangular quer dizer que o include esta numas das pastas de include
#include "Log.h" // Aspas diz ao compilador que o include e relativo a este arquivo do projeto /

void Log(const char* message);

int main() { // Entry/Entrada / sem retorno entao retorna 0 (ZERO) só a main
	
	int variable = 8;

	//std::cout << "Hello World!\nOla, Mundo!" << std::endl; // operadores (neste caso BitShift << )pense
														   // nele como uma funcao, poderia ser cout.print("texto aqui").printf("\n");
	// ovildado para implementar logging
	Log("Hello World!\nOla, Mundo!"); // A ideia e de simplificar o debug, pois e um lixo, 
									  // similar ao JAVA stacktrace do java, mas implementado por ti mano!

	std::cin.get(); // espera uma entrada, qualquer / para nao fechar janela imediatamente
}