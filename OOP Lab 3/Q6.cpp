#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:

    // Function to accept product details
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    // Function to display product details
    void display()
    {
        float cost = price * quantity;

        cout << "\nProduct ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Product Cost : " << cost << endl;
    }

    // Function to calculate the cost
    float getCost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;
    float totalValue = 0;

    cout << "Enter number of products: ";
    cin >> n;

    // Dynamically creating an array of Product objects
    Product *products = new Product[n];

    // Accepting details of all products
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << endl;
        products[i].accept();
    }

    // Displaying product details
    cout << "\n========== PRODUCT DETAILS ==========" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        products[i].display();

        // Adding the cost to total inventory value
        totalValue += products[i].getCost();
    }

    cout << "\nOverall Inventory Value = " << totalValue << endl;

    // Releasing the dynamically allocated array
    delete[] products;

    return 0;
}