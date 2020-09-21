<h1>Exercícios de Struct em Lingaugem C </h1>
<p> Lista </p>

<p>1. Escreva um trecho de co´digo para fazer a criac¸a˜o dos novos tipos de dados conforme </p>solicitado <p>abaixo:</p>
<p>• Hora´rio: composto de hora, minutos e segundos.</p>
<p>• Data: composto de dia, meˆs e ano.</p>
<p>• Compromisso: composto de uma data, hora´rio e texto que descreve o compromisso.</p>
<p>2. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e armazene os </p>dados <p>em uma estrutura.</p>
<p>3. Construa uma estrutura aluno com nome, nu´mero de matr´ıcula e curso. Leia do usua´rio a </p><p>informac¸a˜o de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.</p>
<p>4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a </p><p>matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.</p>
<p>(a) Permita ao usua´rio entrar com os dados de 5 alunos.</p>
<p>(b) Encontre o aluno com maior nota da primeira prova.</p>
<p>(c) Encontre o aluno com maior me´dia geral.</p>
<p>(d) Encontre o aluno com menor me´dia geral</p>
<p>(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para </p>aprovac¸a˜o.
<p>5. Considerando a estrutura</p>
<p>struct Vetor{ float x; float y; float z;</p>
<p>};</p>
<p>para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.</p>
<p>6. Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: </p><p>Matricula, Nome, Co´digo da Disciplina, Nota1 e Nota2. Considere uma turma de ate´ 10 alunos. </p>Apo´s <p>ler todos os dados digitados, e depois de armazena´-los em um vetor de estrutura, exibir na </p>tela a <p>listagem final dos alunos com as suas respectivas me´dias finais (use uma me´dia </p>ponderada: Nota1 <p>com peso=1.0 e Nota2 com peso=2.0).</p>
<p>7. Fac¸a um programa que converta coordenadas polares para cartesianas:</p>
<p>Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) em radianos.</p>
<p>•</p>
<p>2</p>
<p>• Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = r ∗ cosa </p>e y <p>= r ∗ sina.</p>
<p>No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do ponto gerado </p>no <p>plano cartesiano.</p>
<p>8. Fac¸a um programa que armazene em um registro de dados (estrutura composta) os da- dos de um </p><p>funciona´rio de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, </p>Co´digo <p>do Setor onde trabalha (0-99), Cargo que ocupa (string de ate´ 30 caracteres) e Sala´rio. </p>Os dados <p>devem ser digitados pelo usua´rio, armazenados na estrutura e exibidos na tela.</p>
<p>9. Fac¸a um programa que fac¸a operac¸o˜es simples de nu´meros complexos:</p>
<p>Crie e leia dois nu´meros complexos z e w, compostos por parte real e parte ima- gina´ria.</p>
<p>Apresente a soma, subtrac¸a˜o e produto entre z e w, nessa ordem, bem como o mo´dulo de ambos.</p>
<p>10. Utilizando uma estrutura, fac¸a um programa que permita a entrada de nome, enderec¸o e </p>telefone <p>de 5 pessoas e os imprima em ordem alfabe´tica.</p>
<p>11. Fac¸a um programa que leia os dados de 10 alunos (Nome, matricula, Me´dia Final), arma- </p>zenando <p>em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos </p>aprovados e <p>o vetor dos reprovados, considerando a me´dia m´ınima para a aprovac¸a˜o como sendo 5.</p>0. Exibir na <p>tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.</p>
<p>12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe e </p>seu <p>valor) ou tipo “super trunfo” (cada carta possui um conjunto de atributos). Implemente a </p>parte de <p>distribuic¸a˜o (sorteio) de cartas para 2 jogadores, considerando que cada jogador ira´ </p>receber 5 <p>cartas. Exiba na tela as cartas que cada um dos jogadores recebeu.</p>
<p>13. Pec¸a ao usua´rio para digitar seus dados pessoais (Nome, Enderec¸o, Data de Nasci- mento, </p><p>Cidade, CEP, email), verifique se as informac¸o˜es de Data de Nascimento, CEP e email fazem </p>sentido, <p>e mostre ao usua´rio as informac¸o˜es, se esta˜o todas corretas, ou mostre que alguma </p>informac¸a˜o <p>estava errada.</p>
<p>14. Fac¸a um programa que leia um vetor com os dados de 5 carros: marca (ma´ximo 15 letras), ano </p>e <p>prec¸o. Leia um valor p e mostre as informac¸o˜es de todos os carros com prec¸o menor que p. </p>Repita <p>este processo ate´ que seja lido um valor p = 0.</p>
<p>15. Fac¸a um programa que leia um vetor com dados de 5 livros: t´ıtulo (ma´ximo 30 letras), autor </p><p>(ma´ximo 15 letras) e ano. Procure um livro por t´ıtulo, perguntando ao usua´rio qual t´ıtulo </p>deseja <p>buscar. Mostre os dados de todos os livros encontrados.</p>
<p>16. Fac¸a um programa que seja uma agenda de compromissos e:</p>
<p>Crie e leia um vetor de 5 estruturas de dados com: compromisso (ma´ximo 60 letras) e data. A data </p><p>deve ser outra estrutura de dados contendo dia, meˆs e ano.</p>
<p>Leia dois inteiros M e A e mostre todos os compromissos do meˆs M do ano A. Repita o procedimento </p><p>ate´ ler M = 0.</p>
<p>17. Fac¸a um programa que controla o consumo de energia dos eletrodome´sticos de uma casa e:</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>3</p>
<p>Crie e leia 5 eletrodome´sticos que conte´m nome (ma´ximo 15 letras), poteˆncia (real, em kW) e </p><p>tempo ativo por dia (real, em horas).</p>
<p>Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada </p><p>eletrodome´stico (consumo/consumo total) nesse per´ıodo de tempo. Apresente este u´ltimo dado em </p><p>porcentagem.</p>
<p>18. Fac¸a um programa que gerencie o estoque de um mercado e:</p>
<p>Crie e leia um vetor de 5 produtos, com os dados: co´digo (inteiro), nome (ma´ximo 15 letras), </p><p>prec¸o e quantidade.</p>
<p>Leia um pedido, composto por um co´digo de produto e a quantidade. Localize este co´digo no vetor </p>e, <p>se houver quantidade suficiente para atender ao pedido integralmente, atualize o estoque e </p>informe o <p>usua´rio. Repita este processo ate´ ler um co´digo igual a zero.</p>
<p>Se por algum motivo na˜o for poss´ıvel atender ao pedido, mostre uma mensagem infor- mando qual </p>erro <p>ocorreu.</p>
<p>19. Fac¸a um programa que controle o fluxo de voˆos nos aeroportos de um pa´ıs. Com V = 5</p>
<p>(voˆos) e A = 5 (aeroportos) e:</p>
<p>Crie e leia um vetor de voos, sendo que cada voo conte´m um co´digo de aeroporto de origem e um </p>de <p>destino.</p>
<p>Crie um vetor de aeroportos, sendo que cada aeroporto conte´m seu co´digo, quanti- dade de voos </p>que <p>saem e quantidade de voos que chegam.</p>
<p>Nota: Cada aeroporto e´ identificado por um co´digo inteiro entre 0 e (A-1). Na˜o aceite</p>
<p>aeroportos de co´digo inexistente.</p>
<p>20. Fac¸a um programa para armazenar um livro de receitas e:</p>
<p>Crie um vetor de 5 receitas, que deve ter nome (ma´ximo 25 letras), quantidade de ingredientes e </p><p>ingredientes.</p>
<p>Para cada receita, leia seu nome e a quantidade de ingredientes. Enta˜o crie e leia o vetor de </p><p>ingredientes, sendo que cada ingrediente conte´m nome e quantidade.</p>
<p>Procure receita por nome, mostrando seus ingredientes se encontrar. Se na˜o en- contrar, informe </p>ao <p>usua´rio. Repita o processo ate´ digitar uma string vazia.</p>
<p>21. Fac¸a um programa que armazena filmes produzidos por va´rios diretores e:</p>
<p>• Crie e leia um vetor de 5 diretores, cada um contendo nome (ma´ximo 20 letras),</p>
<p>quantidade de filmes e filmes. O membro filmes e´ um vetor, que deve ser criado</p>
<p>apo´s ter lido quantidade de filmes. Cada filme e´ composto por nome, ano e durac¸a˜o. Procure um </p><p>diretor por nome, mostrando todos os filmes que ele ja´ produziu. Repita o processo ate´ digitar </p>uma <p>string vazia.</p>
<p>22. Definir a estrutura cuja representac¸a˜o gra´fica e´ dada a seguir, definir os campos com os </p><p>tipos ba´sicos necessa´rios.</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>•</p>
<p>4</p>
<p>(a) Crie um vetor Cadastro com 5 elementos.</p>
<p>(b) Permita ao usua´rio entrar com dados para preencher esse 5 cadastros.</p>
<p>(c) Encontre a pessoa com maior idade entre os cadastrados</p>
<p>(d) Encontre as pessoas do sexo masculino</p>
<p>(e) Encontre as pessoas com sala´rio maior que 1000.</p>
<p>(f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usua´rio</p>
<p>23. Escreva um programa que receba dois structs do tipo dma, cada um representando uma data </p>va´lida, <p>e calcule o nu´mero de dias que decorreram entre as duas datas.</p>
<p>struct dma {</p>
<p>int dia; int mes; int ano;</p>
<p>};</p>
<p>24. Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os </p><p>seguintes dados:</p>
<p>• Nome</p>
<p>• E-mail</p>
<p>Enderec¸o (contendo campos para Rua, nu´mero, complemento, bairro, cep, cidade, estado, pa´ıs).</p>
<p>• Telefone (contendo campo para DDD e nu´mero)</p>
<p>• Data de aniversa´rio (contendo campo para dia, meˆs, ano).</p>
<p>• Observac¸o˜es: Uma linha (string) para alguma observac¸a˜o especial.</p>
<p>(a) Definir a estrutura acima.</p>
<p>(b) Declarar a varia´vel agenda (vetor) com capacidade de agendar ate´ 100 nomes.</p>
<p>(c) Definir um bloco de instruc¸o˜es busca por primeiro nome: Imprime os dados da pessoa com esse </p><p>nome (se tiver mais de uma pessoa, imprime para todas).</p>
<p>(d) Definir um bloco de instruc¸o˜es busca por meˆs de aniversa´rio: Imprime os dados de todas as </p><p>pessoas que fazem aniversa´rio nesse meˆs.</p>
<p>(e) Definir um bloco de instruc¸o˜es busca por dia e meˆs de aniversa´rio: Imprime os dados de </p>todas <p>as pessoas que fazem aniversa´rio nesse dia e meˆs.</p>
<p>(f) Definir um bloco de instruc¸o˜es insere pessoa: Insere por ordem alfabe´tica de nome.</p>
<p>(g) Definir um bloco de instruc¸o˜es retira pessoa: Retira todos os dados dessa pessoa e desloca </p><p>todos os elementos seguintes do vetor para a posic¸a˜o anterior.</p>
<p>(h) Definir um bloco de instruc¸o˜es imprime agenda com as opc¸o˜es:</p>
<p>• Imprime nome, telefone e e-mail.</p>
<p>• Imprime todos os dados.</p>
<p>(i) O programa deve ter um menu principal oferecendo as opc¸o˜es acima.</p>
