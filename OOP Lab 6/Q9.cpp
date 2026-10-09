// Add two 2x2 matrices element by element
#include <iostream>
using namespace std;
class Matrix {
    int a[2][2];
public:
    void input() {
        for(int i=0;i<2;i++) for(int j=0;j<2;j++) cin >> a[i][j];
    }
    Matrix operator+(const Matrix& m) const {
        Matrix result;
        for(int i=0;i<2;i++) for(int j=0;j<2;j++) result.a[i][j]=a[i][j]+m.a[i][j];
        return result; // Original matrices remain unchanged.
    }
    void display() const {
        for(int i=0;i<2;i++) { for(int j=0;j<2;j++) cout << a[i][j] << " "; cout << '\n'; }
    }
};
int main() {
    Matrix a,b;
    cout << "Enter 4 elements of matrix 1:\n"; a.input();
    cout << "Enter 4 elements of matrix 2:\n"; b.input();
    Matrix sum=a+b;
    cout << "Matrix 1:\n"; a.display();
    cout << "Matrix 2:\n"; b.display();
    cout << "Sum:\n"; sum.display();
}
