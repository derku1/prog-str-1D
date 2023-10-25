#include <iostream>
// napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli
void task1()
{
	short ageFromUser;
	std::cout << "Podaj sw�j wiek\n";
	std::cin >> ageFromUser;

	std::cout << " Masz " << ageFromUser << " Lat.\n";
}

//Stw� program, kt�ry pobiera od uzytkownika
//d�ugo�� w metrach i przelicza ja na centymetry,
//milimetry i kilometry.Wy�wietl wyniki.
void task2()
{
	float lenghtInFrmoUser;
		std:: << "Podaj d�ugo�� w metrach \n";
		std:: >> lenghtInFrmoUser;

		float lenghtInCentimeter;
	lenghtInCentimeter = lenghtInMeterFromUser / 100;
}


int main()
{
	//task1();
	task2;
}

/*
Algorytm - zbi�r instrukcji realizuj�cych postawione przed nim zadanie.
Spoz�b zapisu:
* w punktach
* opis s�owny
* j�zyk programowania lub pseudokod
* zbi�r rysunk�w
* schemat blokowy
  
zmienna - jest to pewien obszar w pami�ci s�u��cy do przechwytywania danych. Te dane mo�na modyfikowa�.
Zmienna pozwasla przechowa� tylko jedn� warto�c w danym momencie czasu.

Deklaracja zmiennej  - mment jej utworzenia

typ_zmiennej nazwa_zmiennej

Typ zmiennej - m�wi o wielkosci obszaru w pami�ci i rodzaju przechowywanych danych.

short           liczby ca�kowite ze znakiem    2 bajty     <-32 768; 32 767>
int/long        liczby ca�kowite ze znakiem    4 bajty     <-2 147 483 648; 2 147 483 647>
long long       liczby ca�kowite ze znakiem    8 bajt�w    <-9 223 372 036 854 775 808; 9 223 372 036 854 775 807>

Je�eli przed powy�szymi typami dodamy s�owo "unsinged" to zakres jest od 0 do podwojonego zakresu g�rnego plus 1.

float           liczby rzeczywiste ze znakiem  4 bajty
double          liczby rzeczywiste ze znakiem  8 bajt�w
ling double     liczby rzeczywiste ze znakiem  12 bajt�w

Nazwa zmiennej - nazwa obszaru w pami�ci. Poprzes ta nazw� odwo�ujemy si� do tego obszaru.

Wymagana kompilatora wzgl�dem nazwy:
* u�ycie tylko dozwolonych znak�w 
- alfabet angielski a-z oraz A-Z
- cyfry arabskie 0-9
- podkre�lenie (pod�oga)_
* pierwszym znakiem nie moze byc cyfra
* nie moze to by� s�owo kluczowe danego j�zyka programowania
* musi by� unikalny w danej widoczno�ci

Wymagania programist�w:
* Jezeli nazwa sk�ada sie z wielu wyraz�w to zamiast spacji:
- uzywamy znaku podkre�lenia ( _ )
- stosujemy camel case, czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
  zaczynamy z du�ej litery np. firstNumberForUser
* nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli miec znaczenie
* nazwy po angielsku !!!!







*/            