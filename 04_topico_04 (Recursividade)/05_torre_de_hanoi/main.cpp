#include <iostream>
#include <string>
using namespace std;

void solucaoHanoi(int n, char ori = 'A', char aux = 'B', char des = 'C'){
  if(n > 0){
    solucaoHanoi(n - 1, ori, des, aux);
    cout << ori << " -> " << des << "\n";
    solucaoHanoi(n - 1, aux, ori, des);
  }
}

int main(){
  int n_discos = 0;
  cin >> n_discos;
  
  solucaoHanoi(n_discos);
  
  return 0;
}

/*
  Solução baseada nas explicações:
  https://www.youtube.com/watch?v=2OxEjrzWq6g
  https://www.youtube.com/watch?v=-iA7T1AaagE
  https://www.youtube.com/watch?v=X-I53cLjidg
*/