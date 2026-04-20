#include <iostream>
using namespace std;

// Fungsi partisi
int partisi(int L[], int p, int r) {
    int x = L[p];   // pivot
    int i = p;
    int j = r;

    while (true) {
        while (L[j] > x) {
            j--;
        }

        while (L[i] < x) {
            i++;
        }

        if (i < j) {
            int tmp = L[i];
            L[i] = L[j];
            L[j] = tmp;
        } else {
            return j;
        }
    }
}

// Fungsi quicksort
void quickSort(int L[], int p, int r) {
    if (p < r) {
        int q = partisi(L, p, r);
        quickSort(L, p, q);
        quickSort(L, q + 1, r);
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << " : ";
        cin >> data[i];
    }

    cout << "\nSebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    quickSort(data, 0, n - 1);

    cout << "\n\nSetelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
