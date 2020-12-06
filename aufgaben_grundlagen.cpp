/*** BESCHREIBUNG:
    Diese Datei enthält einige einfache Übungsaufgaben zu C++.
    
    Es sollen eine Reihe von Funktionen geschrieben und in der
    Main-Funktion testweise aufgerufen werden. Die Signatur der
    Funktionen ist jeweils vorgegeben.

    Hinweis: Die vorgegebenen Funktionen liefern alle entweder 0
             oder einen leeren String zurück. Dies dient dazu, dass
             diese Datei ohne Fehler compiliert werden kann, auch
             wenn die Aufgaben noch nicht bearbeitet sind.
             Sie müssen diese Vorgabe verändern.

    Hinweis: In der Main-Funktion sind verschiedene Tests vorgegeben.
             Für die Bearbeitung der Aufgaben kann es sinnvoll sein, wenn
             Sie die Tests auskommentieren, deren Aufgaben Sie jeweils gerade
             nicht bearbeiten. Sie können die Tests sogar in eigene Funktionen
             auslagern, um sie einfacher an- und ausschalten zu können.
 ***/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*** AUFGABE 1 (Ein-/Ausgabe):
    Schreiben Sie eine Funktion, die so lange Zahlen von der
    Konsole einliest, bis der Benutzer eine 0 eingibt.
    Anschlieﬂend soll die Funktion die Summe der eingegebenen
    Zahlen ausgeben.
 ***/
int summe_einlesen()
{
    return 0;
}

/*** AUFGABE 2 (Ein-/Ausgabe):
    Schreiben Sie eine Funktion, die einen String von der
    Konsole einliest und die diesen String zurückliefert.

    Die Funktion soll einen String als Parameter erwarten, der dem
    Benutzer angezeigt wird, bevor er zur Eingabe aufgefordert wird.
 ***/
string string_einlesen(string message)
{
    return "";
}

/*** AUFGABE 3 (for-Schleife)
 * Schreiben Sie eine Funktion, die ein Zahl n als Parameter erwartet.
 * Die Funktion soll die Summe aller Zahlen zwischen 1 und n berechnen
 * und zurückliefern.
 */
int summe(int n)
{
    return 0;
}

/*** AUFGABE 4 (Ein-/Ausgabe):
    Schreiben Sie eine Funktion, die eine Zahl als Argument erwartet
    und die anschlieﬂend das Doppelte dieser Zahl zurückliefert.
 ***/
int zahl_verdoppeln(int x)
{
    return 0;
}

/*** AUFGABE 5 (Strings/Arrays):
    Schreiben Sie eine Funktion, die einen String als Argument
    erwartet. Die Funktion soll die Anzahl der Buchstaben 'e'
    im String zurückliefern.
 ***/
int anzahl_e(string s)
{
    return 0;
}

/*** AUFGABE 6 (Strings/Arrays):
    Schreiben Sie eine Funktion, die einen vector<int>  und
    eine Zahl x als Argumente erwartet.
    Die Funktion soll die Anzahl der Vorkommen von x im Vector
    zurückliefern.
 ***/
int anzahl_x(vector<int> v, int x)
{
    return 0;
}

int main()
{
    /** Testen Sie Ihre Funktionen hier in der Main-Funktion **/

    // Tests für Aufgabe 1:
    cout << summe_einlesen() << endl;  // Ruft die Funktion auf und gibt ihr Ergebnis aus.

    // Tests für Aufgabe 2:
    // Ruft die Funktion zwei Mal mit unterschiedlichen Strings auf.
    // Wir erwarten, dass die beiden unterschiedlichen Meldungen ausgegeben werden, bevor dann jeweils eine Eingabe
    // gemacht werden kann. Die Eingabe sollte anschließend noch einmal auf der Konsole auftauchen.
    cout << string_einlesen("Bitte eine Zeichenkette eingeben:") << endl;
    cout << string_einlesen("Bitte eine noch etwas eingeben:") << endl;

    // Tests für Aufgabe 3:
    cout << summe(6) << endl;    // Soll 21 ausgeben.
    cout << summe(10) << endl;   // Soll 55 ausgeben.
    cout << summe(0) << endl;    // Soll 0 ausgeben.

    // Tests für Aufgabe 4:
    cout << zahl_verdoppeln(6) << endl;    // Soll 12 ausgeben.
    cout << zahl_verdoppeln(10) << endl;   // Soll 20 ausgeben.
    cout << zahl_verdoppeln(0) << endl;    // Soll 0 ausgeben.

    // Tests für Aufgabe 5:
    cout << anzahl_e("Hallo Welt") << endl;         // Soll 1 ausgeben.
    cout << anzahl_e("Vier kleine e...") << endl;   // Soll 4 ausgeben.
    cout << anzahl_e("Gar nichts") << endl;         // Soll 0 ausgeben.

    // Tests für Aufgabe 6:
    cout << anzahl_x({1,3,5,7}, 3) << endl;         // Soll 1 ausgeben.
    cout << anzahl_x({1,3,5,7,3}, 3) << endl;       // Soll 2 ausgeben.
    cout << anzahl_x({1,5,7}, 3) << endl;           // Soll 0 ausgeben.
    cout << anzahl_x({1,5,7}, 5) << endl;           // Soll 1 ausgeben.

    return 0;
}
