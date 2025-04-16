#include<iostream>
using namespace std;

class matrixoutput {
    int a[10][10], m, n;
public:
    void getdata();
    void display();
};

void matrixoutput::getdata() {
    cout << "Enter the row and column:\n";
    cin >> m >> n;
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void matrixoutput::display() {
    cout << "The input matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    matrixoutput obj;
    obj.getdata();
    obj.display();
    return 0;
}
