#include "../ex_oSignificadoDeMedia/mean.h"

double variance(const std::vector<double>& data) {
    double meanValue = mean(data);
    double sum = 0;
    for (const double &x : data) {
        sum += pow((x - meanValue), 2);
    }
    return (sum / data.size());
}