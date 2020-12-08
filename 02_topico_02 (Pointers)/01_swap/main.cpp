#include <iostream>
using namespace std;

void troca(int *a, int *b){
  int aux = 0;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(){
  int x, y;
  cin >> x;
  cin >> y;

  troca(&x, &y);

  cout << x << " " << y << endl;
  return 0;
}