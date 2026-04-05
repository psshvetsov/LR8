#pragma once
#include <string>

void readMatrix(std::string filename, int matr[20][20], int &m, int &n);
int findRow(int matr[20][20], int m, int n);
void appendResult(std::string filename, int result);
