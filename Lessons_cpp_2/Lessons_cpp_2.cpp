/*******************************************************************************
	Задание: написать функцию, которая разделяет слова одной строки и складывает
	каждое слово в вектор (вектор строк). Слова разделяются только ОДНИМ пробелом,
	без запятых, точек и т.д. Могут существовать слова, состоящие из одной буквы
	Если строка пустая, то вектор тоже должен был пустым.
*******************************************************************************/

#include <iostream>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

// функция создает вектор count копий принятой строки 
vector<string> CopyString(const string& text, size_t count)
{
	vector<string> result(count);
	for (size_t i = 0; i < result.size(); ++i) {
		result[i] = text;
	}
	return result;
}

void Test() {

	string text = "Happy New Year"s;
	size_t  box = 5;
	vector<string> copies = CopyString(text,box);
	assert(box == copies.size());
	for (size_t i = 0; i < copies.size(); ++i) {
		assert(copies[i] == text);
	}

	box = 0;
	copies = CopyString(text, box);
	assert(copies.empty());
}








int main() {
	Test();
	
	return 0;
}