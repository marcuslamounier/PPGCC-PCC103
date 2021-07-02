#include <iostream>
#include <vector>

#include "interval.h"
#include "variance.h"
#include "std_dev.h"

#include "../ex_oSignificadoDeMedia/functions.h"

using namespace std;

int main() {

    int n = 30; // numeros do vetor aleatorio
    int maxNum = 100; // valor maximo para a geracao do vetor aleatorio
    vector<double> v = randomDoubleVector(n, maxNum);

    cout << "Vetor inicial:" << endl;
    printVector(v);

    pair<double, double> p = interval(v);

    cout << "Intervalo: " << p.first << " - " << p.second << endl;
    cout << "Variancia: " << variance(v) << endl;
    cout << "Desvio padrao: " << std_dev(v) << endl;
    
    return 0;
}