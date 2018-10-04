/*
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 2 de octubre de 2014
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto.
 *          3.ª clase de problemas de Programación 1
 */

#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha pedido al operador un año y ha escrito en pantalla un
 *       mensaje indicando si es bisiesto o no.
 */
int main() {
	cout << "Escriba un año: " << flush;
	int agno;
	cin >> agno;

	if (agno % 4 == 0) {
		cout << "El año " << agno << " es bisiesto" << endl;
	}
	else {
		cout << "El año " << agno << " no es bisiesto" << endl;
	}
	return 0;
}
