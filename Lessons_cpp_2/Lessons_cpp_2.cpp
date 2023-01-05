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

// написать реализацию функции
vector<string> ParseText(string text) 
{
	string vovels = "Hello Google my name is Slava I am coder c++";
	string box;
	for (size_t i = 0; i < text.size(); ++i) {
		if (text[i] == ' ') {
			box.push_back(text[i]);
		}
	}
	cout << endl;
}
void Test() {
	{
		string text = "First"s;
		vector<string> result = { "First"s };
		assert(ParseText(text) == result);
	}
	{
		string text = "Hello Google my name is Slava I am coder c++"s;
		vector<string> result = {"Hello"s, "Google"s, "my"s, "name"s, "is"s, "Slava"s, "I"s, "am"s, "coder"s, "c++"s};
		assert(ParseText(text) == result);
	}
	{
		string text;
		vector<string> result = ParseText(text);
		assert(result.empty());
	}
}

int main() {
	Test();
	ParseText("Hello Google my name is Slava I am coder c++");
	return 0;
}