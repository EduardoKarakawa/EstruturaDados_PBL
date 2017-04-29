#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Jogador.h"

class Programa
{
	private:
		std::vector<Jogador> m_lista;

	public:
		Programa();
		~Programa();
		
		int Menu();
		int InserirCadastro();
		int ExcluirCadastro();
		int MostrarTodos();
		int MostrarUm();

};

