#include <iostream>
#include <fstream>
#include "qrcodegen.hpp"

using std::uint8_t;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;

int main() {
    // The text to encode in QR code
    const char *text = "Hello, QR Code!";

    // Generate QR Code at the lowest error correction level (L)
    QrCode qr = QrCode::encodeText(text, QrCode::Ecc::LOW);

    int size = qr.getSize();

    // Print QR code to console as ASCII
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            std::cout << (qr.getModule(x, y) ? "##" : "  ");
        }
        std::cout << '\n';
    }

    // Optionally, save as PBM image file (Portable Bitmap)
    std::ofstream ofs("qrcode.pbm");
    ofs << "P1\n" << size << " " << size << "\n";
    for (int y = 0; y < size; y++) {
        for (int x = 0; x < size; x++) {
            ofs << (qr.getModule(x, y) ? "1 " : "0 ");
        }
        ofs << "\n";
    }
    ofs.close();

    std::cout << "QR code saved as qrcode.pbm\n";

    return 0;
}
