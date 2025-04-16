#include<iostream>

using namespace std;

class matrix {
    int a[10][10], m, n, c = 0;
public:
    void reads();
    void skew_symmetric();
    void display();
};

void matrix::reads() {
    cout << "Enter the row & column:\n";
    cin >> m >> n;
    if (m != n) {
        cout << "Can't check Skew_Symmetric or not.\n";
    } else {
        cout << "Insert matrix elements:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }
}

void matrix::skew_symmetric() {
    c = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (a[i][j] != -a[j][i]) {
                    c++;
                }
            }
        }
    }
}

void matrix::display() {
    if (m == n) {
        if (c != 0) {
            cout << "Entering matrix is not a  Skew-Symmetric matrix.";
            cout<<"\n\n\t==Code execute Successfully==";
        } else {
            cout << "Entering matrix is a Skew-Symmetric matrix.";
            cout<<"\n\n\t==Code execute Successfully==";
        }
    }
}

int main() {
    matrix obj;
    obj.reads();
    obj.skew_symmetric();
    obj.display();
    return 0;
}

