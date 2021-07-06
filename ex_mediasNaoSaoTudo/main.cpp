#include <iostream>

#include "normalDistributionPdf.h"

using namespace std;

int main() {

    double p = 35; // ponto cuja probabilidade de ocorrer em distribuicao normal sera calculada
    double mu = 40; // media
    double std_dev = 7; // desvio padrao

    // cout << "Probabilidade de o ponto " << p << " ocorrer em uma distribuicao normal e " << normal_distribution_pdf(p) << endl;
    cout << "Probabilidade de o ponto " << p << " ocorrer em uma distribuicao normal e " << normal_distribution_pdf(p, mu, std_dev) << endl;

    return 0;
}