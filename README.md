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

Relatorio feito em 2022 para melhorar o ensino de c++

Com toda humildade partilho as minhas pesquisas, sem intenção de ser mal-interpretado, nem criar hostilidades, pois verifiquei o seguinte, o IDE Eclipse que me foi recomendado, não devia ser utilizado para C ou C++, não é muito User Friendly a meu ver:

Os que merecem em meu entender por ordem de usuários são:
-Clion da jetBrians, que conseguimos instalar com o mail de estudante 
-Visual Studio
-QtCreator para mim o melhor de todos e foi o que utilizei para fazer o EfolioA

Outros que não são IDE ́s, mas merecem ser comentados, tais como: 
-Kate
-Atom
-Visual Studio Code
Os que em minha opinião nunca deveriam ser usados, para C++: 
Code::Blocks
DevC++
FalconC++
NetBeans

O motivo de *não* os usar, é que não tem desenvolvimento ativo e não acompanham as novas versões do C++
O QtCreator deveria ser adotado nas faculdades, por ser uma IDE gratuita *e* atual.
Também notei nas respostas das atividades, o C++ ensinado aqui neste codigo é de 98 ou pelo menos no programa:
https://en.wikipedia.org/wiki/C%2B%2B11

O C++ moderno começou em 2011, (—std=c++11), atualmente está na versão 2020 (—std=c++20).
As versões de C++ moderno são 2011, 2014, 2017, 2020
https://en.wikipedia.org/wiki/C%2B%2B14 https://en.wikipedia.org/wiki/C%2B%2B17 https://en.wikipedia.org/wiki/C%2B%2B20 Próxima versão sairá o ano que vem, em 2023.

Atenção que estas diferentes versões, tem melhorias incrementais, e o código antigo continua funcionando, (o código de 1998).
O problema no código nas respostas, para mim está errado, talvez utilizem a versão de 98, por ser compatível com todos os IDE’s, mas o que verifiquei, é que foi recomendada a instalação do mingw, que suporta o C++20, então me pergunto, porque continuar a ensinar C++ de 98, algo que ninguém utiliza mais? O Mac também suporta e Linux também suporta os mais recentes, o C++ é uma linguagem de 24 anos, casada e com filhos.
C++11 já tem 11 anos, é tempo suficiente, na minha humilde opinião, para as empresas, faculdades e tudo se adaptarem.

Na Resposta a este codigo é utlizado de forma errada o namespace std, verifiquei que é proibido pela especificação do C++ adicionar código no namespace std, podem ver aqui no site oficial:
https://en.cppreference.com/w/cpp/language/extending_std
“Adding declarations to std
It is undefined behavior to add declarations or definitions to namespace std”
adicionar código ao standard library é erro grave, e o compilador pode não gerar o código correspondente. Por definição do spec ISO/IEC 14882 adicionar código ao standard library é considerado *UNDEFINED BEHAVIOR*.
namespace std { eu não utilizo no meu código
Baseado nisto estive a ver o porque, using namespace std; é considerado uma
má pratica, deixo aqui um link atualizado:
https://stackoverflow.com/questions/1452721/why-is-using-namespace-std- considered-bad-practice

Tem outros erros a meu ver não deviam ser utlizados dessa forma, por exemplo na class Alunos, buraco de memoria entre nome e nMatr e Curso, falta std antes de string e falta identificador de variáveis privadas geralmente m_ ou _, isto são boas praticas que estive a verificar, entre outros erros como destrutores desnecessários e std::' na frente no vector, porque utilizar elementos do standard library no namespace global é perigoso, pois não tem como garantir a *quantidade* de elementos que irão ser colocados no namespace global, o construtor Alunos::Alunos() {} é falível, a meu ver os construtores não podem falhar, no caso que eu coloque um valor string em nota, ou curso, irá dar throw, o construtor deve receber os valores já validados para criar o aluno e não pedir informações sobre o aluno após a criação.

Também verifiquei que o for por exemplo, em C++ moderno, se pode fazer mais simples, de seguida um exemplo dos dois for:
// For mais moderno
for (const auto& valoratual : m_atividades){
         valoratual.imprime();
     }
//for moderno que le o índices é igual ao for comum embaixo
for (int i=0; i < m_atividades.size();i++){ const auto& valoratual=m_atividades[i]; valoratual.imprime();
}
Depois de ler e verificar tanta coisa, decidi fazer meu programa com QtCreator, e tentar colocar boas praticas, foi feito no mac, e compilado com o Clang que fornece um front-end da linguagem e infraestrutura da ferramentas para linguagens da família C(C, C++, Obejtictive C/C++, OpenCL, CUDA, e RenderScript)
segue o link do meu exemplo:
https://github.com/StudentUAb/alunos_POO

