
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

// symbol - искомый символ в строке
string FindSymbol(const string& text, char symbol)
{
    string box;
    for (size_t i = 0; i < text.size(); ++i)
    {
        if (text[i] == symbol)
        {
            box.push_back(text[i]);
        }
    }
    // составляет строку из искомых символов
    return box;
}

void Test() {
    string text = "aosgpenamllaskhksjdfaahrda"s;
    {
        string result = FindSymbol(text, 'a');
        assert(result.size() == 6);
        assert(result == "aaaaaa"s);
    }
    {
        string result = FindSymbol(text, 's');
        assert(result.size() == 3);
        assert(result == "sss"s);
    }
}

int main() {
    Test();
    string text = "aosgpenamllaskhksjdfaahrda"s;
    string result = FindSymbol(text, 'a');
    cout << result << endl;
    return 0;
}