#include <iostream>
// napisz program, który wczyta od u¿ytkownika jego wiek a nastêpnie wyœwietli go na konsoli
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swój wiek\n";
	std::cin >> ageFromUser;

	std::cout << " Masz " << ageFromUser << " Lat.\n";
}

//Stwó¿ program, który pobiera od uzytkownika
//d³ugoœæ w metrach i przelicza ja na centymetry,
//milimetry i kilometry.Wyœwietl wyniki.
void task2()
{
	float lenghtInFrmoUser;
		std:: << "Podaj d³ugoœæ w metrach \n";
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
Algorytm - zbiór instrukcji realizuj¹cych postawione przed nim zadanie.
Spozób zapisu:
* w punktach
* opis s³owny
* jêzyk programowania lub pseudokod
* zbiór rysunków
* schemat blokowy
  
zmienna - jest to pewien obszar w pamiêci s³u¿¹cy do przechwytywania danych. Te dane mo¿na modyfikowaæ.
Zmienna pozwasla przechowaæ tylko jedn¹ wartoœc w danym momencie czasu.

Deklaracja zmiennej  - mment jej utworzenia

typ_zmiennej nazwa_zmiennej

Typ zmiennej - mówi o wielkosci obszaru w pamiêci i rodzaju przechowywanych danych.

short           liczby ca³kowite ze znakiem    2 bajty     <-32 768; 32 767>
int/long        liczby ca³kowite ze znakiem    4 bajty     <-2 147 483 648; 2 147 483 647>
long long       liczby ca³kowite ze znakiem    8 bajtów    <-9 223 372 036 854 775 808; 9 223 372 036 854 775 807>

Je¿eli przed powy¿szymi typami dodamy s³owo "unsinged" to zakres jest od 0 do podwojonego zakresu górnego plus 1.

float           liczby rzeczywiste ze znakiem  4 bajty
double          liczby rzeczywiste ze znakiem  8 bajtów
ling double     liczby rzeczywiste ze znakiem  12 bajtów

Nazwa zmiennej - nazwa obszaru w pamiêci. Poprzes ta nazwê odwo³ujemy siê do tego obszaru.

Wymagana kompilatora wzglêdem nazwy:
* u¿ycie tylko dozwolonych znaków 
- alfabet angielski a-z oraz A-Z
- cyfry arabskie 0-9
- podkreœlenie (pod³oga)_
* pierwszym znakiem nie moze byc cyfra
* nie moze to byæ s³owo kluczowe danego jêzyka programowania
* musi byæ unikalny w danej widocznoœci

Wymagania programistów:
* Jezeli nazwa sk³ada sie z wielu wyrazów to zamiast spacji:
- uzywamy znaku podkreœlenia ( _ )
- stosujemy camel case, czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
  zaczynamy z du¿ej litery np. firstNumberForUser
* nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli miec znaczenie
* nazwy po angielsku !!!!







*/            