#include "Programa.h"



Programa::Programa(){}

Programa::~Programa(){}


int Programa::Menu() {
	int opcao;
	system("pause");
	system("cls");
	std::cout << " --------------------- Menu ---------------------" << std::endl;
	std::cout << " 1 - Inserir Cadastro" << std::endl
			  << " 2 - Excluir Cadastro" << std::endl
			  << " 3 - Mostrar Todos" << std::endl
			  << " 4 - Pesquisar um Jogador" << std::endl
			  << " 5 - Sair" << std::endl;
	
	std::cin >> opcao;
	system("cls");
	return opcao;
}

int Programa::InserirCadastro() {
	int identificador;
	std::string nome;
	int nivel;
	int pontuacao;
	int idade;

	std::cout << " --------------------- Adicionar Cadastro ---------------------" << std::endl;
	std::cout << "Nome: ";
	std::cin >> nome;
	std::cout << "Idade: ";
	std::cin >> idade;
	std::cout << "Nivel: ";
	std::cin >> nivel;
	std::cout << "Pontuacao: ";
	std::cin >> pontuacao;

	m_lista.push_back(Jogador(idade + nivel / pontuacao + rand() % 99999, nome, nivel, pontuacao, idade));

	std::cout << std::endl << "Jogador cadastrado com Sucesso!" << std::endl;
	return 0;
}


int Programa::ExcluirCadastro() {
	int id;
	bool achou = false;
	std::cout << " --------------------- Excluir ---------------------" << std::endl;
	std::cout << " Digite o Identificador: ";
	std::cin >> id;
	
	bool tmp = false;
	if (m_lista.size() > 0) {
		std::vector<Jogador>::iterator aux = m_lista.begin();
		for (aux; aux < m_lista.end(); aux++) {
			if (aux->GetID() == id) {
				m_lista.erase(aux);
				std::cout << "Jogador excuido com Sucesso!" << std::endl;
				tmp = true;
				break;
			}
		}
	}
	if(!tmp){
		std::cout << "Nao foi possivel excuir o jogador!" << std::endl;
	}


	return 0;
}


int Programa::MostrarTodos() {
	std::cout << " --------------------- Mostrar Todos ---------------------" << std::endl;
	
	if(m_lista.size() > 0){
		for (int i = 0; i < m_lista.size(); i++) {
			m_lista[i].Imprimir();
		}
	}
	else{
		std::cout << "Nao ha jogadores cadastrados!" << std::endl;
	}

	return 0;
}


int Programa::MostrarUm() {
	int id;
	bool achou = false;
	std::cout << " --------------------- Procurar ---------------------" << std::endl;
	std::cout << " Digite o Identificador: ";
	std::cin >> id;
	for (int i = 0; i < m_lista.size(); i++) {
		if (id == m_lista[i].GetID()) {
			m_lista[i].Imprimir();
			achou = true;
		}
	}
	
	if (!achou) {
		std::cout << "Jogador nao encontrado!" << std::endl;
	}

	return 0;
}


