#include <iostream>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
   
     string letra;

    cout << "Informe uma letra: ";

    cin >> letra;
   
    if(letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u" or letra == "A" or letra == "E" or letra == "I" or letra == "O" or letra == "U") {
        cout << "A letra digitada é uma vogal." << endl;
    } else if( letra == "b" or letra == "c" or letra == "d" or letra == "f" or letra == "g" or letra == "h"  or letra == "j" or letra == "k" or letra == "l" or letra == "m" or letra == "n"  or letra == "p" or letra == "q" or letra == "r" or letra == "s" or letra == "t"  or letra == "v" or letra == "w" or letra == "x" or letra == "y" or letra == "z"){
        cout << "A letra digitada é uma consoante." << endl;
    } else if (letra == "A" or letra == "B" or letra == "C" or letra == "D" or letra == "E" or letra == "F" or letra == "G" or letra == "H" or letra == "I" or letra == "J" or letra == "K" or letra == "L" or letra == "M" or letra == "N" or letra == "O" or letra == "P" or letra == "Q" or letra == "R" or letra == "S" or letra == "T" or letra == "U" or letra == "V" or letra == "W" or letra == "X" or letra == "Y" or letra == "Z"){
        cout << "A letra digitada é uma consoante." << endl;
    } else{
        cout << "É um número" << endl;
    }
   
    return 0;
}
