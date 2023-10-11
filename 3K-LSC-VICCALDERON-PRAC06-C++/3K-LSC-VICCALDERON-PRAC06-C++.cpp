// 3K-LSC-VICCALDERON-PRAC06-C++.cpp 



#include <iostream>
#include<vector>
using namespace std;
int main()
{
    //Se declara un vector de cadenas

    vector<string>aves = { "loro gris, "," ","paloma de diamante, "," ","coctel, "};
    cout << "los valores del vector antes de insertar:\n";
    //itera sobre el vector para imprimir los valores

    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << "";
    }
    cout << "\n";
    //se agrega 3 valores al fnal del vector utizando push back ()

    aves.push_back("mayna,  ");
    aves.push_back("periquito,  ");
    aves.push_back("cacatua");
    cout << "los valores del vector despues de insertar:\n";
     //se itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << "";
    }
    cout << "\n";
    return 0;




        
}
