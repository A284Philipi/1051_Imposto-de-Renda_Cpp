#include <iostream>

using namespace std;

int main()
{
    double a, imposto;
    cin >> a;
    if (a <= 2000){
        cout << "Isento" <<endl;
    }else{
        cout << "R$ ";
    if (a <= 3000){
        imposto = ( a - 2000 ) * 0.08;
    }else{
    if (a <= 4500){
        imposto = (( a - 3000 ) * 0.18 ) + 80;
    }else{
    imposto = (( a - 4500 ) * 0.28 ) + 80 + ( 15 * 18 );
    }
    }
    cout.precision(2);
    cout << fixed << imposto <<endl;
    }
    return 0;
}
