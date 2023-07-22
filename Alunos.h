/*
 * Alunos.h
 *
 *  Created on: 18 Feb 2014
 *      Author: Elizabeth Carvalho
 *  Edited on: 28 Sep 2022
 *		Edited by: Ivo
 */

#ifndef ALUNOS_H_
#define ALUNOS_H_

// Erro. iostream nao esta sendo utilizado nesse codigo.
#include <iostream>

// Erro. std::string nao esta incluido nesse codigo.

// Erro, namespace std nao deve ser extendido pelo usuario.
namespace std {

class Alunos {
private:
	// erro, buraco de memoria entre nome e nMatr e Curso.
	// erro. falta std:: antes de string.
	// erro, falta identificador de variaveis privadas - geralmente m_ ou _,
	string nome;
	int nMatr;
	string curso;
	float notaM;

public:
	// erro. dois construtores sem motivo.
	// erro, construtor com um parametro sem ser marcado explicit
	// erro, 'int' nao indica qual o nome da variavel que ira setar. 
	// seria a idade do aluno? o numero de matricula? a nota?
	Alunos();
	Alunos(int);

	// erro, virtual desnecessario. isso cria uma tabela virtual.
	virtual ~Alunos();

	// erro. falta std::
	// erro. falta o nome representativo da varaivel. o que seria o string?
	// nome? curso?
	// erro. dois metodos de forma desnecessaria, utilize um metodo com valor
	// padrão de string vazia.
	void apresentaAluno(string);
	void apresentaAluno();

	int getMatricula() const { return nMatr; };
	float getNotaM() { return notaM; };
	string getNome() { return nome; };
	string getCurso() { return curso; };

	// erro de orientação a objeto e encapsulamento.
	//matricula é um valor fixo por usuario, não pode ter um set.
	void setMatricula(int m) { nMatr = m; };
	void setNotaM(float n) { notaM = n; };

	// erro de orientação a objeto e encapsulamento.
	//matricula é um valor fixo por usuario, não pode ter um set.
	void setNome(string n) { nome = n; };
	void setCurso(string c) { curso = c; };

	// Operador a ser utilizado pelo método sort no vector
	bool operator < (const Alunos& a) const {  return (nMatr < a.nMatr); };
};

} /* namespace std */
#endif /* ALUNOS_H_ */
