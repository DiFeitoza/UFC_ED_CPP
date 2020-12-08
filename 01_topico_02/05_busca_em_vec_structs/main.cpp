#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;

struct Aluno {
  string nome;
  int matricula;
  float media;
};

vector<Aluno> createVecAlunos(int tam){
  vector<Aluno> vecAlunos;
  string str;
  stringstream ss;

  for(int i = 0; i < tam; i++){
    Aluno alu;
    cin >> alu.matricula;

    cin.ignore();
    getline(cin, str);
    alu.nome = str;

    cin >> alu.media;
    vecAlunos.push_back(alu);
  }
  return vecAlunos;
}

string findAluByMatricula(vector<Aluno> vecAlunos, int m){
  stringstream ss;
  for(auto it : vecAlunos){
    if(it.matricula == m){
      ss << setprecision(1) << fixed;
      ss << it.nome << "\n" << it.media;
      return ss.str();
    }
  }
  return "NAO ENCONTRADA";
}

int main(){
  vector<Aluno> vecAlunos;
  int tam = 0, m = 0;

  cin >> tam;
  cin.ignore();
  vecAlunos = createVecAlunos(tam);

  cin >> m;
  cin.ignore();
  cout << findAluByMatricula(vecAlunos, m);

  return 0;
}