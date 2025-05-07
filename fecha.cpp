#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int anioAct; //Año Actual
    int mesAct; //Mes actual
    int diaAct; //Día actual
    int anioNac; //Año nacimiento
    int mesNac; //Mes nacimiento
    int diaNac; //Día nacimiento

    cout /*Se usa para mostrar mensajes en la pantalla*/ << "Enter current day:\n\nYear: "; /*imprime el texto "Enter current day:" seguido de dos saltos de línea (\n\n) y luego "Year: ".*/
    cin >> anioAct;
    cout << "Month: ";
    cin >> mesAct;
    cout << "Day: ";
    cin >> diaAct;

    system("cls");
    
    cout << "Enter your birthday:\n\nYear: ";
    cin >> anioNac;
    cout << "Month: ";
    cin >> mesNac;
    cout << "Day: ";
    cin >> diaNac;
    
    system("cls");

    cout << "Current Day: ";
    cout << "\t"/*agrega la tabulacion*/ << diaAct << "/" << mesAct << "/" << anioAct << endl;
    cout << "\nBirthday: ";
    cout << "\t" << diaNac << "/" << mesNac << "/" << anioNac<< endl; /*endl:salto de linea para mover el cursor a la siguiente linea*/

    cin.ignore();
    cin.get();

    return 0;
}




