#include <iostream>

#include "normalDistributionCdf.h"
#include "tDistribution.h"

using namespace std;

int main() {

    // PARÂMETROS GERAIS

    double p1 = 2; // ponto 1
    double p2 = 0.7; // ponto 2


    // PARÂMETROS ESPECÍFICOS PARA DISTRIBUIÇÃO NORMAL
    
    // double mu = 40; // media
    // double std_dev = 7; // desvio padrao


    // PARÂMETROS PARA DISTRIBUIÇÃO T

    int v = 1;


    // DISTRIBUIÇÃO NORMAL

    // cout << "Probabilidade de um ponto ocorrer entre -INFINITO e " << p1 << " em uma distribuicao normal: ";
    // cout << normal_distribution_cdf(p1) << endl;
    // cout << normal_distribution_cdf(p1, mu, std_dev) << endl;

    // cout << "Probabilidade de um ponto ocorrer entre " << p1 << " e " << p2 << " em uma distribuicao normal: ";
    // cout << normal_distribution_cdf(p1, p2) << endl;
    // cout << normal_distribution_cdf(p1, p2, mu, std_dev) << endl;


    // DISTRIBUIÇÃO T

    // cout << "Probabilidade de o ponto " << p1 << " ser p em uma distribuicao-t com n-" << v << " graus de liberdade: ";
    // cout << t_distribution_pdf(p1, v) << endl;

    cout << "Probabilidade de um valor estar entre -INFINITO E um ponto " << p1 << " em uma distribuicao-t com n-" << v << " graus de liberdade: ";
    cout << t_distribution_cdf(p1, v) << endl;

    // cout << "Provabilidade de um ponto estar entre " << p1 << " e " << p2 << ": ";
    // cout << t_distribution_cdf(p1, p2, v) << endl;


    //

    return 0;
}