#include <iostream>
using namespace std;
int main (){
    cout <<"[-] Добро пожаловать в калькулятор\n";
    cout <<"[1] Сложение\n";
    cout <<"[2] Вычитание\n";
    cout <<"[3] Умножение\n";
    cout <<"[4] Деление\n";
    cout <<"[5] Остаток\n";
    cout <<"[-] Введите значение: ";
    int menu;
    cin >> menu;
    if (menu==1){
    int a;
        cout <<"Введите первое число: ";
    cin >> a;
    int b;
        cout <<"Введите второе число: ";
    cin >> b;
    int c;
    c= a+b;
        cout << "«получилось число: "<< c <<endl;
    }
    else if (menu==2){
    int a;
        cout <<"Введите первое число: ";
    cin >> a;
    int b;
        cout <<"Введите второе число: ";
    cin >> b;
    int c;
        c= a-b;
        cout << "получилось число: "<< c <<endl;
    
}
    else if (menu==3){
    int a;
        cout <<"Введите первое число: ";
    cin >> a;
    int b;
        cout <<"Введите второе число: ";
    cin >> b;
    int c;
        c= a*b;
            cout << "получилось число: "<< c <<endl;}
    else if (menu==4){
        int a;
            cout <<"Введите первое число: ";
        cin >> a;
        int b;
            cout <<"Введите второе число: ";
        cin >> b;
        int c;
        c= a/b;
            cout << "получилось число: "<< c <<endl;}
    else if (menu==5){
        int a;
            cout <<"Введите первое число: ";
        cin >> a;
        int b;
            cout <<"Введите второе число: ";
        cin >> b;
        int c;
        c= a%b;
            cout << "получилось число: "<< c <<endl;}
    else {
        cout <<"[-]Вы ввели неправильное значение!\n";
    }
}
