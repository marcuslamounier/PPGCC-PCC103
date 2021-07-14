#include <math.h>
#include <vector>
#include "functions.h"

double t_distribution_pdf(double x, int v) {
    double pi = 2 * acos(0.0);
    return (((tgamma(((double)(v + 1) / 2))) / (sqrt(v * pi) * tgamma(((double) v) / 2))) * pow((1 + (pow(x, 2) / v)), (-1 * (((double) (v + 1)) / 2))));
}

double t_distribution_cdf(double x, int v) {
    double pi = 2 * acos(0.0);
    return (0.5 + (x * tgamma(((double) (v + 1)) / 2)) * (hypergeometric(0.5, (((double) (v + 1)) / 2), 1.5, (-1 * (pow(x, 2) / v))) / (sqrt(pi * v) * tgamma(((double) v) / 2))));
}

double t_distribution_cdf(double x1, double x2, int v) {
    return (x1 == x2)
        ? 0
        :((x1 < x2) 
            ? (t_distribution_cdf(x2, v) - t_distribution_cdf(x1, v))
            : (t_distribution_cdf(x1, v) - t_distribution_cdf(x2, v))
        );
}

std::pair<double,double> t_distribution_confidence_interval(const std::vector<double>& data, double alpha) {

}