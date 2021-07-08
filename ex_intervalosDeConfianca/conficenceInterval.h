#include <iostream>
#include <vector>

#include "confidenceInterval.cpp"

std::pair<double,double> t_distribution_confidence_interval(const std::vector<double>& data, double alpha);