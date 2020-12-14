#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void liberamem(char** v_str, int n){
   for(int i = 0; i < n - 1; i++){
      delete [] v_str[i];
   }
   delete [] v_str;
}

void ordenacao(char** v_str, int n){
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n - 1; i++){
         char* str_aux = new char;
         int n = strcmp(v_str[i], v_str[i + 1]);
         if(n > 0){
            str_aux = v_str[i];
            v_str[i] = v_str[i + 1];
            v_str[i + 1] = str_aux;
         }
      }
   }
}

void print(char** v_str, int n){
   for(int i = 0; i < n; i++){
      cout << v_str[i] << '\n';
   }
}

int main(){
   int n = 0;
   cin >> n;

   char** v_str = new char* [n];

   for(int i = 0; i < n; i++){
      int n = 0;
      cin.ignore();
      cin >> n;
      n++;
      char* str = new char[n];
      cin.ignore();
      cin.get(str, n);
      v_str[i] = str;
   }

   ordenacao(v_str, n);
   print(v_str, n);
   liberamem(v_str, n);

   return 0;
}