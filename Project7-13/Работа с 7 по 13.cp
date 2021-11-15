#include <iostream>
using namespace std;
int main(){
   cout << "[+] Программа - “Геометрические фигуры”\n";
   cout << "[1] Линия\n";
   cout << "[2] Квадрат\n";
   cout << "[3] Прямоугольник\n";
   cout << "[4] Треугольник\n";
   cout << "[5] Решетка\n";
   cout << "[6] Крестик\n";
   cout << "[7] Плюс\n";
   cout <<"[+] Выберите фигуру: ";
  int menu;
   cin >> menu;
  if (menu==1) {
   cout << "[+] Фигура: “Линия”\n";
   cout << "[1] Горизонтальная\n";
   cout << "[2] Вертикальная\n";
   cout << "[+] Выберите тип: ";
  int mens;
      cin >> mens;
  switch (mens) {
    case 1:
           cout << "[1] Горизонтальная\n";
         int lines;
         int liniya;
         char simvl;
           cout << "[+] Введите символ: ";
           cin >> simvl;
           cout << "[+] Введите длину линии: ";
           cin >> lines;
           cout << "[+] Введите высоту линии: ";
           cin >> liniya;
         for (int y = 0; y < liniya; y++) {
           cout <<"\t";
         for (int x = 0; x < lines; x++) {
         if (y == 0 || y == 0 - 1){
           cout <<simvl<< " ";
             }
         else {
           cout << ". ";
             }
         }
           cout << "\n";
       }
   break;
      case 2:
                         cout << "[1] Горизонтальная\n";
                         int line;
                         int liniy;
                         char simv;
                         cout << "[+] Введите символ: ";
                         cin >> simv;
                         cout << "[+] Введите длину линии: ";
                         cin >> line;
                         cout << "[+] Введите высоту линии: ";
                         cin >> liniy;
                         for (int y = 0; y < liniy; y++) {
                     cout <<"\t";
                     for (int x = 0; x < line; x++) {
                     if (x == 0 || x == 0 - 1){
                         cout <<simv<< " ";
                     }
                     else {
                         cout << ". ";
                         }
                     }
                     cout << "\n";
                          }
                         break;
      }
  }
  else if (menu==2){
      cout << "[+] Фигура: “Квадрат”\n";
      cout << "[1] Заполненный\n";
      cout << "[2] Пустой\n";
      cout << "[+] Выберите тип: ";
      int meni;
      cin >> meni;
      switch (meni) {
          case 1:
              cout << "[1] Заполненный\n";
              int razmer;
              char znak;
              cout << "[+] Введите символ: ";
              cin >> znak;
              cout << "[+] Размер: ";
              cin >> razmer;
              for (int y = 0; y < razmer; y++) {
          cout <<"\t";
          for (int x = 0; x < razmer; x++) {
          if (y == 0 || y && razmer - 1 ||
              x == 0 || x && razmer - 1 ){
              cout <<znak<< " ";
          }
          else {
              cout << ". ";
              }
          }
          cout << "\n";
               }
      break;
              
  case 2:
      cout << "[1] Пустой\n";
      int razme;
      char zna;
      cout << "[+] Введите символ: ";
      cin >> zna;
      cout << "[+] Размер: ";
      cin >> razme;
      for (int y = 0; y < razme; y++) {
  cout <<"\t";
  for (int x = 0; x < razme; x++) {
  if (y == 0 || y == razme - 1 ||
      x == 0 || x == razme - 1 ){
      cout <<zna << " ";
  }
  else {
      cout << ". ";
      }
  }
  cout << "\n";
       }
              break;
  default:
  cout <<"error"<<endl;
              break;
      }
  }
  else if (menu==3){
      cout << "[+] Фигура: “Прямоугольник”\n";
      cout << "[1] Заполненный\n";
      cout << "[2] Пустой\n";
      cout << "[+] Выберите тип: ";
      int men;
      cin >> men;
      switch (men) {
          case 1:
              cout << "[1] Заполненный\n";
              int shir;
              int vist;
              char znak;
              cout << "[+] Введите символ: ";
              cin >> znak;
              cout << "[+] Ширина: ";
              cin >> shir;
              cout << "[+] Высота: ";
              cin >> vist;
            
              for (int y = 0; y < vist; y++) {
          cout <<"\t";
          for (int x = 0; x < shir; x++) {
              if (y == 0 || (y && vist - 1) ||
                  (x == 0 || ((x )&& shir - 1)) ){
              cout <<znak<< " ";
          }
          else {
              cout << ". ";
              }
          }
          cout << "\n";
               }
      break;
          case 2:
              cout << "[2] Пустой\n";
              int shi;
              int vis;
              char zna;
              cout << "[+] Введите символ: ";
              cin >> zna;
              cout << "[+] Ширина: ";
              cin >> shi;
              cout << "[+] Высота:  ";
              cin >> vis;
            
              for (int y = 0; y < vis; y++) {
          cout <<"\t";
          for (int x = 0; x < shi; x++) {
          if (y == 0 || y == vis - 1 ||
              x == 0 || x == shi - 1 ){
              cout <<zna<< " ";
          }
          else {
              cout << ". ";
              }
          }
          cout << "\n";
               }
      break;
          default:
          cout <<"error"<<endl;
                      break;
      }
  }
  else if (menu==4){
      cout << "[+] Фигура: “Треугольник“\n";
      cout << "[1] Заполненный\n";
      cout << "[2] Пустой\n";
      cout << "[+] Выберите тип: ";
      int men;
      cin >> men;
      switch (men) {
          case 1:
              int r;
              cout << "[+] Высота треугольника: ";
              cin >> r;
              cout << "[+] Текстура линии: ";
              char text;
              cin >> text;
                    for (int i = 0; i < r; i++)
                    {
                      for (int j = 0; j < r - i; j++)
                        cout << " ";
                      for (int j = r - i; j < r + i; j++)
                        cout << text;
                      for (int j = r + i + 1; j < r * 2; j++)
                        cout << " ";
                      cout << "\n";
                    }
              break;
         
          case 2:
              cout << "[1] Заполненный\n";
              int ra;
              cout << "[+] Напишите размер: ";
              cin >> ra;
              char tex;
              cout << "[+] Введите символ: ";
              cin >> tex;
              for (int y = 0; y < ra; y++) {
                  for (int x =0; x < ra; x++) {
                      if (x ==(ra / 2)+ y || x == (ra / 2) - y || y == ra / 2){
                          cout << tex << " ";
                      }
                      else {
                          cout << ". ";
                      }
                  }
                  cout <<endl;
              }
              break;
          default:
          cout <<"error"<<endl;
              break;
      }
      
  }
              else if(menu == 5)
              {
                  cout << "[+] Фигура: “Решетка“\n";
                  int size = 0;
                  char texture;
                  cout << "[1]Размер(только нечетные): ";
                  cin >> size;
                  cout << "[+] Введите символ: ";
                  cin >> texture;
                  for (int i = 0; i < size; i++) {
                      for (int j = 0; j < size; j++) {
                          
                          if(i & 1 || j & 1)
                          {
                              cout << texture << " ";
                          }else {
                              cout << ". ";
                          }
               
                          }
                      cout << "\n";
                      }
              }
              else if(menu == 6)
              {
                  cout << "[+] Фигура: “Крестик“\n";
                  char texture;
                  cout << "[+] Введите символ: ";
                  cin >> texture;
                  int n;
                  cout << "[+] Размер(только нечетные): ";
                      cin>>n;
                      for(int i = 0; i < n; i++){
                          cout<<endl;
                          for(int j=0; j<n; j++){
                              if(i==j || (n-i)==j+1){
                                  cout<<texture;
                              }
                              else {
                                  cout<<".";
                              }
                          }
                          cout << "\n";
                      }

}
   else if(menu == 7){
       cout << "[+] Фигура: “Плюс”\n";
       char znak;
       cout << "[+] Введите символ: ";
       cin >> znak;
       int raz;
       cout << "[+] Размер(только нечетные): ";
           cin>> raz;
       for (int y = 0; y < raz; y++) {
           for (int x = 0; x < raz; x++) {
               if (x == raz / 2 || y == raz / 2) {
    cout << znak << " ";
       }
       else {
           cout << ". ";
       }
   }
       cout << endl;
   }
   }
}
