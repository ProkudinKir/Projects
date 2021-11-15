
#include <iostream>
using namespace std;
int main(){
    
    cout <<"[+]Времена года\n";
    cout <<"[1]Январь\n";
    cout <<"[2]Февраль\n";
    cout <<"[3]Март\n";
    cout <<"[4]Апрель\n";
    cout <<"[5]Май\n";
    cout <<"[6]Июнь\n";
    cout <<"[7]Июль\n";
    cout <<"[8]Август\n";
    cout <<"[9]Сентябрь\n";
    cout <<"[10]Откябрь\n";
    cout <<"[11]Ноябрь\n";
    cout <<"[12]Декабрь\n";
    cout <<"[-]Выбранный вариант: ";
    int menu;
    cin >> menu;
    switch (menu) {
        case 1:
            cout << "Январь\n";
            break;
        case 2:
            cout << "Февраль\n";
            break;
        case 3:
            cout << "Март\n";
            break;
        case 4:
            cout << "Апрель\n";
            break;
        case 5:
            cout << "Май\n";
            break;
        case 6:
            cout << "Июнь\n";
            break;
        case 7:
            cout << "Июль\n";
            break;
        case 8:
            cout << "Август\n";
            break;
        case 9:
            cout << "Сентябрь\n";
            break;
        case 10:
            cout << "Октябрь\n";
            break;
        case 11:
            cout << "Ноябрь\n";
            break;
        case 12:
            cout << "Декабрь\n";
        default:
            cout << "Вы ввели неправильное значениe!\n";
            
            break;
    }
    
    
}
