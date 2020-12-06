#include<iostream>
#include<vector>
using namespace std;

/*** AUFGABE: Schreiben Sie eine Funktion, die die ersten n natürlichen Zahlen auf der Konsole ausgibt. ***/
void print_naturals(int n)
{

}

/*** AUFGABE: Schreiben Sie eine Funktion, die die ersten n geraden Zahlen auf der Konsole ausgibt. ***/
void print_even(int n)
{

}

/*** AUFGABE: Schreiben Sie eine Funktion, die feststellt, ob eine gegebene Zahl n eine Primzahl ist. ***/
bool is_prime(int n)
{
    return 0;
}

/*** AUFGABE: Schreiben Sie eine Funktion, die feststellt, wie viele Primzahlen es gibt, die kleiner als n sind. ***/
int primeCount(int n)
{
    return 0;
}

/*** AUFGABE: Schreiben Sie eine Funktion, die eine Liste der ersten n Primzahlen berechnet und zurückliefert. ***/
vector<int> primes(int n)
{
    return {};
}

int main()
{
    print_naturals(10);  // Soll 1 2 3 4 5 6 7 8 9 10 ausgeben
    print_naturals(5);   // Soll 1 2 3 4 5 ausgeben

    print_even(10);      // Soll 2 4 6 8 10 12 14 16 18 20 ausgeben

    cout << is_prime(5) << endl;  // Soll 1 ausgeben.
    cout << is_prime(2) << endl;  // Soll 1 ausgeben.
    cout << is_prime(10) << endl; // Soll 0 ausgeben.

    cout << primeCount(10) << endl; // Soll 4 ausgeben.
    cout << primeCount(20) << endl; // Soll 8 ausgeben.

    vector<int> primes_10 = primes(10);

    // Die folgende Schleife gibt alle Elemente des Vektors primes_10 aus.
    // Soll 2 3 5 7 11 13 17 19 23 29 ausgeben.
    for (int number : primes_10)
    {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
