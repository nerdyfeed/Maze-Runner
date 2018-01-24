#include <iostream>
#include <windows.h>
#include <conio.h>
#include <clocale>

using namespace std;

void gameOverManagement()
{
	setlocale(LC_ALL,"rus");
system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     Game Over!\n\n\n\n\n\n\n\n\n\n\n";
system("pause");
Sleep(100);
exit(0);
} void gameVictoryManagement()
{
	setlocale(LC_ALL,"rus");
system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     Winner!\n\n\n\n\n\n\n\n\n\n\n";
system("pause");
exit(0);
} int dataManagement(int management, int stopGame)
{
if(management == 1)
{
  gameOverManagement();
  stopGame = 1;
}
if(management == 3)
{
  gameVictoryManagement();
  stopGame = 1;
}
management = 2;
return management,stopGame;
}
int main()
{
	setlocale(LC_ALL,NULL);
int menu;
int lvl;
int start2;
   menu:
   cout << "\n\t\t\t\t1 - Start\n\t\t\t\t2 - Exit\n\nChoose: ";
   cin >> menu;
    switch (menu)
        {
            case 1: {goto lvl; break;}
            case 2: {return 0; break;}
            default: {cout << "\nБудьте внимательнее!\n"; goto menu;}
        }
    lvl:
	cout << "\n\t\t\t\t1 - Level I\n\t\t\t\t2 - Level II\n\nChoose: ";
	cin >> lvl;
	switch (lvl)
	{
	 case 1: {goto start;}
	 case 2: {goto start;}
	}
// 1 - Стенки лабиринта
// 0 - Путь
//
// Мар 1
	//setlocale(LC_ALL,NULL);
	start:
    int mas[24][24] = { {1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,},
                        {1,0,1,0,0,1,0,1,0,0,0,1,1,1,1,0,0,0,0,1,},
                        {1,0,1,1,0,1,0,1,0,1,0,0,0,0,1,0,1,1,0,1,},
                        {1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0,1,},
                        {1,1,1,1,1,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,},
                        {1,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,1,},
                        {1,0,1,1,0,1,1,1,1,1,0,0,1,0,1,1,1,1,0,1,},
                        {1,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,0,0,0,1,},
                        {1,1,1,1,1,1,0,1,1,1,0,0,0,0,1,0,1,1,1,1,},
                        {1,1,0,0,0,1,0,0,1,1,0,1,1,1,1,0,0,0,0,1,},
                        {1,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,0,1,},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,1,},
                        {1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,},
                        {1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,},
                        {1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,1,0,1,},
                        {1,0,1,1,1,1,1,0,0,0,1,1,1,0,1,0,0,0,0,1,},
                        {1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,1,0,1,1,1,},
                        {1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,},
                        {1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,0,1,},
                        {1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,},
                        {1,0,0,0,1,0,0,0,1,0,1,1,1,1,1,1,0,1,0,1,},
                        {1,0,1,0,1,1,1,1,1,0,0,0,1,0,1,0,0,1,0,1,},
                        {1,0,1,0,0,0,0,0,1,1,1,0,0,0,1,0,1,1,0,1,},
                        {1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,} };
unsigned short keysArrow; int s1 = 0;
int s2 = 1;
int stopGame(0);
mas[s1][s2] = 2; do
{
  system("cls");
  for (int i = 0; i < 24; i++) //Переключение по строкам
  {
   for (int j = 0; j < 20; j++)// Переключение по столбцам
   {
    if (mas[i][j] == 1)
    {
     // Тип постройки
		setlocale(LC_ALL,NULL);
     cout << static_cast<char>(178);
     cout << static_cast<char>(178);
    }
    if (mas[i][j] == 0 || mas[i][j] == 3)
    {
      cout << "  ";
    }
    if (mas[i][j] == 2)
    {
		setlocale(LC_ALL,NULL);
      cout << static_cast<char>(219);
	  cout << static_cast<char>(219);
    }
   }
   cout << endl;
  }
  keysArrow = getch();
  keysArrow = getch();   if(keysArrow == 0)
  keysArrow = getch();
  if(keysArrow == 72 || keysArrow == 150 || keysArrow == 230)
  {
   // Вверх
   mas[s1][s2] = 1;
   s1--;
   dataManagement(mas[s1][s2],stopGame);
   mas[s1][s2] = 2;
  }
  if(keysArrow == 80 || keysArrow == 155 || keysArrow == 235)
  {
   // Вниз
   mas[s1][s2] = 1;
   s1++;
   dataManagement(mas[s1][s2],stopGame);
   mas[s1][s2] = 2;
  }
  if(keysArrow == 77 || keysArrow == 130 || keysArrow == 262)
  {
   // Вправо
   mas[s1][s2] = 1;
   s2++;
   dataManagement(mas[s1][s2],stopGame);
   mas[s1][s2] = 2;
  }
  if(keysArrow == 75 || keysArrow == 148 || keysArrow == 235)
  {
   // Влево
   mas[s1][s2] = 1;
   s2--;
   dataManagement(mas[s1][s2],stopGame);
   mas[s1][s2] = 2;
  }
} while(true);
    getch();
    return 0;
}