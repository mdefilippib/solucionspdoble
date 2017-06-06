#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n; cin >> n;
    
    vector<int> numeros;
    for (int i = 0; i<n; i++)
    {
        float x = 0;
        cin >> x; 
        numeros.push_back(x);
    }
    int mayor=numeros[0];
    
    for (auto i=0; i<n; i++)
    {
        if (numeros[i]>0)
        {
            if (numeros[i]> mayor)
            {
                mayor=numeros[i];
            }
        }
        if (numeros[i]<0)
        {
            if (numeros[i]>= mayor)
            {
                mayor=numeros[i];
            }
        }
    }
    cout << "El maximo es: " << mayor << endl;

    cout << "La lista al reves es: " << endl;
    
    for (int i=n-1; i<=numeros.size(); i--)
    {
        cout << numeros[i] << endl;
    }
    
    
    return 0;
}
