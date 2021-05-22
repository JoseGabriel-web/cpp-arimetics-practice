#include <iostream>
#include <cmath>
using namespace std;

void print(int arr[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << endl;
    }
}

void ejercicioTresNueve()
{
    int a = 2;
    int b = 3;
    int c = 2;

    double resultado = pow(a, b);
    resultado = pow(resultado, c);
    cout << "Ejercicio 3,9" << endl;
    cout << resultado << endl;
}

void ejercicioTresDiez()
{

    int a = 7 / 2;
    int b = 7 % 2;
    int c = 12 / 3;
    int d = 12 % 3;
    int e = 0 % 5;
    int f = 15 % 5;
    int g = (7 * 10) - 50 % (3 * 4) + 9;
    int h = (7 * (10 - 5) % 3) * 4 + 9;

    int resultados[8] = {a, b, c, d, e, f, g, h};

    cout << "Ejercicio 3,10" << endl;
    print(resultados, sizeof(resultados) / sizeof(resultados[0]));
}

void ejercicioTresOnce()
{
    int a = 9 - 5 - 3;
    int b = (2 / 3) + (3 / 5);
    int c = (9 / 2) / 5;
    int d = (7 % 5) % 3;
    int e = 7 % (5 % 3);
    int f = (7 % 5) % 3;
    int g = (7 % 5 % 3);
    int h = (((12 + 3) / 2) / (8 - (5 + 1)));
    int i = 12 / (2 * 3);
    int j = sqrt(pow(4, 2));
    int k = pow(sqrt(4), 2);
    int l = trunc(815) + round(815);

    int resultados[12] = {a, b, c, d, e, f, g, h, i, j, k, l};

    cout << "Ejercicio 3,11" << endl;
    print(resultados, sizeof(resultados) / sizeof(resultados[0]));
}

void ejercicioTresDoce()
{
    int sumaNumerosPares = 0;
    int sumaNumerosImpares = 0;

    cout << "Ejercicio 3,12" << endl;
    for(int i = 1; i <= 200; i++) {                
        if(i % 2 == 0) {
            sumaNumerosPares += i;
        } else {
            sumaNumerosImpares += i;
        }
    }

    cout << "Suma numero pares " << sumaNumerosPares << endl;
    cout << "Suma numero impares " << sumaNumerosImpares << endl;
}

int main()
{

    // Ejercicio (3,9)
    ejercicioTresNueve();
    // Ejercicio (3,10)
    ejercicioTresDiez();
    // Ejercicio (3,11)
    ejercicioTresOnce();
    // Ejercicio (3,12)
    ejercicioTresDoce();

    return 0;
}