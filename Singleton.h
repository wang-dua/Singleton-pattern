#pragma once

template <typename T>
class Singleton {
private:
	Singleton();
	Singleton(const Singleton<T>&) = delete;
	Singleton<T>& operator= (const Singleton<T>) = delete;
	~Singleton() = default;
private:
	static T* instance;
public:
	static T* createInstance();
};

template <typename T>
T* Singleton<T>::instance = nullptr;
template <typename T>
T* Singleton<T>::createInstance() {
	if (instance == nullptr) {
		instance = new T();
	}
	return instance;
}