#include<iostream>
using namespace std;

int magicValue(int v[3][3]){
  int sum = 0;
  for(int i = 0; i < 3; i++)
    sum += v[i][i];
  return sum;
}

bool testLines(int v[3][3], int magicVal){
  for(int i = 0; i < 3; i++){
    int sum = 0;
    for(int j = 0; j < 3; j++)
      sum += v[i][j];
    if(sum != magicVal) return false;
  }
  return true;
};

bool testColumns(int v[3][3], int magicVal){
  for(int i = 0; i < 3; i++){
    int sum = 0;
    for(int j = 0; j < 3; j++)
      sum += v[j][i];
    if(sum != magicVal) return false;
  }
  return true;
};

bool testDiagX(int v[3][3], int magicVal){
  int sum = 0;
  for(int i = 0; i < 3; i++)
    sum += v[i][i];
  return (sum != magicVal) ? false : true;
};

bool testDiagY(int v[3][3], int magicVal){
  int sum = 0, j = 2;
  for(int i = 0; i < 3; i++)
    sum += v[j--][i];
  return (sum != magicVal) ? false : true;  
};

const char* testSquare(int v[3][3]){
  int magicVal = magicValue(v);
  if(testLines(v, magicVal) &&
      testColumns(v, magicVal) &&
        //testDiagX(v, magicVal) &&
          testDiagY(v, magicVal))
    return "sim";
  return "nao";
}

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
    for(int j = 0; j < 3; j++){
      cout << v[i][j];
    }
    cout << endl;
  }
}

int main(){
  int v[3][3];
  writevet(v);
  //readvet(v);
  cout << testSquare(v);
  return 0;
}