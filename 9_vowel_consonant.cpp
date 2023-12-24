#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: ";
    cin >> word;

    int length = word.length();
    cout << "Length of the word: " << length << endl;

    string vowels = "";
    string consonants = "";

    for (int i = 0; i < length; i++)
    {
        if (word[i] == 'a' || word[i] == 'A' ||
            word[i] == 'e' || word[i] == 'E' ||
            word[i] == 'i' || word[i] == 'I' ||
            word[i] == 'o' || word[i] == 'O' ||
            word[i] == 'u' || word[i] == 'U')
        {
            vowels += word[i];
        }
        else
        {
            consonants += word[i];
        }
    }

    cout << "Vowels: ";
    for (int i = 0; i < vowels.length(); i++)
    {
        cout << vowels[i];
        if (i != vowels.length() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    cout << "Consonants: ";
    for (int i = 0; i < consonants.length(); i++)
    {
        cout << consonants[i];
        if (i != consonants.length() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}
