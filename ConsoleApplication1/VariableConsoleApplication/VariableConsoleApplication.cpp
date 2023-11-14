#include <iostream>
/*















* Napisz program, kt�ry poprosi u�ytkownika o podanie trzech liczb (a, b, c) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.

* Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych. Nast�pnie wykona operacje (+, -, *, /) i wy�wietli wyniki.

* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wy�wietlaj�c wynik.

* Napisz program, kt�ry poprosi u�ytkownika o podanie wsp�rz�dnych (x1, y1) i (x2, y2) dw�ch punkt�w w uk�adzie kartezja�skim, a nast�pnie obliczy odleg�o�� mi�dzy nimi, wy�wietlaj�c wynik.


*/

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
	float lenghtInMeterFromUser;
	std::cout << "Podaj d�ugo�� w metrach \n";
	std::cin >> lenghtInMeterFromUser;

	float lenghtInCentimeter;
	lenghtInCentimeter = lenghtInMeterFromUser * 100;

	float lenghtInMilimeter = lenghtInCentimeter * 10;

	float lenghtInKilometer = lenghtInMeterFromUser / 1000;

	std::cout << "Metry:" << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry:" << lenghtInCentimeter << "\n";
	std::cout << "Milimetry:" << lenghtInMilimeter << "\n";
	std::cout << "Kilometry:" << lenghtInKilometer << "\n";
}

//* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci boku a i b prostok�ta, a nast�pnie obliczy i wy�wietli pole prostok�ta.

void task3()
{
	float sideA;
	std::cout << "Podaj d�ugo�� boku a \n";
	std::cin >> sideA;

	float sideB;
	std::cout << "Podaj d�ugo�� boku b \n";
	std::cin >> sideB;

	float areaOfRectangle;
	areaOfRectangle = sideA * sideB;
	std::cout << "Pole prostok�ta wynosi" << areaOfRectangle; "\n";
}

//* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy i wysoko�ci tr�jk�ta, a nast�pnie obliczy pole tego tr�jk�ta, wy�wietlaj�c wynik.
void task4()
{
	float sideA;
	std::cout << "Podaj d�ugo�� boku a \n";
	std::cin >> sideA;

	float sideH;
	std::cout << "Podaj d�ugo�� wysoko�ci h \n";
	std::cin >> sideH;

	float areaOfTriangle;
	areaOfTriangle = sideA * sideH / 2;
	std::cout << "Pole tr�jk�ta wynosi" << areaOfTriangle; "\n";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie promienia ko�a i obliczy pole tego ko�a, wy�wietlaj�c wynik.
void task5()
{
	float sideRadius;
	std::cout << "Podaj promie� ko�a \n";
	std::cin >> sideRadius;

	float areaOfCircle;
	areaOfCircle = 3.14 * sideRadius * sideRadius;
	std::cout << "Pole ko�a wynosi " << areaOfCircle; "\n";
}
//*Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci podstawy a, podstawy b i wysoko�ci h trapezu, a nast�pnie obliczy pole tego trapezu, wy�wietlaj�c wynik.
void task6()
{
	float sideA;
	std::cout << "Podaj d�ugo�c podstawy A \n";
	std::cin >> sideA;

	float sideB;
	std::cout << "Podaj d�ugo�c podstawy B \n";
	std::cin >> sideB;

	float sideH;
	std::cout << "Podaj d�ugo�� wysoko�ci H \n";
	std::cin >> sideH;

	float areaOfTapeze;
	areaOfTapeze = (sideA + sideB) * sideH / 2;
	std::cout << "Pole trapezu wynosi " << areaOfTapeze; "\n";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci kraw�dzi sze�cianu i obliczy jego obj�to��, wy�wietlaj�c wynik.
void task7()
{
	float edge;
	std::cout << "Podaj d�ugo�� kraw�dzi \n";
	std::cin >> edge;

	float areaOfCube;
	areaOfCube = 6 * edge * edge;
	std::cout << "Pole sze�cianu wynosi " << areaOfCube; "\n";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie temperatury w stopniach Celsiusza, a nast�pnie przeliczy j� na stopnie Fahrenheita i wy�wietli wynik.
void task8()
{
	float tempC;
	std::cout << "Poda temperwture w celciuszach \n";
	std::cin >> tempC;

	float tempF;
	tempF = 2 * tempC + 32;
	std::cout << "Temperatura w stopniach fahrenheit wynosi " << tempF; "\n";
}
//* Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task9()
{
	float PLN;
	std::cout << "Podaj ilo�c PLN \n";
	std::cin >> PLN;

	float euro;
	euro = PLN / 4.5;
	std::cout << "Kwota w euro to " << euro << "\n";

	float pound;
	pound = PLN / 5;
	std::cout << "Kwota w funtach to " << pound << "\n";
}
//* Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb (a, b) i obliczy �redni� arytmetyczn� tych liczb. Nast�pnie wy�wietli wynik.
void task10();
{
	float numberA;
	std::



	float numberB;






}
int main()
{
	setlocale(LC_CTYPE, "polish");


	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	task10();
}

/*
Algorytm - sko�czony zbi�r instrukcji realizuj�cych postawione przed nim zadanie.
Kolejno�� instrukcji w zbiorze jest okre�lona.
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