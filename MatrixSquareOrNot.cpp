//.Take a matrix and Check square or not.
#include<iostream>
using namespace std;

class check {
    int a[10][10], m, n, count = 0;
public:
    void getdata();
    void checking();
    void display();
};

void check::getdata() {
    cout << "Enter the row and column:\n";
    cin >> m >> n;
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout<<"\n\n";
}

void check::checking() {
    if (m == n) {
        count = 0;
    } else {
        count++;
    }
}

void check::display() {
    if (count == 0) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n\nUpper Definite Matrix is a Square matrix.";
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "Upper Definite matrix is not a square matrix.";
    }
}

int main() {
    check obj;
    obj.getdata();
    obj.checking();
    obj.display();
    return 0;
}

