/******************************
* Автор: Горбунова Настя      *
* Вариант: 5                  *
* Задание: Обработка массивов *
******************************/

#include <iostream>

using namespace std;

int main() {
  int rowCount;
  int columnCount;
  double matrixF[20][20];

  cout << "Enter the number of rows for the matrix: ";    cin >> rowCount;
  cout << "Enter the number of columns for the matrix: "; cin >> columnCount; 
  cout << "\nValue of the initial matrix:\n";
 
  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      cin >> matrixF[rowIndex][columnIndex];
    }
  }

  cout << "\nSource matrix:\n";
     for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
       for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
         cout << matrixF[rowIndex][columnIndex] << " ";
       }
       cout << "\n";
     }

  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      if (matrixF[rowIndex][columnIndex] < 0) {
          matrixF[rowIndex][columnIndex] = 0;
      }
    }
  }

  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      cout << matrixF[rowIndex][columnIndex] << " ";
    }
    cout << "\n";
  }

  return 0;
}