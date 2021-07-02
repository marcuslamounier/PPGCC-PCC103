double mean(const std::vector<double>& data) {
    double sum = 0;
    for (const int &x : data) {
        sum += x;
    }
    return (sum / data.size());
}