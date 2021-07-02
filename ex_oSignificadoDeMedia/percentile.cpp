#include "functions.h"

double percentile(const std::vector<double>& data, int p) {
    vector <double> v = data;
    int k = ceil((v.size() - 1) * p/100);
    return quickSelect(v, 0, v.size(), k);
}

// QUESTÃO DO PERCENTIL FOI ADAPTADA DO EXERCÍCIO FEITO PARA A LISTA DE PAA