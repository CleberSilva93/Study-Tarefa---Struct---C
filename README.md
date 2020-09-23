<h1>Exercícios de Struct em Linguagem C </h1>
<p> Lista </p>
<h2> Exercícios: Structs </h2>
<br/>
<p>1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:</p>
<p>• Horário: composto de hora, minutos e segundos.</p>
<p>• Data: composto de dia, mês e ano.</p>
<p>• Compromisso: composto de uma data, horário e texto que descreve o compromisso.</p>
<br/>
<br/>
<p>2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.</P>
<br/>
<br/>
<p>3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.</p>
<br/>
<br/>
<p>4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.</p>
<p>(a) Permita ao usuário entrar com os dados de 5 alunos.</p>
<p>(b) Encontre o aluno com maior nota da primeira prova.</p>
<p>(c) Encontre o aluno com maior média geral.</p>
<p>(d) Encontre o aluno com menor média geral</p>
<p>(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.</p>
<br/>
<br/>
<p>5. Considerando a estrutura

struct Vetor{ float x; float y; float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.
</p>
<br/>
<br/>
<p>6. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até´ 10 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).</p>
<br/>
<br/>
<p>7. Faça um programa que converta coordenadas polares para cartesianas:</p>
<p>• Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) em radianos.</p>

<p>• Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = r ∗ cosa e y = r ∗ sina.</p>
<p>No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do ponto gerado no plano cartesiano.</P>
<br/>
<br/>
<p>8. Faça um programa que armazene em um registro de dados (estrutura composta) os da- dos de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até´ 30 caracteres) e Salario. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.</p>
<br/>
<br/>
<p>9. Faça um programa que faca operações simples de números complexos:</p>

<p>• Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária.</p>
<p>• Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo de ambos.</p>
<br/>
<br/>
<p>
10. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e telefone de 5 pessoas e os imprima em ordem alfabética.</p>
<br/>
<br/>
<p>11. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), arma- zerando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.</p>
<br/>
<br/>
<p>12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor) ou tipo “super trunfo” (cada carta possui um conjunto de atributos). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores, considerando que cada jogador irá´ receber 5 cartas. Exiba na tela as cartas que cada um dos jogadores recebeu.</p>
<br/>
<br/>
<p>13. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nasci- mento, Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma informação estava errada.</p>
<br/>
<br/>
<p>14. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo até´ que seja lido um valor p = 0.</p>
<br/>
<br/>
<p>15. Faça um programa que leia um vetor com dados de 5 livros: t´título (máximo 30 letras), autor (máximo 15 letras) e ano. Procure um livro por t´título, perguntando ao usuário qual t´título deseja buscar. Mostre os dados de todos os livros encontrados.</p>
<br/>
<br/>
<p>16. Faça um programa que seja uma agenda de compromissos e:</p>
<p>• Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano.</p>
<p>• Leia dois inteiros M e A e
mostre todos os compromissos do mês M do ano A. Repita o procedimento até´ ler M = 0.</p>
<br/>
<br/>
<p>17. Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
<p>• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potencia (real, em kW) e tempo ativo por dia (real, em horas).</p>

<p>• Leia um tempo t (em dia), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.
</p>

<p>
<br/>
<br/>
18. Faça um programa que gerencie o estoque de um mercado e:</p>

<p>• Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15 letras), preço e quantidade.</P>

<p>• Leia um pedido, composto por um código de produto e a quantidade. Localize este código no vetor e, se houver quantidade suficiente para atender ao pedido integralmente, atualize o estoque e informe o usuário. Repita este processo até´ ler um código igual a zero.</p>

<p>•Se por algum motivo não for possível atender ao pedido, mostre uma mensagem informa- mando qual erro ocorreu.</p>
<br/>
<br/>
<p>19. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5

(voos) e A = 5 (aeroportos) e:</p>

<p>• Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de origem e um de destino.</p>

<p>• Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade de voos que saem e quantidade de voos que chegam.</p>

<p>• Nota: Cada aeroporto éidentificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.</p>
<p>
<br/>
<br/>
20. Faça um programa para armazenar um livro de receitas e:</p>

<p>• Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de ingredientes e ingredientes.</p>

<p>• Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor de ingredientes, sendo que cada ingrediente contém nome e quantidade.</p>

<p>• Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, informe ao usuário. Repita o processo até´ digitar uma string vazia.</p>

<br/>
<br/>
<p>21. Faça um programa que armazena filmes produzidos por vários diretores e:</p>
<p>• crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado
após ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração. Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o processo até digitar uma string vazia.
</p>
<br/>
<br/>
<p>22. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os tipos básicos necessários.</p>
	<p>(a) Crie um vetor Cadastro com 5 elementos.</p>
	<p>(b) Permita ao usuário entrar com dados para preencher esses 5 cadastros.</p>
	<p>(c) Encontre a pessoa com maior idade entre os cadastrados</p>
	<p>(d) Encontre as pessoas do sexo masculino</p>
	<p>(e) Encontre as pessoas com salário maior que 1000.</p>
	<p>(f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário</p>
<br/>
<br/>
<p>23. Escreva um programa que receba dois structs do tipo dma, cada um representando uma data valida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
int dia; int mes; int ano;
};
</p>
<br/>
<br/>
<p>24. Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os seguintes dados:</p>
<p>• Nome</p>
<p>• E-mail</p>
<p>• Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade, estado, país).</p>
<p>• Telefone (contendo campo para DDD e número) • imprime nome, telefone e e-mail.</p>
<p>• Imprime todos os dados.</p>
<p>• Data de aniversário (contendo campo para dia, mês, ano).</p>
<p>• Observações: Uma linha (string) para alguma observação especial.</p>

<p>(a) Definir a estrutura acima.</p>
<p>(b) Declarar a variável agenda (vetor) com capacidade de agendar até´ 100 nomes.</p>
<p>(c) Definir um bloco de instruções busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).</p>
<p>(d) Definir um bloco de instruções busca por mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse mês.</p>
<p>(e) Definir um bloco de instruções busca por dia e mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse dia e mês.</p>
<p>(f) Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de nome.</p>
<p>(g) Definir um bloco de instruções retira pessoa: Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posição anterior.</p>
<p>(h) Definir um bloco de instruções imprime agenda com as opções:</p>
<p>(i) O programa deve ter um menu principal oferecendo as opções acima.</p>


