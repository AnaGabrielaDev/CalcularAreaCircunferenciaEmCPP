#include <iostream>
#include <cmath>
using namespace std;

//fórmula para calcular a área de uma circunferencia A = Pi * r ^ 2
#define pi 3.141592
int main (){
    float raio;

    cout << "digite o valor do raio da circunferencia: ";
    cin >> raio;
    cout << "A area da circunferencia eh: " << pi * pow (raio, 2);

    return 0;
}