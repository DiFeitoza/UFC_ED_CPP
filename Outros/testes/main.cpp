#include <iostream>

using namespace std;

void mostrar(int **m, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
}
void preencherMatriz(int **m, int l, int c)
{
    for(int i = 0; i < l; i++){
        // preencho cada posição do vetor de linhas (l) com um vetor de colunas (c)
        m[i] = new int[c];
        for(int j = 0; j < c; j++){
            // leio do terminal os valores respectivos da matriz
            cin >> m[i][j];
        }
    }
}

int parametro(int **m, int l)
{
    int soma = 0;
    for(int i = 0; i < l; i++){
        soma += m[0][i];
    }
    return soma;
}

int somaLinha(int **m, int l, int c, int param)
{
    int soma = 0;
    for(int i = 0; i < l; i++){
        soma = 0;
        for(int j = 0; j < c; j++){
            soma += m[i][j];
        }
        if(soma != param){
            return soma;
        }
    }
    return soma;
}

int somaColuna(int **m, int l, int c, int param)
{
    int soma = 0;
    for(int i = 0; i < l; i++){
        soma = 0;
        for(int j = 0; j < c; j++){
            soma += m[j][i];
        }
        if(soma != param){
            return soma;
        }
    }
    return soma;
}

int somaDiagonal(int **m, int l, int c, int param)
{
    // diagonal principal
    int soma = 0;
    int cont = 2;
    for(int i = 0; i < l; i++){
        soma += m[i][i];
    }
    if(soma != param){
        return soma;
    }

    // diagonal secundaia
    soma = 0;
    for(int i = 0; i < l; i++){
        soma += m[i][cont--];
    }

    if(soma != param){
        return soma;
    }

    return soma;
}


int main(){
    int l = 3;
    int c = 3;
    
    // crio uma matriz (ponteiro de um ponteiro) e atribuo um vetor das linhas
    int **m = new int*[l];
    
    preencherMatriz(m,l,c);
    mostrar(m,l,c);
    int param = parametro(m, l);
    int somaL = somaLinha(m, l, c, param);
    int somaC = somaColuna(m, l, c, param);
    int somaD = somaDiagonal(m, l, c, param);
    
    if(somaL != param || somaC != param || somaD != param)
        cout << "nao";
    else
        cout << "sim";
    
    return 0;
}