#include <math.h>

using namespace std;

std::pair<double,double> interval(const std::vector<double>& data) {
    double min = INFINITY;
    double max = -1 * INFINITY;

    for (const double &x : data) {
        if (x < min) min = x;
        if (x > max) max = x;
    }

    return make_pair(min, max);
}