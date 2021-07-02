#include <iostream>
#include <vector>

#include "mean.h"
#include "mode.h"
#include "median.h"

using namespace std;

int main() {

    int n = 30; // numeros do vetor aleatorio
    int maxNum = 100; // valor maximo para a geracao do vetor aleatorio
    vector<double> v = randomDoubleVector(n, maxNum);

    cout << "Vetor inicial:" << endl;
    printVector(v);

    cout << "Media: " << mean(v) << endl;
    cout << "Moda: " << mode(v) << endl;
    cout << "Mediana: " << median(v) << endl;
    
    return 0;
}