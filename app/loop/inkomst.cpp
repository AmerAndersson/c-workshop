#include <cmath>
#include <iomanip>
#include <iostream>
//------------------------------------------------
// decltype(dag_antals) n;  // får typen int
// decltype(skatt) x;       // får typen const int
// decltype(kurs) y;        // får typen double
//----------------------------------------------
// auto dag_antal = 0;     // får typen int
// const auto skatt = 10;  // får typen const int
// auto kurs = 0.0;        // får typen double
//------------------------------------------------

int main() {
    using namespace std;
    double b, r;
    int n;
    cout << "Belopp? ";
    cin >> b;
    cout << "Antal år? ";
    cin >> r;
    cout << setprecision(2) << fixed << "Kapitalet blir  " << b * pow(1 + r / 100, n) << endl;
    cout << "=========" << endl;

    int antal;
    double per_st, pris, rabatt;
    const double rabatt_proc = 10, grans = 1000;
    cout << "Antal enheter: ";
    cin >> antal;
    cout << "Pris per st: ";
    cin >> per_st;
    pris = per_st * antal;

    if (pris > grans) {
        rabatt = pris * rabatt_proc / 100;
        pris -= rabatt;

    } else {
        cout << "Priset blir: "
             << setprecision(2) << fixed << pris << endl;
    }

    return 0;
}