#include "matrix_utils.h"
#include <fstream>

using namespace std;

void readMatrix(string filename, int matr[20][20], int &m, int &n) {
    ifstream fin(filename);
    fin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fin >> matr[i][j];
    fin.close();
}

int findRow(int matr[20][20], int m, int n) {
    for (int i = 0; i < m; i++) {
        int pos = 0, neg = 0;

        for (int j = 0; j < n; j++) {
            if (matr[i][j] > 0) pos++;
            if (matr[i][j] < 0) neg++;
        }

        if (pos == neg && pos != 0)
            return i + 1;
    }
    return 0;
}

void appendResult(string filename, int result) {
    ofstream fout(filename, ios::app);
    fout << "\nResult: " << result << endl;
    fout.close();
}
