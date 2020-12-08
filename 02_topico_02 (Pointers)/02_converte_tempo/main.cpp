#include <iostream>
using namespace std;

void converte_tempo(int segundos, int *hor, int *min, int *seg){
  int aux = 0;
  *hor = segundos / 3600;
  *min = (segundos % 3600) / 60;
  *seg = (segundos % 3600) % 60;
}

int main(){
  int segundos = 0, h = 0, m = 0 , s = 0;
  cin >> segundos;

  converte_tempo(segundos, &h, &m, &s);

  cout << h << ":" << m << ":" << s;
   
  return 0;
}