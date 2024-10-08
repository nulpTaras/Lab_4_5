
//
//  main.cpp
//  Lab_4_5
//
//  Created by Taras Neridnyi on 08.10.2024.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>


using namespace std;

int main(int argc, const char * argv[]) {

    double x,y , R;
    srand(static_cast<unsigned int>(time(NULL)));
    cout << "Введіть значення R: ";
    cin >> R;

    // 1
    for (int i = 0; i<10; i++) {

        cout << "x and y : "; cin >> x; cin >> y;
        if( ((x >= -R && x <= 0 && y >= 0 && y <= R) &&
             (pow(x + R, 2) + pow(y-R, 2) >= R*R))     ||
           ((pow(x - R, 2) + pow(y+R, 2) >= R*R)     &&
            (x >= 0 && x <= R && y >= -R && y <= 0))  ||
           (x <= 0 && x >= -R && y >= -R && y <= 0)  ||
           (x >= 0 && x <= R && y >= 0 && y <= R)){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    cout << endl << fixed;
    
    cout << "-----------------------------------" << endl;
    cout << left << setw(12) << "x" << setw(14) << "y" << setw(2) << "Результат" << endl;
    cout << "-----------------------------------" << endl;
    
    //2
    for (int i =0; i<10; i++) {
            
         x = (static_cast<double>(rand()) / RAND_MAX) * 4*R - 2*R;
         y = (static_cast<double>(rand()) / RAND_MAX) * 4*R - 2*R;
        
        if( ((x >= -R && x <= 0 && y >= 0 && y <= R) &&
             (pow(x + R, 2) + pow(y-R, 2) >= R*R))     ||
           ((pow(x - R, 2) + pow(y+R, 2) >= R*R)     &&
            (x >= 0 && x <= R && y >= -R && y <= 0))  ||
           (x <= 0 && x >= -R && y >= -R && y <= 0)  ||
           (x >= 0 && x <= R && y >= 0 && y <= R)){
            cout << "|" << setw(8) << setprecision(4) << fixed << x
                         << " |" << setw(8) << setprecision(4) << fixed << y
                         << " |" << setw(12) << "yes" << " |" << endl;
        }
        else {
            cout << "|" << setw(8) << setprecision(4) << fixed << x
                         << " |" << setw(8) << setprecision(4) << fixed << y
                         << " |" << setw(12) << "no" << " |" << endl;
        }
    }
    cout << "-----------------------------------" << endl;

    return 0;
}
