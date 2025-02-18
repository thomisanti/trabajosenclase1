#include <iostream>
using namespace std;

int main() {
    // Ejercicio 2: Calcular el precio final aplicando un descuento del 15%
    
    double precio;
   
    cout << "Ingrese el precio : ";
    cin >> precio;
    
 
    double descuento = 0.15;
    
    
    double descuento = precio * (1 - descuento);

    double precio_final = precio - descuento;
    

    cout << "El precio final es: " << precio_final << endl;
} 
