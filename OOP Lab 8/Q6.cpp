
#include <iostream>
using namespace std;

// Base class
class Document {
public:
    // Virtual function to enable runtime polymorphism
    virtual void exportFile() {
        cout << "Exporting a generic document." << endl;
    }

    // Virtual destructor for safe polymorphic destruction
    virtual ~Document() {
    }
};

// Derived class for PDF documents
class PDFDocument : public Document {
public:
    // Override the base class function
    void exportFile() override {
        cout << "Export Format : PDF Document" << endl;
        cout << "File Extension: .pdf" << endl;
    }
};

// Derived class for text documents
class TextDocument : public Document {
public:
    // Override the base class function
    void exportFile() override {
        cout << "Export Format : Text Document" << endl;
        cout << "File Extension: .txt" << endl;
    }
};

// Derived class for CSV documents
class CSVDocument : public Document {
public:
    // Override the base class function
    void exportFile() override {
        cout << "Export Format : CSV Document" << endl;
        cout << "File Extension: .csv" << endl;
    }
};

int main() {
    // Create objects of all derived classes
    PDFDocument pdf;
    TextDocument text;
    CSVDocument csv;

    // Create a base class pointer
    Document* ptr;

    cout << "----- DOCUMENT EXPORT SYSTEM -----\n";

    // Point to PDF object and invoke overridden function
    ptr = &pdf;
    cout << "\nPDF Export:\n";
    ptr->exportFile();

    // Point to Text object
    ptr = &text;
    cout << "\nText Export:\n";
    ptr->exportFile();

    // Point to CSV object
    ptr = &csv;
    cout << "\nCSV Export:\n";
    ptr->exportFile();

    return 0;
}
