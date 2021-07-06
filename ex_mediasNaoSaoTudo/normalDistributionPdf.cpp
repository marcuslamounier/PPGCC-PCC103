#include <math.h>

double normal_distribution_pdf(double x, double mu, double std_dev) {
    double pi = 2 * acos(0.0);
    return (1 / sqrt(2 * pi * pow(std_dev, 2))) * exp(-1 * (pow(x - mu, 2) / (2 * pow(std_dev, 2))));
}

double normal_distribution_pdf(double x) {
    double mu = 0;
    double std_dev = 1;
    return normal_distribution_pdf(x, mu, std_dev);
}