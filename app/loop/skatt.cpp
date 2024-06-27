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
    int antal;
    double per_st, exkl_moms, inkl_moms, moms;
    const double moms_procent = 25.0;

    // ANGE ANTAL ENHETER
    cout << "Antal enhter? ";
    cin >> antal;
    // ANGE PERIS PER ST
    cout << "Pris per st? ";
    cin >> per_st;
    exkl_moms = per_st * antal;
    moms = exkl_moms * moms_procent / 100;
    inkl_moms = exkl_moms + moms;

    cout << endl
         << "FAKTURA\n"
         << "=======\n"
         << "Antal enheter: " << setw(9) << antal << "\n"
         << setprecision(2) << fixed << "Pris per enhet: " << setw(8) << per_st << "\n"
         << "Total pris: " << setw(11) << inkl_moms << "\n"
         << "Varav moms: " << setw(12) << moms << endl;
   


    return 0;
}