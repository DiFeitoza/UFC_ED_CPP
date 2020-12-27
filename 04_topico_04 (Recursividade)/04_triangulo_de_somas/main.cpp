#include <iostream>
#include <string>
using namespace std;

void writeVetRec(int *v, int n, int i = 0){
  if(i <= n - 1) {
    cin >> v[i];
    writeVetRec(v, n, i + 1);
  }
}

void readVetRec(int *v, int n, int i = 0){
  if(n == 1) {
    cout << "[" << v[i] << "]" << "\n";
    return;
  }
  else if (i == 0){
    cout << "[" << v[i] << ", ";
    readVetRec(v, n, i + 1);
  }
  else if (i < n - 1) {
    cout << v[i] << ", ";
    readVetRec(v, n, i + 1);
  }
  else if(i == n - 1){  //if (i == n - 1){
    cout << v[i] << "]" << "\n";
  }
}

void writeVetFromVet(int *v1, int *v2, int n, int i = 0){
  if(i < n - 1) { //pq passa com <= n - 1?
    v2[i] = v1[i] + v1[i + 1];
    writeVetFromVet(v1, v2, n, i + 1);
  }
}

void trianguloDasSomas(int *v1, int n){
  if(n > 0) {
    int v2[n - 1];
    writeVetFromVet(v1, v2, n);
    trianguloDasSomas(v2, n - 1);
    readVetRec(v1, n);
  }
}

int main(){
  int n = 0;
  cin >> n;
  int v[n];

  writeVetRec(v, n);
  trianguloDasSomas(v, n);
  
  return 0;
}