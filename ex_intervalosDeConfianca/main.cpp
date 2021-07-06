#include <iostream>

#include "normalDistributionCdf.h"

using namespace std;

int main() {

    double p1 = 0; // ponto 1 cuja probabilidade de um ponto qualquer se encontrar entre -INFINITO e aquele  em distribuicao normal sera calculada
    double p2 = 40; // ponto 2 cuja probabilidade de um ponto qualquer se encontrar entre -INFINITO e o ponto 1 em distribuicao normal sera calculada
    double mu = 40; // media
    double std_dev = 7; // desvio padrao

    // cout << "Probabilidade de um ponto ocorrer entre -INFINITO e " << p1 << " em uma distribuicao normal e ";
    // cout << normal_distribution_cdf(p1) << endl;
    // cout << normal_distribution_cdf(p1, mu, std_dev) << endl;

    cout << "Probabilidade de um ponto ocorrer entre " << p1 << " e " << p2 << " em uma distribuicao normal e ";
    // cout << normal_distribution_cdf(p1, p2) << endl;
    cout << normal_distribution_cdf(p1, p2, mu, std_dev) << endl;

    return 0;
}