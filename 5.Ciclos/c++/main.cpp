#include <iostream>
using namespace std;

int main()
{
    int i=0;
    // Uso con FOR
    cout<<"For con variable creada\n";
    for (i=1;i<=10;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"For con creacion de variable\n";
    for(int j=1;j<=10;j++){
        cout<<j<<" ";;
    }
    cout<<"\n";
    cout<<"While\n";
    i=1;
    while(i<=10){
        cout<<i<<" ";;
        i++;
    }
    cout<<"\n";
    
    cout<<"Do While\n";
    i = 1;
    do{
        cout<<i<<" ";;
        i++;
    }while(i<=10);
    cout<<"\n";
}