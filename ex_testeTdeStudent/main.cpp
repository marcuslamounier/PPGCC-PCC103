#include <iostream>
#include "tStudent.h"
#include "../functions.h"

using namespace std;

int main () {

    int n = 30; // numeros do vetor aleatorio
    int maxNum = 100; // valor maximo para a geracao do vetor aleatorio
    vector<double> v1 = randomDoubleVector(n, maxNum);
    vector<double> v2 = randomDoubleVector(n, maxNum);

    double t = tStudent (v1, v2);
}

int main() {