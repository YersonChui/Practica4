// Fecha creación: 17/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 5
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)

#include <iostream>
#include <string>
using namespace std;

// Definir una estructura para almacenar los datos de una materia
struct Materia {
  string nombre;
  int paralelo;
  string docente;
  double notas[4];
  double nota_final;
  string estado;
};

// Función para solicitar los datos de una materia al usuario
void ingresar_datos(Materia &m) {
  cout << "Ingrese el nombre de la materia: ";
  getline(cin, m.nombre); // Leer el nombre de la materia
  cout << "Ingrese el paralelo de la materia: ";
  cin >> m.paralelo; cin.ignore();
  cout << "Ingrese el nombre del docente: ";
  getline(cin, m.docente);
  cout << "Ingrese las notas de periodo:\n";
  for (int i = 0; i < 4; i++) {
    cout << "Nota " << i + 1 << ": ";cin >> m.notas[i];
  }
}

// Función para calcular la nota final y el estado de una materia
void calcular_datos(Materia &m) {
  m.nota_final = 0;
  for (int i = 0; i < 4; i++) {
    m.nota_final += m.notas[i];
  }
  m.nota_final /= 4;
  if (m.nota_final >= 51) {
    m.estado = "Aprobado";
  } else {
    m.estado = "Reprobado";
  }
}

// Función para mostrar los datos de una materia al usuario
void mostrar_datos(Materia m) {
  cout << "\nDatos de la materia:\n";
  cout << "Nombre: " << m.nombre << "\n";
  cout << "Paralelo: " << m.paralelo << "\n";
  cout << "Docente: " << m.docente << "\n";
  cout << "Notas de periodo:\n";
  for (int i = 0; i < 4; i++) {
    cout << "Nota " << i + 1 << ": " << m.notas[i] << "\n";
  }
  cout << "Nota final: " << m.nota_final << "\n";
  cout << "Estado: " << m.estado << "\n";
}


int main() {
  Materia m; // Crear una variable de tipo Materia
  ingresar_datos(m); // Llamar a la función para ingresar los datos de la materia
  calcular_datos(m);
  mostrar_datos(m);
}
