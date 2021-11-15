#include <iostream>
using namespace std;
int main(){
    cout <<"[+]Добро пожаловать в калькуль\n";
    cout <<"[1]Русские слова\n";
    cout <<"[2]Английские слова\n";
    cout <<"[3]Выйти\n";
    cout << "[-]Выбере вариант: ";
    int menu;
    cin >> menu;
    
    switch (menu) {
        case 1:
            cout << "[1] Человек\n";
            cout << "[2] Солнце\n";
            cout << "[3] Комната\n";
            cout << "[4] Машина\n";
            cout << "[5] Завтрак\n»";
            cout << "[6] Стол\n";
            cout << "[7] Стул\n";
            cout << "[8] Морковь\n»";
            cout << "[9] Футбол\n";
            cout << "[10] Спортзал\n";
            cout << "[11] Куртка\n";
            cout << "[12] Программист\n";
            cout << "[13] Попугай\n";
            cout << "[14] Абрикос\n";
            cout << "[15] Мороженое\n";
            cout << "[+] Для перевода: ";
                 int men;
             cin >> men;
            switch (men) {
                case 1:
                    cout <<"People";
                    break;
                case 2:
                    cout <<"Sun\n";
                    break;
                case 3:
                    cout <<"Room\n";
                    break;
                case 4:
                    cout <<"Car\n";
                    break;
                case 5:
                    cout <<"Breakfest\n";
                    break;
                case 6:
                    cout <<"Table\n";
                    break;
                case 7:
                    cout <<"Chair\n";
                    break;
                case 8:
                    cout <<"Carrot\n";
                    break;
                case 9:
                    cout <<"Football\n";
                    break;
                case 10:
                    cout <<"Gum\n";
                    break;
                case 11:
                    cout <<"Jacket\n";
                    break;
                case 12:
                    cout <<"programmer\n";
                    break;
                case 13:
                    cout <<"Parrot\n";
                    break;
                case 14:
                    cout <<"Apricot\n";
                    break;
                case 15:
                    cout <<"Ice cream\n";
                    break;
                default:
                    cout << "Невернвый ответ!\n";
            }
                    break;
                case 2:
            cout << "[1] People\n";
            cout << "[2] Cun\n";
            cout << "[3] Room\n";
            cout << "[4] Car\n";
            cout << "[5] Breakfest\n";
            cout << "[6] Table\n";
            cout << "[7] Chair\n";
            cout << "[8] Carrot\n";
            cout << "[9] Footbool\n";
            cout << "[10] Gum\n";
            cout << "[11] Jacket\n";
            cout << "[12] Programmer\n";
            cout << "[13] Parrot\n";
            cout << "[14] Apricot\n";
            cout << "[15] Ice cream\n";
            cout << "[+] Для перевода: ";
                 int mens;
             cin >> mens;
            switch (mens) {
                case 1:
                    cout <<"Человек\n";
                    break;
                case 2:
                    cout <<"Солнце\n";
                    break;
                case 3:
                    cout <<"Комната\n";
                    break;
                case 4:
                    cout <<"Машина\n";
                    break;
                case 5:
                    cout <<"Завтрак\n";
                    break;
                case 6:
                    cout <<"Стол\n";
                    break;
                case 7:
                    cout <<"Стул\n";
                    break;
                case 8:
                    cout <<"Морковь\n";
                    break;
                case 9:
                    cout <<"Футбол\n";
                    break;
                case 10:
                    cout <<"Спортзал\n";
                    break;
                case 11:
                    cout <<"Куртка\n";
                    break;
                case 12:
                    cout <<"Программист\n";
                    break;
                case 13:
                    cout <<"Попугай\n";
                    break;
                case 14:
                    cout <<"Абрикос\n";
                    break;
                case 15:
                    cout <<"мороженое\n";
                    break;
                default:
            cout << "Невернвый ответ!\n";
            }
                    break;
        case 3:
        default:
            cout << "Вы вышли!\n";
    }
}
