#include <vector>
#include <ctime>
#include <algorithm>
#include <math.h>

using namespace std;

template <typename T> void printVector(T v) {
    for (const int &x : v) {
        cout << x << " ";
    }
    cout << endl;
}

vector<double> randomDoubleVector(int tam, int maxNum) {
    vector<double> v;
    srand((unsigned)time(0));
    for (int i = 0; i < tam; i++) {
        v.push_back(rand() % maxNum);
    }
    return v;
}

int LomutoPartition (vector <double> &v, int l, int r) {
    int pivot = v[l];
    int s = l;

    for (int i = l; i < r; i ++) {
        if (v[i] < pivot) {
            s++;
            swap(v[s], v[i]);
        }
    }
    swap(v[l], v[s]);

    return s;
}

int LomutoPartition (vector <double> &v) {
    return LomutoPartition(v, 0, v.size());
}

int quickSelect (vector <double> &a, int l, int r, int k) {
    int s = LomutoPartition(a, l, r);
    if (s == k) {
        return a[s];
    }
    else if (s > k) {
        return quickSelect (a, l, s, k);
    }
    else {
        return quickSelect (a, s + 1, r, k);
    }
}