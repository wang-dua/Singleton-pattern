#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Logger {
private:
	std::fstream file;
	Logger() {
		file.open("log.txt", std::ios::app);
	}
	~Logger() {
		file.close();
	}

public:
	Logger(const Logger&) = delete;
	Logger& operator=(const Logger&) = delete;
	static Logger& getInstance() {
		static Logger instance;
		return instance;
	}
	void log(const std::string& msg) {
		file << msg << std::endl;
	}
};