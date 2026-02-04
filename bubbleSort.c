void bubble_sort(int array[], int n) {
for (int i = 0; i < n - 1; i++) { // Laço externo
for (int j = 0; j < n - i - 1; j++) { // Laço interno
if (array[j] > array[j + 1]) { // Comparação
int temp = array[j]; // Troca (Swap)
array[j] = array[j + 1];
array[j + 1] = temp;
}
}
}
}