#include <iostream>
using namespace std;

int main()
{
    int x=2, y=2;    
    int **matriz;
    int vector[3]={1,2,3};
    for(int i=0;i<3;i++)
        cout<<vector[i]<<"\n";
    matriz = (int **)malloc (y*sizeof(int *));    
    for (int i=0;i<y;i++)
    matriz[i] = (int *) malloc (x*sizeof(int));
    int cont=0;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x; j++)
        {
            matriz[i][j]=cont;
            cout<<matriz[i][j];
            cont++;
        }
        cout<<"\n";
    }
}