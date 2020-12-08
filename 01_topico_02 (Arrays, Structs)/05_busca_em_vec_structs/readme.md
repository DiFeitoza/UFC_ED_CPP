## Motivação
Crie uma estrutura 'aluno' contendo os seguintes campos:

- matrícula (inteiro),
- nome completo (máximo de 100 caracteres, que podem incluir espaços), e
- média do aluno (float ou double).
- Leia um vetor de alunos e uma matrícula m, e em seguida percorra o vetor de alunos procurando o primeiro aluno que possui matrícula igual a m. Ao encontrar o aluno com matrícula m, imprima o nome e a média do aluno. Se nenhum aluno tem matrícula m, imprima "NAO ENCONTRADA".

Dica: O comando std::cin não lê arrays de caracteres (C-style strings) corretamente. Por exemplo, se a string tiver espaços em branco, ele só lê até o primeiro espaço e descarta todo o restante. Isso pode causar diversos erros na leitura e resultados inesperados na saída. A fim de ler arrays de caracteres (incluindo espaços) corretamente em C++, use o comando std::cin.get(). Pesquise sobre este comando.

### Entrada:

- Linha 1: número de alunos no vetor de alunos.
- 3 linhas para cada aluno no vetor, contendo na 1a a matrícula, na 2a o nome, e na 3a a média.
- Última linha: matrícula a ser localizada no vetor.

Saída:

- Linha 1: nome do primeiro aluno encontrado cuja matrícula é igual à matrícula fornecida na última linha da entrada, ou "NAO ENCONTRADA" caso nenhum aluno tenha esta matrícula.
- Linha 2: Média do aluno encontrado (caso algum tenha a matrícula sendo buscada).

### Exemplo:
<<
4
5
Joao da Silva
2.5
3
Maria dos Santos
8.2
8
Jose de Souza
7
2
Ana Lima
3.3
8

>>
Jose de Souza
7.0