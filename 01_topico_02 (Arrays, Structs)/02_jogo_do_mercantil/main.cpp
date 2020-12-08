#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template<typename T>
auto writeVec(vector<T> vec){
  string line;
  T n;

  getline(cin, line);
  stringstream in(line);

  while(in >> n)
    vec.push_back(n);

  return vec;
}

template<typename T>
void readVec(vector<T> vec){
  for(auto it : vec)
    cout << it << ' ';
  cout << endl;
}

string game(vector<float> v_products, vector<float> v_kicksP1, vector<char> v_kicksP2){
  string output = "empate";
  int p1 = 0, p2 = 0;

  for(int i = 0; i < v_products.size(); i++){
    if(v_kicksP1[i] > v_products[i] && v_kicksP2[i] == 'm') p2++;
    else if(v_kicksP1[i] < v_products[i] && v_kicksP2[i] == 'M') p2++;
    else p1++;
  }

  if(p1 > p2) output = "primeiro";
  else if(p1 < p2) output = "segundo"; 

  return output;
}


int main(){
  int tam = 0; // obedecendo entradas de teste
  vector<float> vecPrices;
  vector<float> vecKicksP1;
  vector<char> vecKicksP2;

  cin >> tam; // obedecendo entradas de teste
  cin.ignore();

  vecPrices = writeVec(vecPrices);
  vecKicksP1 = writeVec(vecKicksP1);
  vecKicksP2 = writeVec(vecKicksP2);

  cout << game(vecPrices, vecKicksP1, vecKicksP2);
  
  return 0;
}