#include <iostream>
using namespace std;

class triangular {
    int a[10][10], m, n;

public:
    void getdata();
    void display();
};

void triangular::getdata() {
    cout << "Enter the row and column:\n";
    cin >> m >> n;
    if (m == n) {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    } else {
        cout << "Can't calculate upper and lower triangular matrices.";
    }
}

void triangular::display() {
    if(m==n){
    cout << "Upper triangular matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) { 
                cout << a[i][j] << "\n";
            } 
            }
        }
        cout << endl;
    }
    
    cout << "Lower triangular matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                cout << a[i][j]<<"\n";
            }
        }
        cout << endl;
    }
}

int main() {
    triangular obj;
    obj.getdata();
    obj.display();
    return 0;
}

