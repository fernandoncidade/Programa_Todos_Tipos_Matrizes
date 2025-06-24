#include <iostream>
using namespace std;

#define M 3
#define N 3

void leMatriz (int matriz[][N]){
    int i, j;
    cout << "Entre com os valores da matriz:" << endl;
    for (i=0; i<M; i++){
        for (j=0; j<N; j++){
            cin >> matriz[i][j];
        }
    }
}
void somaLinha (int matriz[][N]){
    int i, j, soma;
    cout << endl;
    // Acesso linha-coluna:
    // Para cada linha i, acessa as colunas j
    for (i=0; i<M; i++){
        soma = 0;
        for (j=0; j<N; j++){
            soma = soma + matriz[i][j];
        }
        cout << "Soma da linha " << i << ": " << soma << endl;
    }
    cout << endl;
}
void maiorLinha (int matriz[][N]){
    int i, j, maior;
    // Acesso linha-coluna:
    // Para cada linha i, acessa as colunas j
    for (i=0; i<M; i++){
        maior = matriz[i][0];
        for (j=0; j<N; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        cout << "Maior da linha " << i << ": " << maior << endl;
    }
    cout << endl;
}
void somaColuna (int matriz[][N]){
    int i, j, soma;
    // Acesso coluna-linha:
    // Para cada coluna j, acessa as linhas i
    for (j=0; j<N; j++){
        soma = 0;
        for (i=0; i<M; i++){
            soma = soma + matriz[i][j];
        }
        cout << "Soma da coluna " << j << ": " << soma << endl;
    }
    cout << endl;
}
void menorColuna (int matriz[][N]){
    int i, j, menor;
    // Acesso coluna-linha:
    // Para cada coluna j, acessa as linhas i
    for (j=0; j<N; j++){
        menor = matriz[0][j];
        for (i=0; i<M; i++){
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
        cout << "Menor da coluna " << j << ": " << menor << endl;
    }
    cout << endl;
}
void somaDiagonal (int matriz[][N]){
    int i, soma;
    soma = 0;
    for (i=0; i<M; i++){
        soma = soma + matriz[i][i];
    }
    cout << "Soma da diagonal principal: " << soma << endl;
    cout << endl;
}
void somaMatriz (int matriz[][N]){
    int i, j, soma;
    soma = 0;
    for (i=0; i<M; i++){
        for (j=0; j<N; j++){
            soma = soma + matriz[i][j];
        }
    }
    cout << "Soma de todos elementos da matriz: " << soma << endl;
}
int main(){
    int matriz[M][N];
    leMatriz(matriz);
    somaLinha(matriz);
    maiorLinha(matriz);
    somaColuna(matriz);
    menorColuna(matriz);
    somaDiagonal(matriz);
    somaMatriz(matriz);
    return 0;
}
