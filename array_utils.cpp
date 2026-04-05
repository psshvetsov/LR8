#include "array_utils.h"
#include <fstream>

using namespace std;

void readArray(string filename, double arr[], int &n) {
    ifstream fin(filename);
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];
    fin.close();
}

void writeArray(string filename, double arr[], int n) {
    ofstream fout(filename);
    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";
    fout.close();
}

void duplicateEvenIndexes(double arr[], int &n) {
    for (int i = 1; i < n; i += 2) {
        for (int j = n; j > i; j--)
            arr[j] = arr[j - 1];

        arr[i + 1] = arr[i];
        n++;
        i++;
    }
}

void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        double temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
