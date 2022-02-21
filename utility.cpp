#include <iostream>
#include <vector>
using namespace std;

// display a vector using iterators
template <typename T>
void displayVector(const vector<T>& v) {
    for (typename vector<T>::const_iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;
}

// display a 2D vector using iterators
template<typename T>
void displayVectorMatrix(const vector<vector<T> > & matrix){
    for(auto it = matrix.begin(); it != matrix.end() ; it++){
        for(int i = 0; i < (*it).size() ; i++) {
            cout<< (*it)[i] << ", ";
        }
        cout << endl;
    }
}
