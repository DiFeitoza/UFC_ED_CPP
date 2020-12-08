#include <iostream>
#include <iomanip>
#include <sstream>

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

string compareAluno(Aluno alu1, Aluno alu2){
  stringstream ss;
  ss << setprecision(1) << fixed;
  
  if(alu1.nota > alu2.nota )
    ss << alu1.nome << " , " << alu1.nota;
  else if(alu2.nota > alu1.nota)
    ss << alu2.nome << " , " << alu2.nota;
  else
    ss << alu1.nome << " e " << alu2.nome << " , " << alu1.nota;
  return ss.str();
}

int main(){
  Aluno aluno1, aluno2;
  aluno1 = createAluno();
  aluno2 = createAluno();

  cout << compareAluno(aluno1, aluno2);
  return 0;
}