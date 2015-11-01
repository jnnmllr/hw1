// fibonacci Reihe

#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c;
    int N;
    
    //Einlesen von N
    cout << "N = ?" << endl;
    cin >> N;
    
    // for-Schleife zur Berechnung der N-ten Fibonaccizahl
    for(int i=2; i<N+1; i++){
        c=a+b;
        a=b;
        b=c;
    }
    // Ausgabe der N-ten Fibonaccizahl
    cout << c << endl;
    return 0;
}
