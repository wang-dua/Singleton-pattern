#pragma once
#include "Singleton.h"
#include <string>
#include <iostream>
class UseSingleton1 {
	friend class Singleton<UseSingleton1>;
private:
	std::string name01;
private:
	UseSingleton1() : name01("UseSingleton1") {};
	UseSingleton1(const UseSingleton1&) = delete;
	UseSingleton1& operator=(const UseSingleton1&) = delete;
	~UseSingleton1() = default;
public:
	void show() const {
		std::cout << name01 << std::endl;
	}
};

