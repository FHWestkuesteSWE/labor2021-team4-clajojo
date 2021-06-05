#pragma once
#include <string>
#include <map>
class Raumverzeichnis
{
public:
	static Raumverzeichnis* getExamplar();
	int RaumNummer(std::string);
	void init();
private:
	static Raumverzeichnis* theExamplar;
	Raumverzeichnis();
	std::map<std::string, int> raumByName;
};