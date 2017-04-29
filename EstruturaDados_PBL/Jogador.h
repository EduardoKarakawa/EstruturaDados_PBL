#pragma once
#include <string>
#include <iostream>

class Jogador
{
	private:
		int m_identificador;
		std::string m_nome;
		int m_nivel;
		int m_pontuacao;
		int m_idade;


	public:
		Jogador();
		Jogador(int id, std::string nome, int nivel, int point, int idade);
		~Jogador();

		void Imprimir();
		int GetID();
};

