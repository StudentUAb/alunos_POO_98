/*
 * Alunos.cpp
 *
 *  Created on: 18 Feb 2014
 *      Author: Elizabeth Carvalho
 *  Edited on: 28 Sep 2022
 *		Edited by: Ivo
 */

#include "Alunos.h"

namespace std {

// Erro. o construtor é falivel. Construtores não podem falhar.
// Caso eu coloque um valor string em nota, ou curso, irá dar
// throw. O construtor deve receber os valores já validados
// para criar o aluno. e não pedir informações sobre o aluno
// após a criação.
Alunos::Alunos() {
	cout << "Introduza o nome do aluno:" << endl;
	cin >> nome;
	cout << "Introduza o nome do curso:" << endl;
	cin >> curso;
	cout << "Introduza o número de matrícula:" << endl;
	cin >> nMatr;
	cout << "Introduza a nota média: " << endl;
	cin >> notaM;
}

// erro: construtor desnecessario.
// erro: variavel não utilizada.
Alunos::Alunos(int op) {

}

// erro: destrutor desnecessário.
Alunos::~Alunos() {
	// TODO Auto-generated destructor stub
}


// Erro: utilize o operador == para comparação entre strings.
// erro: passando string por cópia, onde seria necessário referencia constante
// erro de responsabilidade: o aluno nao cabe a responsabilidade de validacao
// de impressao do mesmo. isso deveria estar em Lista
void Alunos::apresentaAluno(string c) {
	if (!c.compare(curso)) {
		cout << "NOME: " << nome << endl;
		cout << "CURSO: " << curso << endl;
		cout << "MATRÍCULA: " << nMatr << endl;
		cout << "NOTA MÉDIA: " << notaM << endl;
	}
}


// Erro: documentação diz 'apresenta todos os alunos', mas isso se
// refere a um aluno apenas.

// Apresenta todos os alunos
void Alunos::apresentaAluno() {
	cout << "NOME: " << nome << endl;
	cout << "CURSO: " << curso << endl;
	cout << "MATRÍCULA: " << nMatr << endl;
	cout << "NOTA MÉDIA: " << notaM << endl;
}

// erro. namespace std.
} /* namespace std */
