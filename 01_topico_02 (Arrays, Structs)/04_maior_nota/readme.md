## Motivação
Considere que um registro de aluno deve conter os seguintes campos:

- nome (no máximo 100 caracteres, suponha que o usuário digita apenas o primeiro nome, sem espaços)
- matricula (inteiro)
- disciplina (no máximo 120 caracteres, sem espaços)
- nota (double)
Usando a definição acima, crie um programa que possua uma função de leitura dos valores de registro de aluno, lidos do usuário, e outra função que receba dois registros de aluno e imprima a maior nota dentre as notas dos dois alunos e o nome do aluno correspondente.

Seu programa deve então ler os valores dos registros dos dois alunos e fazer uso da função que imprime o nome do aluno e a maior nota. Caso os dois alunos possuam a mesma nota, deve-se imprimir o nome dos dois alunos separados pela conjunção "e".

Dica para esta questão: A leitura de caracteres e strings em C++ é sempre algo complicado para iniciantes.

Um dos problemas que pode acontecer ao ler uma string, é que o buffer de leitura pode conter lixo na hora de ler a string do usuário.

Se isso ocorrer, o terminal não espera o usuário digitar a string e lê o lixo do buffer e o coloca na string. Isso geralmente causa muita confusão e horas de análise de código.

A fim de evitar esse problema, limpe o buffer após ler outros tipos de dados que não sejam string. Para isso, use a função std::cin.ignore(). Pesquise sobre ela.

Dica 2: Preste atenção à formatação dos dados na saída e certifique-se de que seu programa imprime a saída como exigido pelo Moodle.

Qualquer discrepância entre a saída do seu programa e a saída esperada pelo Moodle, faz com que o Moodle avalie com ZERO o seu programa.

### Exemplo de Entrada:
Joao
1
FUP
10
Maria
2
FUP
8.5

### Exemplo de Saída:
Joao , 10.0

### Exemplo de Entrada:
Rufus
3
Matematica
4
Maria
4
Matematica
8

### Exemplo de Saída:
Maria , 8.0


### Exemplo de Entrada:
Rufus
3
Matematica
4
Carlos
5
Matematica
4

### Exemplo de Saída:
Rufus e Carlos , 4.0