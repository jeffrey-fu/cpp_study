#include <vector>
using namespace std;

template <typename T>
void displayVector(const vector<T>& v) {
    for (typename vector<T>::const_iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;
}