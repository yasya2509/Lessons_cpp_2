
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

// symbol - искомый символ в строке
string FindVowels(const string& text)
{
    string vowels = "aeiouy";
    string box;
    for (size_t i = 0; i < text.size(); ++i) {
        for (size_t j = 0; j < vowels.size(); ++j) {
            if (text[i] == vowels[j])
            {
                box.push_back(text[i]);
                break;
            }
        }
    }

    
    // составляет строку из искомых символов
    return box;
}

void Test() {
    {
        string text = "aosgpenamllaskhksjdfaahrda"s;
        string result = FindVowels(text);
        assert(result.size() == 8);
        assert(result == "aoeaaaaa"s);
    }
    {
        string text = "hthsgnmbvrtpz"s;
        string result = FindVowels(text);
        assert(result.size() == 0);
        assert(result.empty());
    }
    {
        string text = "aeiouyie"s;
        string result = FindVowels(text);
        assert(result.size() == 8);
        assert(result == "aeiouyie"s);
    }
}

int main() {
    Test();
    cout << FindVowels("avhskdourtabxaagsuw") << endl;
    return 0;
}