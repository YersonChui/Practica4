// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 6
// Problema planteado:Estacionamiento

#include <iostream>
#include <cmath>
using namespace std;

double pago_estacionamiento(int hora_entrada, int minuto_entrada, int hora_salida, int minuto_salida) {
  int minutos_entrada = hora_entrada * 60 + minuto_entrada;
  int minutos_salida = hora_salida * 60 + minuto_salida;
  int minutos_diferencia = minutos_salida - minutos_entrada;
  int horas_diferencia = round(minutos_diferencia / 60.0);
  double pago = 8.0;
  if (horas_diferencia > 1) {
    pago += (horas_diferencia - 1) * 3.0;
  }
  return pago;
}// Función que calcula el pago por estacionamiento


int penalizacion_empleado(int hora_entrada, int minuto_entrada, int hora_salida, int minuto_salida) {
  int penalizacion = 0;
  if (hora_entrada > 8 || (hora_entrada == 8 && minuto_entrada > 10)) {
    penalizacion += (hora_entrada - 8) * 60 + (minuto_entrada - 10);
  }
  if (hora_salida < 16 || (hora_salida == 16 && minuto_salida < 0)) {
    penalizacion += (16 - hora_salida) * 60 - minuto_salida;
  }
  return penalizacion;
}// Función calcula los minutos de penalización


int main() {

  // Casos de prueba
  cout << "Pago por el servicio de estacionamiento:" << endl;

  cout << "Hora Entrada: " << "09:35" << endl;
  cout << "Hora Salida: " << "10:15" << endl;
  cout << "Tiempo: " << "1 hora" << endl;
  cout << "Pago: " << pago_estacionamiento(9,35,10,15) << " Bs." << endl;

  cout << "Hora Entrada: " << "11:10" << endl;
  cout << "Hora Salida: " << "12:20" << endl;
  cout << "Tiempo: " << "2 horas" << endl;
  cout << "Pago: " << pago_estacionamiento(11,10,12,20) << " Bs." << endl;

   cout << "Hora Entrada: " << "17:55" << endl;
   cout << "Hora Salida: " << "21:30" << endl;
   cout << "Tiempo: " << "4 horas" << endl;
   cout << "Pago: " << pago_estacionamiento(17,55,21,30) << " Bs." << endl;

   // Casos de prueba para el problema del empleado
   cout << "\nPenalización para el empleado:" << endl;

   cout << "Codigo Empleado: " << "101045" << endl;
   cout << "Hora Entrada: " << "7:55" << endl;
   cout << "Hora Salida: " << "16:15" << endl;
   cout << "Penalización: "<< penalizacion_empleado(7,55,16,15) <<" minutos"<<endl;

   cout <<"Codigo Empleado:"<< "223032"<<endl;
   cout <<"Hora Entrada:"<< "8:11"<<endl;
   cout <<"Hora Salida:"<< "16:00"<<endl;
   cout <<"Penalización:"<< penalizacion_empleado(8,11,16,00) <<" minutos"<<endl;

   cout <<"Codigo Empleado:"<< "334009"<<endl;
   cout <<"Hora Entrada:"<< "8:30"<<endl;
   cout <<"Hora Salida:"<< "16:20"<<endl;
   cout <<"Penalizacion:"<< penalizacion_empleado(8,30,16,20) <<" minutos"<<endl;

   cout <<"Codigo Empleado:"<< "443283"<<endl;
   cout <<"Hora Entrada:"<< "8:05"<<endl;
   cout <<"Hora Salida:"<< "16:10"<<endl;
   cout <<"Penalización:"<< penalizacion_empleado(8,05,16,10) <<" minutos"<<endl;

  return 0;
}
