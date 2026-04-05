#include <iostream>
#include <string>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

void task1() {
    string inFile, outFile;
    cout << "Enter input file for array: ";
    cin >> inFile;
    cout << "Enter output file: ";
    cin >> outFile;

    int n;
    double arr[40];

    readArray(inFile, arr, n);
    duplicateEvenIndexes(arr, n);
    writeArray(outFile, arr, n);
}

void task2() {
    string fileName;
    cout << "Enter matrix file: ";
    cin >> fileName;

    int m, n;
    int matr[20][20];

    readMatrix(fileName, matr, m, n);
    int result = findRow(matr, m, n);
    appendResult(fileName, result);
}

void task3() {
    string inFile, outFile;
    cout << "Enter input file for sorting: ";
    cin >> inFile;
    cout << "Enter output file: ";
    cin >> outFile;

    int n;
    double arr[20];

    readArray(inFile, arr, n);
    selectionSort(arr, n);
    writeArray(outFile, arr, n);
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
