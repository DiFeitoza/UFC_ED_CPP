#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct aluno {
   int matricula;
   char nome[50];
   float media;
};

aluno le_aluno() {
   aluno a;
   cin >> a.matricula;
   cin.ignore(); // lê e descarta o caractere '\n' do buffer 
   cin.get(a.nome, 50);
   cin >> a.media;
   return a;
}

/* 
Recebe vetor de alunos e novo aluno, e insere o novo aluno no final do vetor.
- v: vetor de alunos
- n: tamanho do vetor de alunos (passado por referência)
- novo: novo aluno a ser inserido no final do vetor.

Pseudocódigo:
   altere o tamanho do vetor v para conter *n+1 elementos,
   pondo endereço em v
   se não conseguir alocar (v == 0) imprima msg de erro e retorne 0
   coloque o aluno 'novo' na última posição do vetor (posição *n)
   aumente em 1 o tamanho do vetor (incrementar *n)
   retorne v
*/
aluno* insere_aluno(aluno* vetA, int* n, aluno a) {
   *n += 1;
   aluno* vetA2 = new (nothrow) aluno [*n];

   if(vetA2 == 0){
      cout << "Memória insuficiênte";
      return 0;
   }

   aluno* novo = new aluno {a};

   for(int i = 0; i < *n - 1; i++){
      vetA2[i] = vetA[i];
   }

   vetA2[*n - 1] = *novo;

   delete [] vetA;
   vetA = vetA2;

   return vetA;
}

/*
Recebe vetor de alunos, e retira do vetor o primeiro aluno com matrícula igual à
matrícula passada como parâmetro.
- vetA: vetor de alunos
- n: tamanho do vetor de alunos (passado por referência)
- matricula: matrícula do aluno a ser removido.

Pseudocódigo:
   para i de 0 até o tamanho do vetor menos 1
      se a matrícula do i-ésimo elemento do vetor é igual à 'matrícula' passada como parâmetro
         copie último elemento do vetor para a posição i
         realoque vetor para conter um elemento a menos, pondo endereço em v
         se não for possível realocar, imprima mensagem de erro e retorne
         reduza em 1 o tamanho do vetor (decrementar *n)
         break
         retorne o endereço de memória do vetor realocado
*/
aluno* remove_aluno(aluno* vetA, int* n, int matricula) {
   aluno* vetA2 = new (nothrow) aluno [*n - 1];

   if(vetA2 == 0){
      cout << "Memória insuficiênte";
      return 0;
   }

   for(int i = 0; i < *n; i++){
      if(vetA[i].matricula == matricula){
         vetA[i] = vetA[*n - 1];
         
         for(int i = 0; i < *n - 1; i++){
            vetA2[i] = vetA[i];
         }

         delete [] vetA;

         vetA = vetA2;
         *n -= 1;
         return vetA;
      }
   }
   cout << "Aluno nao encontrado";
   return 0;
}

int main() {
   int num_oper = 0, i;
   int n = 0;

   cin >> num_oper; //numero de operacoes de entrada

   aluno* vetA = new aluno [1];

   for(i = 0; i < num_oper; i++) {
      cin.ignore(); // lê e descarta o caractere '\n' do buffer 
      char oper;
      cin >> oper;
      if(oper == 'i') {
         aluno a = le_aluno();
         vetA = insere_aluno(vetA, &n, a);
      } else if(oper == 'r') {
         int mat;
         cin >> mat;
         vetA = remove_aluno(vetA, &n, mat);
      } else {
         cout << "digite um valor válido, 'i' ou 'r'"; 
      }
   }

   for(i = 0; i < n; i++){
      cout
         << vetA[i].matricula << "\n"
         << vetA[i].nome << "\n"
         << fixed << setprecision(1)
         << vetA[i].media << "\n";
   }

   delete [] vetA;
   return 0;
}