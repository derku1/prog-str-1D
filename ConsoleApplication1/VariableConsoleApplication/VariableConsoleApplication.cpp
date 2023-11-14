#include <iostream>
/*















* Napisz program, który poprosi u¿ytkownika o podanie trzech liczb (a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.

* Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych. Nastêpnie wykona operacje (+, -, *, /) i wyœwietli wyniki.

* Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.

* Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych (x1, y1) i (x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.


*/

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
	float lenghtInMeterFromUser;
	std::cout << "Podaj d³ugoœæ w metrach \n";
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

//* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta.

void task3()
{
	float sideA;
	std::cout << "Podaj d³ugoœæ boku a \n";
	std::cin >> sideA;

	float sideB;
	std::cout << "Podaj d³ugoœæ boku b \n";
	std::cin >> sideB;

	float areaOfRectangle;
	areaOfRectangle = sideA * sideB;
	std::cout << "Pole prostok¹ta wynosi" << areaOfRectangle; "\n";
}

//* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
void task4()
{
	float sideA;
	std::cout << "Podaj d³ugoœæ boku a \n";
	std::cin >> sideA;

	float sideH;
	std::cout << "Podaj d³ugoœæ wysokoœci h \n";
	std::cin >> sideH;

	float areaOfTriangle;
	areaOfTriangle = sideA * sideH / 2;
	std::cout << "Pole trójk¹ta wynosi" << areaOfTriangle; "\n";
}
//* Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.
void task5()
{
	float sideRadius;
	std::cout << "Podaj promieñ ko³a \n";
	std::cin >> sideRadius;

	float areaOfCircle;
	areaOfCircle = 3.14 * sideRadius * sideRadius;
	std::cout << "Pole ko³a wynosi " << areaOfCircle; "\n";
}
//*Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.
void task6()
{
	float sideA;
	std::cout << "Podaj d³ugoœc podstawy A \n";
	std::cin >> sideA;

	float sideB;
	std::cout << "Podaj d³ugoœc podstawy B \n";
	std::cin >> sideB;

	float sideH;
	std::cout << "Podaj d³ugoœæ wysokoœci H \n";
	std::cin >> sideH;

	float areaOfTapeze;
	areaOfTapeze = (sideA + sideB) * sideH / 2;
	std::cout << "Pole trapezu wynosi " << areaOfTapeze; "\n";
}
//* Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.
void task7()
{
	float edge;
	std::cout << "Podaj d³ugoœæ krawêdzi \n";
	std::cin >> edge;

	float areaOfCube;
	areaOfCube = 6 * edge * edge;
	std::cout << "Pole szeœcianu wynosi " << areaOfCube; "\n";
}
//* Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.
void task8()
{
	float tempC;
	std::cout << "Poda temperwture w celciuszach \n";
	std::cin >> tempC;

	float tempF;
	tempF = 2 * tempC + 32;
	std::cout << "Temperatura w stopniach fahrenheit wynosi " << tempF; "\n";
}
//* Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
void task9()
{
	float PLN;
	std::cout << "Podaj iloœc PLN \n";
	std::cin >> PLN;

	float euro;
	euro = PLN / 4.5;
	std::cout << "Kwota w euro to " << euro << "\n";

	float pound;
	pound = PLN / 5;
	std::cout << "Kwota w funtach to " << pound << "\n";
}
//* Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb (a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb. Nastêpnie wyœwietli wynik.
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
Algorytm - skoñczony zbiór instrukcji realizuj¹cych postawione przed nim zadanie.
Kolejnoœæ instrukcji w zbiorze jest okreœlona.
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