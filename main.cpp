#include "Singleton.h"
#include "useSingleton01.h"
#include "Logger.h"
int main() {
	//Singleton<UseSingleton1>::createInstance()->show();
	Logger::getInstance().log("Program started");
	Logger::getInstance().log("Something happened");

}