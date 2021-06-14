// main.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Client.h"

using namespace std;
int main(int argc, char* argv[])
{
    Client c(argv[1], argv[2]);
    char req[1024];
    char ans[1024];
    char wahl;
    do {
        std::cout << "Gebauedeleitsystem FHW 3000\n";
        cout << "Was wollen Sie tun: " << endl;
        cout << "Test123" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Aktuelle Raumtemperatur ueberpruefen \t(t)" << endl;
        cout << "Aussentueren oeffnen / schliessen \t(a)" << endl;
        cout << "..." << endl;
        cout << "Beenden \t\t\t\t(e)" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Ihre Wahl: ";
        cin >> wahl;
        switch (wahl) {
        case 't': // req zusammenbauen
            /*
            cout << "Waehlen Sie innen (i) oder aussen (a):" << endl;
            cin >> wahl;
            cout << endl;
            if (wahl == 'i') {
                strncpy_s(req, "i", 2);
            }
            else if (wahl == 'a') {
                strncpy_s(req, "a", 2);
            }
            else {
                break;
            }
            
            cout << "req[0] ist " << req[0] << endl;
            c.sendRequest(req, ans);
            cout << ans;
            cout << endl;
            break;
            */
        default:;

        }
    } while (wahl != 'e');
}