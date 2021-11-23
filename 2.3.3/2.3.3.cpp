// 2.3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence; string word; //Initialize variables
    int asdf;
    cout << "Enter a sentence:\n"; //Ask for sentence
    getline(cin, sentence); //Get sentence

    cout << "Enter a word:\n"; //Ask for sentence
    cin >> word; //Get sentence

    asdf = sentence.find(word); //Find the word, and define asdf as the word's posiiton

    if (asdf < 0) //Check if the position is under 0, or not found
    {
        cout << "\nNot found"; //Print results
    }
    else
    {
        cout << "\nFound at " << asdf; //Print results if found
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
