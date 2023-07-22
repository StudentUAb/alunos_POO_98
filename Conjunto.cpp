/*
 * Conjunto.cpp
 *
 *  Created on: 18 Feb 2014
 *      Author: Elizabeth Carvalho
 *  Edited on: 28 Sep 2022
 *		Edited by: Ivo
 */

#include "Conjunto.h"

// Erro, novamente, namespace std não deve ser utilizado para código do
// programador, apenas para a biblioteca padrão.
namespace std {

// Erro: Construtor desnecessário.
Conjunto::Conjunto() {
	// TODO Auto-generated constructor stub

}

// Erro, construtor desnecessário.
// Erro de Orientação a Objetos: Criação de alunos vazios populando uma lista
// Erro de API do C++. ao se criar um elemento na lista, o emplace_back
// deve ser usado, e o push_back deve ser usado apenas para mover objetos
// já existentes.
Conjunto::Conjunto(int n) {
	this->n = n;
	for (int i = 0; i < n; ++ i) conjAlunos.push_back(Alunos());
}

// Erro: destrutor desnecessário.
Conjunto::~Conjunto() {
	// TODO Auto-generated destructor stub
}


void Conjunto::apresentaMaxMin() {
	// Erro. Utilize std::min_element para ler o menor elemento de um array.
	// Erro. Utilize std::max_element para ler o maior elemento de um array.
	float maior = 0, menor = 20;

	// Caso ignoremos a utilizacao do std::min_element ou std::max_element,
	// ainda assim, contem erro. o range-based-for deveria ter sido utilizado.
	// for (const auto& aluno : conjAlunos) {  ... }
	for (it = conjAlunos.begin(); it != conjAlunos.end(); it++) {
		if ((*it).getNotaM() < menor) menor = (*it).getNotaM();
		if ((*it).getNotaM() > maior) maior = (*it).getNotaM();
	}

	// Erro: cout e endl estao no namespace std, entao, std:: para acessar.
	cout << "MAIOR NOTA: " << maior << endl;
	cout << "MENOR NOTA: " << menor << endl;
}

// Calcula a média global das notas do conjunto de alunos
float Conjunto::calculaMediaGlobal(){
	float media = 0;

	// Erro: Range-based-for.
	for (it = conjAlunos.begin(); it != conjAlunos.end(); it++) media = media + (*it).getNotaM();

	return (media/n);
}

void Conjunto::ordenaAlunos () {
	// Erro: std::
	sort(conjAlunos.begin(), conjAlunos.end());
}

// Erro: 'c' nao representa nada. nao sei se vai apresentar por nome, curso
void Conjunto::apresentaAlunos(string c) {

	// Erro: range-based-for.
	for (it = conjAlunos.begin(); it != conjAlunos.end(); it++) (*it).apresentaAluno(c);
}

// Apresenta todos os alunos
// Erro: metodo desnecessario, utilizar apenas um metodo com uma string vazia
// como padrao.
void Conjunto::apresentaAlunos() {
	for (it = conjAlunos.begin(); it != conjAlunos.end(); it++) (*it).apresentaAluno();
}

} /* namespace std */
