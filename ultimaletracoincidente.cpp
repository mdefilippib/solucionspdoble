#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n; cin >>n;
    vector<string> nombre;

    
    for (int i = 0; i <= n; i++)
    {
        string nnombre;
        getline(cin, nnombre);
        nombre.push_back(nnombre);
    }
    
    char letraabuscar;
    cin >> letraabuscar;

    for (int i = 0; i <= n; i++)
    {
       int final=nombre[i].size()-1;
       if(nombre[i][final]==letraabuscar)
       {
           cout << nombre[i] << endl;
       }
        
    }
    
    return 0;
}
