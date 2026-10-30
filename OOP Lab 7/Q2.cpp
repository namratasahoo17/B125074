
#include <iostream>
#include <string>
using namespace std;

// Base class
class Image {
protected:
    int width, height;

public:
    // Constructor to initialize image dimensions
    Image(int w, int h) {
        width = w;
        height = h;
    }
};

// First derived class
class CompressedImage : public Image {
protected:
    double compressionRatio;

public:
    // Initialize base class and compression ratio
    CompressedImage(int w, int h, double ratio)
        : Image(w, h) {
        compressionRatio = ratio;
    }
};

// Second derived class
class EncryptedImage : public CompressedImage {
private:
    string encryptionAlgorithm;

public:
    // Initialize all levels of inheritance
    EncryptedImage(int w, int h, double ratio,
                   string algorithm)
        : CompressedImage(w, h, ratio) {
        encryptionAlgorithm = algorithm;
    }

    // Calculate and display image metadata
    void displayMetadata() {
        // Calculate original pixel count
        long long originalPixels =
            1LL * width * height;

        // Calculate effective size after compression
        double effectivePixels =
            (originalPixels * compressionRatio) / 100.0;

        cout << "\n----- IMAGE METADATA -----\n";

        cout << "Image Width          : "
             << width << " pixels" << endl;

        cout << "Image Height         : "
             << height << " pixels" << endl;

        cout << "Original Pixel Count : "
             << originalPixels << endl;

        cout << "Compression Ratio    : "
             << compressionRatio << "%" << endl;

        cout << "Effective Pixel Size : "
             << effectivePixels << endl;

        cout << "Encryption Algorithm : "
             << encryptionAlgorithm << endl;
    }
};

int main() {
    int width, height;
    double ratio;
    string algorithm;

    // Accept image details
    cout << "Enter image width: ";
    cin >> width;

    cout << "Enter image height: ";
    cin >> height;

    cout << "Enter compression percentage: ";
    cin >> ratio;

    cout << "Enter encryption algorithm: ";
    cin >> algorithm;

    // Create object of the most derived class
    EncryptedImage img(width, height, ratio, algorithm);

    // Display complete metadata
    img.displayMetadata();

    return 0;
}
