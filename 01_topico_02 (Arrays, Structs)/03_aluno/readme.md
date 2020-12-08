## Motivação
Considere que um registro de aluno deve conter os seguintes campos:

nome (no máximo 80 caracteres, suponha que o usuário digita apenas o primeiro nome, sem espaços)
matricula (inteiro)
disciplina (no máximo 120 caracteres, sem espaços)
nota (double)
Usando a definição acima, crie um programa que possua uma função de leitura dos valores do registro de um aluno, lidos do usuário, e outra função que receba um registro de um aluno e imprima "[Nome_Aluno] aprovado(a) em [Nome_Disciplina]" se o aluno passou por média (nota maior ou igual a 7) e "[Nome_Aluno] reprovado(a) em [Nome_Disciplina]" caso contrário.

Seu programa deve então ler os dados de um aluno usando registro e fazer uso da função que determina se o aluno foi aprovado ou não, gerando o resultado correto.

Dica para esta questão: A leitura de caracteres e strings em C++ é sempre algo complicado para iniciantes.

Um dos problemas que pode acontecer ao ler uma string, é que o buffer de leitura pode conter lixo na hora de ler a string do usuário.

Se isso ocorrer, o terminal não espera o usuário digitar a string e lê o lixo do buffer e o coloca na string. Isso geralmente causa muita confusão e horas de análise de código.

A fim de evitar esse problema, limpe o buffer após ler outros tipos de dados que não sejam string. Para isso, use a função std::cin.ignore(). Pesquise sobre ela.

### Exemplo de Entrada:
Joao
1
FUP
8.5

Exemplo de Saída:
Joao aprovado(a) em FUP

### Exemplo de Entrada:
Rufus
2
Matematica
4

#### Exemplo de Saída:
Rufus reprovado(a) em Matematica