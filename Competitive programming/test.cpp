
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Dimensions of the carpet

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i]; // Reading the carpet row by row
        }

        vector<int> vIndex, iIndex, kIndex, aIndex;

        // Finding the columns with 'v', 'i', 'k', and 'a'
        for (int j = 0; j < m; ++j) {
            bool foundV = false, foundI = false, foundK = false, foundA = false;
            for (int i = 0; i < n; ++i) {
                if (carpet[i][j] == 'v') foundV = true;
                if (carpet[i][j] == 'i') foundI = true;
                if (carpet[i][j] == 'k') foundK = true;
                if (carpet[i][j] == 'a') foundA = true;
            }

            if (foundV && foundI && foundK && foundA) {
                vIndex.push_back(j);
                iIndex.push_back(j);
                kIndex.push_back(j);
                aIndex.push_back(j);
            }
        }

        bool found = false;

        // Checking if there are four distinct columns that satisfy the conditions
        for (int i = 0; i < vIndex.size(); ++i) {
            for (int j = i + 1; j < iIndex.size(); ++j) {
                for (int k = j + 1; k < kIndex.size(); ++k) {
                    for (int l = k + 1; l < aIndex.size(); ++l) {
                        if (vIndex[i] < iIndex[j] && iIndex[j] < kIndex[k] && kIndex[k] < aIndex[l]) {
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (found) break;
            }
            if (found) break;
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
