// Compare books by price; if equal, compare titles alphabetically
#include <iostream>
#include <string>
using namespace std;
class Book {
    string title; double price;
public:
    Book(string t, double p) : title(t), price(p) {}
    bool operator<(const Book& b) const {
        if (price == b.price) return title < b.title;
        return price < b.price;
    }
};
int main() {
    string t1,t2; double p1,p2;
    cout << "Enter first title (use _ for spaces) and price: "; cin >> t1 >> p1;
    cout << "Enter second title (use _ for spaces) and price: "; cin >> t2 >> p2;
    for (char& c:t1) if(c=='_') c=' ';
    for (char& c:t2) if(c=='_') c=' ';
    Book a(t1,p1), b(t2,p2);
    cout << "Using operator ";
    if(a<b) cout << "First book is smaller by the ranking rule.\n";
    else if(b<a) cout << "Second book is smaller by the ranking rule.\n";
    else cout << "Both books have the same title and price.\n";
}
