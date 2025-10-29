#include <iostream> // Untuk input/output (cout, cin)
#include <cmath>    // Untuk fungsi matematika (sqrt, pow)

using namespace std;

// Mendefinisikan konstanta PI yang akan digunakan oleh semua fungsi
const double PI = 3.1416;

// Menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2);

// Menghitung radius
double radius(double centerX, double centerY, double pointX, double pointY);

// Menghitung keliling lingkaran
double circumference(double r);

// Menghitung luas lingkaran
double area(double r);

int main()
{
    // Variabel untuk koordinat
    double cX, cY; // Center X, Center Y
    double pX, pY; // Point on Circle X, Point on Circle Y

    // Variabel untuk hasil perhitungan
    double r, d, c, a; // Radius, Diameter, Circumference, Area

    // Mendapatkan Input
    cout << "Koordinat pusat lingkaran (Cx, Cy): ";
    cin >> cX >> cY;

    cout << "Koordinat titik pada lingkaran (Px, Py): ";
    cin >> pX >> pY;

    // Memanggil Fungsi Radius
    r = radius(cX, cY, pX, pY);

    // Menghitung Diameter
    d = 2.0 * r;

    // Memanggil Fungsi Keliling dan Luas
    c = circumference(r);
    a = area(r);

    // Menampilkan Hasil
    cout << "Hasil Perhitungan Lingkaran:" << endl;
    cout << "Koordinat Pusat:  (" << cX << ", " << cY << ")" << endl;
    cout << "Titik di Lingkar: (" << pX << ", " << pY << ")" << endl;
    cout << "Radius : " << r << endl;
    cout << "Diameter : " << d << endl;
    cout << "Keliling : " << c << endl;
    cout << "Luas : " << a << endl;

    return 0;
}

// Fungsi distance: Menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2)
{
    double deltaX_squared = pow(x2 - x1, 2.0);
    double deltaY_squared = pow(y2 - y1, 2.0);

    return sqrt(deltaX_squared + deltaY_squared);
}

// Fungsi radius: Menghitung radius
double radius(double centerX, double centerY, double pointX, double pointY)
{
    // Jarak antara pusat dan titik pada lingkaran adalah radius.
    return distance(centerX, centerY, pointX, pointY);
}

// Fungsi circumference: Menghitung keliling lingkaran
double circumference(double r)
{
    return 2.0 * PI * r;
}

// Fungsi area: Menghitung luas lingkaran
double area(double r)
{
    return PI * pow(r, 2.0);
}
