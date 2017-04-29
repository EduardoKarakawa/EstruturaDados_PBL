#include "Jogador.h"

int Jogador::GetID() { return m_identificador; }

Jogador::Jogador(){}

Jogador::Jogador(int id, std::string nome, int nivel, int point, int idade)
{
	m_identificador = id;
	m_nome = nome;
	m_nivel = nivel;
	m_pontuacao = point;
	m_idade = idade;
}


Jogador::~Jogador()
{
}


void Jogador::Imprimir() {
	std::cout	<< std::endl << "--------------------------------------" << std::endl 
				<< "Identificacao: " << m_identificador << std::endl
				<< "Nome: " << m_nome << std::endl
				<< "Idade: " << m_idade << std::endl
				<< "Nivel: " << m_nivel << std::endl
				<< "Pontuacao: " << m_pontuacao 
				<< std::endl;
}
