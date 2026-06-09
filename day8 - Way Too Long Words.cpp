#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string word[n];
 
    for(int i = 0; i < n; i++) {
        cin >> word[i];
    }
 
    for(string &w : word) {
        if(w.size() > 10) {
            w = w[0] + to_string(w.size() - 2) + w[w.size() - 1];
        }
    }
 
    for(int i = 0; i < n; i++) {
        cout << word[i] << "\n";
    }
}