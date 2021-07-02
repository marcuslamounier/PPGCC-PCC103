#include "percentile.h"

double median(const std::vector<double>& data) {
    return percentile(data, 50);
}