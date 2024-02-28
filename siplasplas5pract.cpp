#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Функция для переворачивания строки задом наперед
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Функция для удаления гласных из строки
string removeVowels(const string& str) {
    string result;
    for (char ch : str) {
        if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u') {
            result += ch;
        }
    }
    return result;
}

// Функция для удаления согласных из строки
string removeConsonants(const string& str) {
    string result;
    for (char ch : str) {
        if (!(tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')) {
            result += ch;
        }
    }
    return result;
}

// Функция для рандомной перестановки символов в строке
string shuffleString(const string& str) {
    string shuffled = str;
    random_shuffle(shuffled.begin(), shuffled.end());
    return shuffled;
}

int main() {
    string word;
    int choice;

    cout << "Vvedite slovechko: ";
    cin >> word;

    cout << "Vibirite deistvie:\n";
    cout << "1. Slovo zadom napered.\n";
    cout << "2. Vivesti bez glasnih.\n";
    cout << "3. Vivesti bez soglasnih.\n";
    cout << "4. Randomno raskidat' slovo.\n";
    cout << "Vash vibor: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Slovo zadom napered " << reverseString(word) << endl;
        break;
    case 2:
        cout << "Slovo bez glasnih: " << removeVowels(word) << endl;
        break;
    case 3:
        cout << "Slovo bez soglasnih: " << removeConsonants(word) << endl;
        break;
    case 4:
        cout << "Randomno raskidannie bukvi: " << shuffleString(word) << endl;
        break;
    default:
        cout << "Neverniy vibor brad." << endl;
        break;
    }

    return 0;
}
