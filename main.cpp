#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 95);
    cout << "\aJak masz na imie?: ";
    cin >> imie;
    int pkt = 0;
    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");
    cout << imie << ", Witaj w GENSHIN IMPACT QUIZ!\n";
    Sleep(3000);
    cout << "Pytanie nr 1"<<endl;
    Sleep(1500);
    cout << "Ile gwiazdek mozna maksymalnie zdobyc na Abyss?"<<endl;
    cout << "a) 8"<<endl;
    cout << "b) 87"<<endl;
    cout << "c) Na abyss nie ma gwiazdek"<<endl;
    cout << "d) 36"<<endl;
    cout << "Co wybierasz?: ";
    cin >> odp;
    if(odp == "d")
    {
        cout << "DOBRZE!!! WSPANIALE!!!! GRATULACJE!!!!!";
        pkt++;
    }
    else
    {
        cout << "Nuh uh, 36 gwiazdek";
        pkt--;
    }
    Sleep(3000);
    system("cls");
    cout << "GENSHIN IMPACT QUIZ\n";
    Sleep(3000);
    cout << "Pytanie nr 2"<<endl;
    Sleep(1500);
    cout << "Jaka jest najpotezniejsza postac w grze"<<endl;
    cout << "a) Yae Miko"<<endl;
    cout << "b) Xiangling"<<endl;
    cout << "c) To wszystko zalezy jak zbudujesz dana postac blah blah blah"<<endl;
    cout << "d) Hu Tao"<<endl;
    cout << "Co wybierasz?: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "No oczywiscie ze dobrze";
        pkt++;
    }
    else
    {
        cout << "Nie bo Xiangling";
        pkt--;
    }
    Sleep(3000);
    system("cls");
    cout << "GENSHIN IMPACT QUIZ\n";
    Sleep(3000);
    cout << "Pytanie nr 3"<<endl;
    Sleep(1500);
    cout << "W jakim kraju powstala ta gra?"<<endl;
    cout << "a) Stany Zjednoczone"<<endl;
    cout << "b) Polska"<<endl;
    cout << "c) Tajwan"<<endl;
    cout << "d) Chiny"<<endl;
    cout << "Co wybierasz?:";
    cin >> odp;
    if(odp == "d")
    {
        cout << "Poprawnie! +1 social credit";
        pkt++;
    }
    else
    {
        cout << "WRONG! -1000000 social credit (social credit bo chodzi o chiny)";
        pkt--;

    }
    Sleep(3000);
    system("cls");
    cout << "GENSHIN IMPACT QUIZ\n";
    Sleep(3000);
    cout << "Pytanie nr 4"<<endl;
    Sleep(1500);
    cout << "Ile musielismy czekac na pierwszego cryo catalysta?"<<endl;
    cout << "a) ok 3 lata"<<endl;
    cout << "b) ok 4 lata"<<endl;
    cout << "c) dostalismy na poczatku gry"<<endl;
    cout << "d) ok 2 lata"<<endl;
    cout << "Co wybierasz?: ";
    cin >> odp;
    if(odp == "a")
    {
        cout << "Dobra odp! Fun fact: Wriothesley byl pierwszym cryo catalystem";
        pkt++;
    }
    else
    {
        cout << "nah. 3 lata. 3 lata minely 3 LATA";
        pkt--;

    }
    Sleep(3000);
    system("cls");
    cout << "GENSHIN IMPACT QUIZ\n";
    Sleep(3000);
    cout << "OSTATNIE PYTANIE!!!"<<endl;
    Sleep(1500);
    cout << "Ktory baner mial najwiekszy zysk (do 4.1, wedlug danych z hoyolaba)?"<<endl;
    cout << "a) Pierwszy baner Raiden Shogun"<<endl;
    cout << "b) baner Hu Tao z Yelan"<<endl;
    cout << "c) pierwszy baner Nahidy z rerunem Yoimiyi"<<endl;
    cout << "d) rerun Ayaki co trwal ponad miesiac"<<endl;
    cout << "Co wybierasz?: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Dobra odp!!! yay!!";
        pkt++;
    }
    else
    {
        cout << "ZLA ODPOWIEDZ!!! Hu Tao z Yelan";
        pkt--;
    }
    Sleep(3000);
    system("cls");
    if(pkt == 5)
    {
        cout<< "Gratulacje "<<imie<< "! Masz max ilosc punktow! Yippie!!! Yay!!!";
    }
    if(pkt < 5 && pkt > -1)
    {
         cout<< "Gratulacje! "<<imie<< ", masz " <<pkt<< " punkty! Nie jest zle!";
    }
    if(pkt < 0)
    {
        cout<< "Nie postarales sie " <<imie<<". " <<pkt<< " punkty? Slabo, slabo. Sprobuj jeszcze raz (jesli chcesz).";
    }
    return 0;
}
