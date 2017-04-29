#include <iostream>
#include "Programa.h"


int main() {
	Programa m_programa;
	int m_opcao = 0;

	while (m_opcao != 5) {
		switch (m_opcao)
		{
		case 0: // Menu
			m_opcao = m_programa.Menu();
			break;
		case 1: // Inserir Cadastro
			m_opcao = m_programa.InserirCadastro();
			break;
		case 2: // Excluir Cadastro
			m_opcao = m_programa.ExcluirCadastro();
			break;
		case 3: // Mostrar Todos
			m_opcao = m_programa.MostrarTodos();
			break;
		case 4: // Mostrar Um
			m_opcao = m_programa.MostrarUm();
			break;
		}

		if (m_opcao < 0 || m_opcao > 5) {
			m_opcao = 0;
		}
	}

	system("pause");
	return 0;
}