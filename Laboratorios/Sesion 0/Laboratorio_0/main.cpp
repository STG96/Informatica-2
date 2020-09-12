#include <iostream>

using namespace std;

int main()
{
    int fila, colum;
    for(fila=0; fila<=6; fila+=1)
    {
        for(colum=0; colum<=12; colum+=1)
        {
            if (colum<=fila)
            {
                cout << char(colum+65);
            }
            else if(12 - colum<=fila)
            {
                cout << char(12-colum+65);
            }
            else
            {
                cout << " ";
            }
        }cout << "\n";
    }
    for(fila=5; fila>=0; fila-=1)
    {
        for(colum=0; colum<=12; colum+=1)
        {
            if (colum<=fila)
            {
                cout << char(colum+65);
            }
            else if(12 - colum<=fila)
            {
                cout << char(12-colum+65);
            }
            else
            {
                cout << " ";
            }
        }cout << "\n";
    }
    return 0;
}
