#include <iostream>
using namespace std;

void inputData(float &berat, float &tinggi) { //PROSEDUR
    cout << "Masukkan berat badan (KG) =";
        cin >> berat;
    
    cout << "Masukkan tinggi badan (Meter) = ";
        cin >> tinggi;
}

float hasilBMI(float berat, float tinggi){ //FUNGSI 1
    return berat/(tinggi * tinggi);
}

string keteranganBMI(float r){ //FUNGSI 2
    if (r < 18.5)
            return "Berat badan KURANG";
        
            else if (r < 25)
            return "Berat badan NORMAL";
        
            else if (r < 30)
            return "Berat badan KELEBIHAN"; 
        
            else
            return "OBESITAS";   
    
}
