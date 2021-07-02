#include <algorithm>

using namespace std;

double mode(const std::vector<double>& data) {
    if (data.size() == 1) {
        return data[0];
    }
    else {
        vector<double> v = data;
        sort(v.begin(), v.end());
        double current = v[0];
        int counter = 1;
        double modeValue = current;
        int modeCounter = 1;

        for (int i = 1; i < v.size(); i++) {
            if (v[i] == current) {
                counter++;
            }
            else {
                if (counter > modeCounter) {
                    modeCounter = counter;
                    modeValue = current;
                }
                counter = 1;
                current = v[i];
            }
        }
        return modeValue;
    }
}