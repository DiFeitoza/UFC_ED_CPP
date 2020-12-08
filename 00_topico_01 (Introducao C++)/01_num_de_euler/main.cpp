#include<iostream>
#include<iomanip>
using namespace std;


double fatorial(unsigned int n){
  double sum = n;
  while(n > 1)
    sum *= n-- - 1;
  return sum;
}


double euler(unsigned int n){
  double sum = 1;
  while(n > 0)
    sum += 1 / fatorial(n--);
  return sum;
}


int main(){
  int n = 0;
  cin >> n;

  while(n < 0){
    cout << "insira um inteiro positivo\n";
    cin >> n;
  }

  cout << setprecision(6) << fixed;
  cout << euler(n);
  return 0;
}