#include <iostream>
using namespace std;

int main() {
   cout << "[+] Добро пожаловать в календарь\n";
   cout << "[1] Календарь \n";
   cout << "[2] Выход тут \n";
   cout << "[-] Вариант ответа: ";
   int menu;

   int day = 0;
   string month;
   cin >> menu;
   switch (menu) {
   case 1:
       cout << "[1] Январь \n[2] Февраль \n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Октябрь\n[11] Ноябрь\n[12] Декабрь\n[+] Выбранный месяц: ";
       cin >> menu;
       switch (menu) {
       case 1:
           month = "Января";
           break;
       case 2:
           month = "Февраля";
           break;
       case 3:
           month = "Марта";
           break;
       case 4:
           month = "Апреля";
           break;
       case 5:
           month = "Мая";
           break;
       case 6:
           month = "Июня";
           break;
       case 7:
           month = "Июля";
           break;
       case 8:
           month = "Августа";
           break;
       case 9:
           month = "Сентября";
           break;
       case 10:
           month = "Октября";
           break;
       case 11:
           month = "Ноября";
           break;
       case 12:
           month = "Декабря";
           break;

       default:
           cout << "ERROR!";
           break;
       }
       cout << "[-]Выбранный день месяца: ";
       cin >> menu;
       switch (menu) {
       case 1:
           day = 1;
           break;
       case 2:
           day = 2;
           break;
       case 3:
           day = 3;
           break;
       case 4:
           day = 4;
           break;
       case 5:
           day = 5;
           break;
       case 6:
           day = 6;
           break;
       case 7:
           day = 7;
           break;
       case 8:
           day = 8;
           break;
       case 9:
           day = 9;
           break;
       case 10:
           day = 10;
           break;
       case 11:
           day = 11;
           break;
       case 12:
           day = 12;
           break;
       case 13:
           day = 13;
           break;
       case 14:
           day = 14;
           break;
       case 15:
           day = 15;
           break;
       case 16:
           day = 16;
           break;
       case 17:
           day = 17;
           break;
       case 18:
           day = 18;
           break;
       case 19:
           day = 19;
           break;
       case 20:
           day = 20;
           break;
       case 21:
           day = 21;
           break;
       case 22:
           day = 22;
           break;
       case 23:
           day = 23;
           break;
       case 24:
           day = 24;
           break;
       case 25:
           day = 25;
           break;
       case 26:
           day = 26;
           break;
       case 27:
           day = 27;
           break;
       case 28:
           day = 28;
           break;
       case 29:
           day = 29;
           break;
       case 30:
           day = 30;
           break;
       case 31:
           day = 31;
           break;



       default:
           cout << "Вы ввели неправильное значение!";
           break;
       }
       cout << "Сейчас " << day << " " << month <<endl;

       break;
   case 2:
       cout << "Покеда";
       return 0;
       break;
   default:
       cout << "Вы ввели неправильное значение!";
       return 0;
       break;
   }

}
