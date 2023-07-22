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

// Erro. o construtor � falivel. Construtores n�o podem falhar.
// Caso eu coloque um valor string em nota, ou curso, ir� dar
// throw. O construtor deve receber os valores j� validados
// para criar o aluno. e n�o pedir informa��es sobre o aluno
// ap�s a cria��o.
Alunos::Alunos() {
	cout << "Introduza o nome do aluno:" << endl;
	cin >> nome;
	cout << "Introduza o nome do curso:" << endl;
	cin >> curso;
	cout << "Introduza o n�mero de matr�cula:" << endl;
	cin >> nMatr;
	cout << "Introduza a nota m�dia: " << endl;
	cin >> notaM;
}

// erro: construtor desnecessario.
// erro: variavel n�o utilizada.
Alunos::Alunos(int op) {

}

// erro: destrutor desnecess�rio.
Alunos::~Alunos() {
	// TODO Auto-generated destructor stub
}


// Erro: utilize o operador == para compara��o entre strings.
// erro: passando string por c�pia, onde seria necess�rio referencia constante
// erro de responsabilidade: o aluno nao cabe a responsabilidade de validacao
// de impressao do mesmo. isso deveria estar em Lista
void Alunos::apresentaAluno(string c) {
	if (!c.compare(curso)) {
		cout << "NOME: " << nome << endl;
		cout << "CURSO: " << curso << endl;
		cout << "MATR�CULA: " << nMatr << endl;
		cout << "NOTA M�DIA: " << notaM << endl;
	}
}


// Erro: documenta��o diz 'apresenta todos os alunos', mas isso se
// refere a um aluno apenas.

// Apresenta todos os alunos
void Alunos::apresentaAluno() {
	cout << "NOME: " << nome << endl;
	cout << "CURSO: " << curso << endl;
	cout << "MATR�CULA: " << nMatr << endl;
	cout << "NOTA M�DIA: " << notaM << endl;
}

// erro. namespace std.
} /* namespace std */
