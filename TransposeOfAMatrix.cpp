#include<iostream>
using namespace std;

class matrix {
    int a[10][10], x, y;
public:
    void gets();
    void screen();
};

void matrix::gets() {
    cout << "I/P--->\n\tEnter the row and column:\n";
    cin >> x >> y;
    cout << "\tInsert the matrix Elements:\n";
    for (int i = 0; i < x; i++) {
       for (int j = 0; j < y; j++) {
            cin >> a[i][j];
       }
	}
}

void matrix::screen() {
	cout<<"\n\nO/P--->\n\tThe transpose matrix is :\n";
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
        	cout << "    ";
            cout << a[j][i] <<"\t";
        }
        cout << "\n";
    }
    cout<<"\n\t--Code execute Successfully--\n";
}

int main() { 
    matrix obj;
    obj.gets();
    obj.screen();
    return 0;
}

