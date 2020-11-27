#include<iostream>
using namespace std;


bool primo(int n){
  for(int i = 2; i < n; i++)
    if(n % i == 0) return false;
  return true;
}


int main(){
  int a = 0, b = 0;
  cin >> a >> b;

  while(a > b){
    cout << "a primeira entrada deve ser menor ou igual a segunda\n";
    cin >> a >> b;
  }

  for(; a <= b; a++)
    if(primo(a)) cout << a << "\n";

  return 0;
}