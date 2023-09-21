// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 9
// Problema planteado: A un trabajador se le paga según las horas que trabaja en la semana, una tarifa depago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa
//en un 50%. Calcular el salario total del trabajador, además considere que si existe un anticipo se debe restar este valor al salario total. Al total debe descontar un 10% parael pago de impuestos.
#include <iostream>
using namespace std;

double calcular_salario_bruto(int horas, double tarifa) {
    double salario;
    if (horas > 40) {
            salario = 40 * tarifa + (horas - 40) * tarifa * 1.5; // Tarifa incrementada en un 50%
    } else {
        salario = horas * tarifa;
    }
    return salario;
}//calcula el salario bruto a traves de las hrs trabajadas y pago por hora 50%


double calcular_salario_neto(double salario_bruto, double anticipo) {
    double salario_neto;
    salario_neto = salario_bruto - anticipo;
    salario_neto = salario_neto - salario_neto * 0.1;
    return salario_neto;
}// salario neto luego de restar el anticipo e impuesto 10%

int main() {
    int horas;
    double tarifa;
    double anticipo;
    double salario_bruto;
    double salario_neto;
    double total_descuentos;

    cout << "Ingrese las horas trabajadas en la semana: ";cin >> horas;
    cout << "Ingrese la tarifa de pago por hora: ";cin >> tarifa;
    cout << "Ingrese el anticipo recibido: ";cin >> anticipo;
    // las funciones

    salario_bruto = calcular_salario_bruto(horas, tarifa);
    salario_neto = calcular_salario_neto(salario_bruto, anticipo);

    total_descuentos = salario_bruto - salario_neto;
    cout << "El total ganado es: " << salario_bruto << endl;
    cout << "El total de descuentos es: " << total_descuentos << endl;
    cout << "El pago neto es: " << salario_neto << endl;

  return 0;
}
