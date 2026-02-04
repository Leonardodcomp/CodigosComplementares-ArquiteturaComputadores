#include <stdio.h>
#define N 11
#define INF 999999
int dist[N][N];
int visitado_todos = (1 << N) - 1;
int tsp(int mask, int pos) {
if (mask == visitado_todos) {
return dist[pos][0];
}
int ans = INF;
for (int city = 0; city < N; city++) {
if ((mask & (1 << city)) == 0) {
int newAns = dist[pos][city] + tsp(mask | (1 << city), city);
if (newAns < ans) ans = newAns;
}
}
return ans;
}
int main() {
// Inicializa uma matriz de distâncias simples
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
dist[i][j] = (i == j) ? 0 : (i + j + 5);
}
}
printf("Iniciando TSP Stress (%d cidades)...\n", N);
int resultado = tsp(1, 0);
printf("Menor caminho: %d\n", resultado);
return 0;
}