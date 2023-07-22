# alunos_POO_98
Codigo alunos em c++ antigo

O código fornecido consiste em vários arquivos fonte e cabeçalho em C++, que formam um programa para gerir um conjunto de alunos e calcular estatísticas sobre eles. O código apresenta algumas práticas consideradas obsoletas e não recomendadas em C++ moderno. Além disso, alguns erros são comuns em códigos escritos antes das versões mais recentes do C++. Algumas das características e erros que indicam uma versão anterior incluem:

Aqui estão os problemas e as recomendações para corrigi-los:

1. **Uso de "using namespace std":** O código usa "using namespace std;" em vários arquivos. É uma má prática incluir "using namespace std;" em arquivos de cabeçalho e globais, pois pode causar conflitos de nomes e dificultar a compreensão do código. É preferível utilizar o prefixo "std::" para identificar os elementos da biblioteca padrão do C++.
2. **Construtor de Alunos com interação do utilizador:** O construtor da classe "Alunos" interage com o utilizador para obter dados. Os construtores não devem realizar interações de entrada/saída ou lançar exceções. Os dados devem ser passados como argumentos ao construtor.
3. **Construtores, destrutores e métodos desnecessários:** O código tem vários construtores, destrutores e métodos que não são necessários, como o construtor "Alunos(int)" e o destrutor "~Alunos()". Essas funções podem ser eliminadas.
4. **Violação do encapsulamento:** A classe "Conjunto" deve fornecer métodos para adicionar, remover e obter alunos do conjunto. Atualmente, a lista de alunos é gerida completamente dentro da classe "Conjunto", deixando a classe "Alunos" isolada e sem utilidade real.
5. **Falta de documentação significativa:** O código não tem comentários claros que expliquem a funcionalidade das classes e métodos. A documentação adequada é importante para facilitar a compreensão e a manutenção do código.
6. **Erros na apresentação de alunos:** Os métodos "apresentaAluno(string)" e "apresentaAluno()" da classe "Alunos" têm erros no nome e na comparação de strings. Devem ser corrigidos.
7. **Métodos desnecessários em "Conjunto":** Os métodos "apresentaAlunos(string)" e "apresentaAlunos()" da classe "Conjunto" são redundantes. Pode-se ter apenas um método que apresente todos os alunos e aceite um argumento opcional para filtrar por curso.
8. **Uso incorreto de "vector" e "list":** O código utiliza a classe "vector" para armazenar alunos, mas a classe "list" não é utilizada. Além disso, o código poderia beneficiar do uso da função "std::min_element" e "std::max_element" em vez de procurar manualmente o mínimo e o máximo.
9. **Uso incorreto de 'int' em "Conjunto":** A variável 'n' na classe "Conjunto" é utilizada para guardar o tamanho do vector de alunos, mas deveria ser do tipo 'size_t' ou 'unsigned long' de acordo com o padrão do C++.
10. **Métodos sem nomenclatura representativa:** Alguns métodos têm nomes pouco representativos, o que dificulta a compreensão do seu propósito. Devem ser utilizados nomes mais descritivos para os métodos.

Com base nos problemas e práticas acima mencionados, podemos concluir que o código provavelmente foi escrito em uma versão mais antiga do C++ (C++98 ou anterior)

É importante realizar as alterações e correções mencionadas para garantir que o código siga as práticas padrão do C++ moderno e seja mais legível e fácil de manter.

link recomendado: https://www.cppstories.com/p/start-here/

