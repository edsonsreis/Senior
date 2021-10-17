#include <iostream>

using namespace std;

int main()
{
    int numero,divisor=0;
    cout<<"Insira um numero: "<<endl;
    cin>>numero;

    for(int i=1; i<=numero; i++)
    {

        if(numero%i==0)
        {
            cout<<i<<" e um divisor de "<<numero<<endl;
            divisor++;
        }
        else
        {
            cout<<i<<" nao e um divisor de "<<numero<<endl;
        }
    }
    cout<<numero<<" possui "<<divisor<<" divisores"<<endl;
    return 0;
}
