#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Devuelve la suma de precio * cantidad de todos los productos[cite: 1]
double calcularSubtotal(const vector<Producto>& productos) {
    double subtotal = 0;
    for (size_t i = 0; i < productos.size(); i++) {
        subtotal += productos[i].precio * productos[i].cantidad;
    }
    return subtotal;
}

// Devuelve el descuento que corresponde al subtotal[cite: 1]
double calcularDescuento(double subtotal) {
    if (subtotal > 50000.0) {
        return subtotal * 0.10;
    }
    return 0.0;
}

// Devuelve el impuesto que corresponde a la base[cite: 1]
double calcularImpuesto(double base) {
    return base * 0.13;
}

int main() {
    vector<Producto> productos = {
        {"Teclado", 12500.0, 2},
        {"Mouse", 6500.0, 3},
        {"Cable HDMI", 3000.0, 4},
        {"Webcam", 18000.0, 1}
    };

    for (size_t i = 0; i < productos.size(); i++) {
        cout << productos[i].nombre << " x" << productos[i].cantidad
             << " = " << productos[i].precio * productos[i].cantidad << endl;
    }

    double subtotal = calcularSubtotal(productos);
    cout << "subtotal: " << subtotal << endl;

    // Se calcula el descuento, la base, el impuesto y el total[cite: 1]
    double descuento = calcularDescuento(subtotal);
    double base = subtotal - descuento;
    double impuesto = calcularImpuesto(base);
    double total = base + impuesto;

    // Imprime igual que el subtotal
    cout << "descuento: " << descuento << endl;
    cout << "impuesto: " << impuesto << endl;
    cout << "total: " << total << endl;

    return 0;
}
