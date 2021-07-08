#include <math.h>
#include <algorithm>

double factorial(double x) {
    return (x * tgamma(x));
}

// fonte da função binomial:
// https://www.wolframalpha.com/input/?i=binomial+coefficient

double binomialCoefficient (double n, double k) {
    return (factorial(n) / (factorial(k) * factorial(n - k)));
}

// fonte da função hipergeométrica:
// https://pt.wikipedia.org/wiki/Distribui%C3%A7%C3%A3o_hipergeom%C3%A9trica

double hypergeometric(double k, double N, double K, double n) {

    // RESTRIÇÃO
    if ((k < std::max(((double) 0), (n + K - N))) || (k > std::min(K, n))) return 0;

    // FORMULA
    return ((binomialCoefficient(K, k) * binomialCoefficient((N - K), (n - k))) / binomialCoefficient(N, n));
}