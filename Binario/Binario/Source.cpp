// Zuñiga Ojeda Carlos Andrés 22110091
//2-O POO


#include <iostream>
#include <string>
#include "Decimal.h"
#include "Binario.h"
#include "Hexa.h"

using namespace std;

int main()
{
    int opc;
    do {
        system("cls");
        cout << "--------------------Bienvenido-------------------- \n";
        cout << "Que tipo de numero vamos a convertir?\nElija una opcion: \n";
        cout << "1. Decimal. \n";
        cout << "2. Binario. \n";
        cout << "3. Hexadecimal. \n";
        cout << "0. Salir \n";
        cin >> opc;
        if (opc == 1) {
            system("cls");
            int numero;
            cout << "--------------------Bienvenido-------------------- \n";
            cout << "Ingrese un numero en Decimal: \n";
            cin >> numero;
            Decimal* b;
            b = new Decimal(numero);
            b->DecABin(numero);
            b->DecAHex(numero);
            delete b;
            system("pause");
        }
        if (opc == 2) {
            system("cls");
            int binnum;
            cout << "--------------------Bienvenido-------------------- \n";
            cout << "Ingrese un numero en Binario: \n";
            cin >> binnum;
            Binario* h;
            h = new Binario(binnum);
            h->BinAHex(binnum);
            h->BinADec(binnum);
            delete h;
            system("pause");
        }
        if (opc == 3) {
            system("cls");
            string hexnum;
            cout << "--------------------Bienvenido-------------------- \n";
            cout << "Ingrese un numero en Hexadecimal: \n";
            cin >> hexnum;
            Hexadeci* d;
            d = new Hexadeci(hexnum);
            d->HexADec(hexnum);
            d->HexABi(hexnum);
            delete d;
            system("pause");
        }
        if (opc == 0) {
           
            system("cls");
            cout << "--------------------Adios-------------------- \n";
            system("pause");
        }
        if (opc > 3 || opc < 0) {
            system("cls");
            cout << "\nIngresa Una opción Valida\n";
            system("pause");
        }
    } while (opc != 0);
}
