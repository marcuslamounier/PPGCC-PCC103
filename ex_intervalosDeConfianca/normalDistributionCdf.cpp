#include <math.h>

double normal_distribution_cdf(double x, double mu, double std_dev) {
    return (0.5 * (1 + erf((x - mu) / (std_dev * sqrt(2)))));
}

double normal_distribution_cdf(double x) {
    double mu = 0;
    double std_dev = 1;
    return normal_distribution_cdf(x, mu, std_dev);
}

double normal_distribution_cdf(double x1, double x2, double mu, double std_dev) {
    return (x1 == x2)
        ? 0
        :((x1 < x2) 
            ? (normal_distribution_cdf(x2, mu, std_dev) - normal_distribution_cdf(x1, mu, std_dev))
            : (normal_distribution_cdf(x1, mu, std_dev) - normal_distribution_cdf(x2, mu, std_dev))
        );
}

double normal_distribution_cdf(double x1, double x2) {
    double mu = 0;
    double std_dev = 1;
    return normal_distribution_cdf(x1, x2, mu, std_dev);
}