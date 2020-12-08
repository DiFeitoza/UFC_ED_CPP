#include <iostream>
#include <string>

using namespace std;

struct Aluno {
  char nome[80];
  int matricula;
  char disciplina[120];
  double nota;
};

Aluno createAluno(){
  Aluno aluno;
  cin >> aluno.nome;
  cin >> aluno.matricula;
  cin >> aluno.disciplina;
  cin >> aluno.nota;
  return aluno;
}

string readAluno(Aluno alu){
  string resultado = " reprovado(a) em ";
  if(alu.nota >= 7 )
    resultado = " aprovado(a) em ";
  return string(alu.nome) + resultado + alu.disciplina;
}

int main(){
  Aluno aluno;
  aluno = createAluno();
  cout << readAluno(aluno);
  return 0;
}