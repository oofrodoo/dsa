#include <iostream>
#include <vector>
using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int destination, vector<vector<int>>& steps) {
    if (n == 1) {
        steps.push_back({source, destination});
        return;
    }

    towerOfHanoi(n-1, source, destination, auxiliary, steps);
    
    steps.push_back({source, destination});

    towerOfHanoi(n-1, auxiliary, source, destination, steps);
}

int main() {
    int N = 3;
    vector<vector<int>> steps;

    towerOfHanoi(N, 1, 2, 3, steps);

    cout << "Steps to solve Tower of Hanoi with " << N << " disks:\n";
    for(size_t i = 0; i < steps.size(); i++) {
        cout << "Step " << i+1 << ": Move disk from rod " 
             << steps[i][0] << " to rod " << steps[i][1] << endl;
    }
    
    cout << "\nTotal moves: " << steps.size() << endl;
    return 0;
}