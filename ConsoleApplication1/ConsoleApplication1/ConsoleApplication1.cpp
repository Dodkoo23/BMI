#include<iostream>
using namespace std;

int main() {

    float m, h, bmi;


    cout << "Zadaj váhu v kilách : ";
    cin >> m;
    cout << "Zadaj výšku v metroch : ";
    cin >> h;


    bmi = m / (h * h);

    if (bmi < 18, 5)
        cout << "Podváha" << endl;
    else if (bmi > 18, 5 && bmi < 24, 99)
        cout << "Optimálna váha" << endl;
    else if (bmi > 25 && bmi < 29,99)
        cout << "Nadváha" << endl;
    else if (bmi > 30)
        cout << "Obezita" << endl;

            
            
    system("pause>0");

}