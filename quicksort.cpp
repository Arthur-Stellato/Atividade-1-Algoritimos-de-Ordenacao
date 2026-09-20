#include <iostream>
#include <vector>
using namespace std;

// Função de partição (esquema de Lomuto): reorganiza o vetor
// usando o último elemento como pivô e devolve sua posição final.
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Função recursiva que ordena o vetor entre os índices low e high.
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Array ordenado: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}