#include "../ex_oSignificadoDeMedia/mean.h"
#include "../ex_Dispersao/std_dev.h"
#include <vector>

double tStudent (const std::vector<double>& data_1, const std::vector<double>& data_2) {
    double mean_1 = mean(data_1);
    double mean_2 = mean(data_2);
    double stdDev_1 = std_dev(data_1);
    double stdDev_2 = std_dev(data_2);
    int n = data_1.size() + data_2.size() - 2;

    return ((mean_1 - mean_2) / sqrt((pow(stdDev_1, 2) + pow(stdDev_2, 2)) / n));
    
}