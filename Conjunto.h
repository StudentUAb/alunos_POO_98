/*
 * Conjunto.h
 *
 *  Created on: 18 Feb 2014
 *      Author: Elizabeth Carvalho
 *  Edited on: 28 Sep 2021
 *		Edited by: Ivo
 */

#ifndef CONJUNTO_H_
#define CONJUNTO_H_

#include "Alunos.h"

// Erro, lista de includes deve estar em ordem alfabetica.
#include <list>
#include <vector>
#include <algorithm>

// erro: adicionar código ao standard library é erro grave, e o compilador
// pode nao gerar o código correspondente. Por definicao do spec ISO/IEC 14882
// adicionar codigo ao standard library é considerado *UNDEFINED BEHAVIOR*.
namespace std {

class Conjunto {
private:
	// Erro, vector deve ser chamado com 'std::' a frente, porque
	// utilizar elementos do standard library no namespace global é perigoso,
	// pois nao temos como garantir a *quantidade* de elementos que irão
	// ser colocados no namespace global.
	vector<Alunos> conjAlunos;

	// Erro. variavel 'it' não deve ser adicionada a parte 'private' da classe,
	// pois ela é uma variavel *temporaria de acesso*.
	vector<Alunos>::iterator it;

	// Erro. 'n' não deve ser utilizado de forma a guardar o tamanho do
	// vetor. o vetor já contém um método chamado .size() que tem tipo 'size_',
	// que é um unsigned long.
	int n;
public:
	// Erro. o Segundo construtor é irrelevante, poderia ter sido criado
	// apresenta *um* construtor, passando um parametro padrão, como:
	// Conjunto(int quantidade = 0);
	// Mas da forma que está, é apenas incorreto. Afinal, 'int' nao significa
	// "quantidade", falta informação do que o int se refere. Não existe
	// contrato.
	Conjunto();

	// Erro. Construtores com apenas um parametro tem que ser ou ter 'explicit'
	// como primeiro modificador.
	Conjunto(int);

	// Erro. A classe 'Conjunto' não foi feita para ser herdada, adicionar um
	// virtual no destrutor adiciona uma tabela virtual desnecessária.
	virtual ~Conjunto();
	float calculaMediaGlobal();
	void apresentaMaxMin();
	void ordenaAlunos();

	// Erro: O que o 'string' representa? nome? curso?.
	// Erro: string deve ser passada via referencia - constante, já que não
	// é utilizada.
	void apresentaAlunos(string);
	void apresentaAlunos();

	// Erro de encapsulamento: A Classe é uma litsta de Alunos, mas não existe
	// forma de adicionar, remover, ou retornar alunos. todo o acesso a alunos
	// é feito dentro da lista, deixando ela completamente isolada, e sem
	// possibilidade de uso real.
};

} /* namespace std */
#endif /* CONJUNTO_H_ */
