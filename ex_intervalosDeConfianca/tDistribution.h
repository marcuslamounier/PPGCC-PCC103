#include "tDistribution.cpp"
#include <vector>

double t_distribution_pdf(double x, int v);
double t_distribution_cdf(double x, int v);
double t_distribution_cdf(double x1, double x2, int v);
std::pair<double,double> t_distribution_confidence_interval(const std::vector<double>& data, double alpha);