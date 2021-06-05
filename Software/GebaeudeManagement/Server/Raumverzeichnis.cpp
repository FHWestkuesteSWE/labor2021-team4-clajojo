#include "Raumverzeichnis.h"
#include <fstream>
using namespace std;

Raumverzeichnis* Raumverzeichnis::theExamplar = nullptr;

Raumverzeichnis::Raumverzeichnis() {

}

Raumverzeichnis* Raumverzeichnis::getExamplar() {
	if (theExamplar == nullptr) {
		theExamplar = new Raumverzeichnis();
	}
	return theExamplar;
}

void Raumverzeichnis::init() {
	ifstream rdat("raume.dat");
	int rnr;
	std::string rname;
	while (!rdat.fail()) {
		rdat >> rnr;
		rdat >> rname;
		raumByName[rname] = rnr;
	}
	rdat.close();
}

int Raumverzeichnis::RaumNummer(std::string s) {
	return raumByName[s];
}