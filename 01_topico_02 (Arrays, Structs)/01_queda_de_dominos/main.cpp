#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

auto writeVec(vector<int> vec){
  string line;
  int n;

  cin.ignore();
  getline(cin, line);

  stringstream in(line);

  while(in >> n)
    vec.push_back(n);

  return vec;
}

/* void readVec(vector<int> vec){
  for(auto it : vec)
    cout << it << " ";
} */

string checkVecOrder(vector<int> vec){
  for(int i = 0; i < vec.size()-1; i++)
    if(vec[i] > vec[i + 1])
      return "precisa de ajuste";
  return "ok";
}

int main(){
  int tam = 0; // obedecendo entradas de teste
  vector<int> vec;

  cin >> tam; // obedecendo entradas de teste

  vec = writeVec(vec);
  // readVec(vec);
  cout << checkVecOrder(vec);
  
  return 0;
}