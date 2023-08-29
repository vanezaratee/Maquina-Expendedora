#include <iostream>
#include <string>
using namespace std;

void displayChocolatesMenu() {
    cout << "Tipos de Chocolates:" << endl;
    cout << "1. Kitkat's" << endl;
    cout << "2. M&M's" << endl;
    cout << "3. Hershey's" << endl;
}

void displaykitkatmenu() {
    cout << "   1. Kitkat clásico" << endl;
    cout << "   2. Kitkat dark" << endl;
    cout << "   3. Kitkat white" << endl;
    cout << "   4. Kitkat chunky" << endl;
}

void displaymmmenu() {
    cout << "   5. M&M’s de cacahuate" << endl;
    cout << "   6. M&M’s clásicas" << endl;
}

void displayhersheymenu() {
    cout << "   7. Hershey’s oscuro" << endl;
    cout << "   8. Hershey’s blanco" << endl;
}

void displayRefrescosMenu() {
    cout << "Tipos de Refrescos:" << endl;
    cout << "1. Coca light" << endl;
    cout << "2. Coca normal" << endl;
    cout << "3. Manzanita" << endl;
    cout << "4. Sprite" << endl;
}

int main() {
    char opcionPrincipal, opcionSubMenu;

    while (true) {
        cout << "Menú Principal" << endl;
        cout << "T - Tipos de Chocolates" << endl;
        cout << "R - Tipos de Refrescos" << endl;
        cout << "P - Tipos de Papas" << endl;
        cout << "C - Cancelar" << endl;

        cout << "Selecciona una opción: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 'T':
            case 't':
                displayChocolatesMenu();
                cout << "Selecciona tu producto:";
                cin >> opcionSubMenu;

                switch (opcionSubMenu) {
                    case '1':
                        displaykitkatmenu();
                        cout << "¿Cuál eliges?: ";
                        cin >> opcionSubMenu;
                        switch (opcionSubMenu) {
                            case '1':
                                cout << "Despachando Kitkat clásico" << endl;
                                break; 
                            case '2':
                                cout << "Despachando Kitkat dark" << endl;
                                break;
                            case '3':
                                cout << "Despachando Kitkat white" << endl;
                                break;
                            case '4':
                                cout << "Despachando Kitkat chunky" << endl;
                                break;
                            default:
                                cout << "Inexistente D:" << endl;
                                break;
                        }
                        break;
                    case '2':
                        displaymmmenu();
                        cout << "¿Cuál eliges?: ";
                        cin >> opcionSubMenu;
                        switch (opcionSubMenu) {
                            case '1':
                                cout << "Despachando M&M's de cacahuate" << endl;
                                break;
                            case '2':
                                cout << "Despachando M&M's clásicas" << endl;
                                break;
                            default:
                                cout << "Inexistente D:" << endl;
                                break;
                        }
                        break;
                    case '3':
                        displayhersheymenu();
                        cout << "¿Cuál eliges?: ";
                        cin >> opcionSubMenu;
                        switch (opcionSubMenu) {
                            case '1':
                                cout << "Despachando Hershey's oscuro" << endl;
                                break;
                            case '2':
                                cout << "Despachando Hershey's blanco" << endl;
                                break;
                            default:
                                cout << "Inexistente D:" << endl;
                                break;
                        }
                        break;
                    default:
                        cout << "Inexistente D:" << endl;
                        break;
                }
                break;

            case 'R':
            case 'r':
                displayRefrescosMenu();
                cout << "Selecciona tu refresco:";
                cin >> opcionSubMenu;
                
                switch (opcionSubMenu) {
                    case '1':
                        cout << "Despachando Coca light" << endl;
                        break;
                    case '2':
                        cout << "Despachando Coca normal" << endl;
                        break;
                    case '3':
                        cout << "Despachando Manzanita" << endl;
                        break;
                    case '4':
                        cout << "Despachando Sprite" << endl;
                        break;
                    default:
                        cout << "Inexistente D:" << endl;
                        break;
                }
                break;

            case 'P':
            case 'p':
                cout << "No hay papas disponibles" << endl;
                break;

            case 'C':
            case 'c':
                cout << "Gracias por tu compra :D" << endl;
                return 0;

            default:
                cout << "Inexistente D:" << endl;
                break;
        }
    }

    return 0;
}
