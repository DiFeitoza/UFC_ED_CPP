#include<iostream>
using namespace std;

int contErrosFormacao(int v[3][3]){
  int cont = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 1; j < 3; j++)
      if(v[j][i] < v[j-1][i])
        cont++;
  }
  return cont;
};

void writevet(int v[3][3]){
  for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++){
      int n = 0;
      cin >> n;
      v[i][j] = n;
    }
}

void readvet(int v[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++)
      cout << v[i][j];
    cout << endl;
  }
}

int main(){
  int v[3][3];
  writevet(v);
  //readvet(v);
  cout << contErrosFormacao(v);

  return 0;
}