#include <iostream>
using namespace std;
int main(){

    string letra;

    cout << "Digite uma letra: " << endl;
    cin >> letra;

     if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "É vogal" << endl;
     } else {
        cout << "Não é vogal" << endl;
     }
     return 0;
}
