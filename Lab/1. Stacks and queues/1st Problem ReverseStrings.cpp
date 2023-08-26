#include<iostream>
#include<vector>
#include <sstream>
#include <cstring>
#include<stack>

std :: vector<std::string> readInput()
{
    std :: vector <std::string> words;
    std :: string input;
    getline(std :: cin,input);
    std :: istringstream istr(input);

    std :: string word;
    while(istr>>word)
    {
        words.push_back(word);
    }

    return words;
}

void printWordsRev(const std :: vector<std::string> & words)
{
    std :: stack<std::string> reverseWords;
    for(const std :: string & word : words)
    {
        reverseWords.push(word);
    }

    while(!reverseWords.empty())
    {
        std :: cout << reverseWords.top() << " ";
        reverseWords.pop();
    }

    std :: cout << std :: endl;
}

int main()
{

    const std :: vector <std :: string> words = readInput();
    printWordsRev(words);

    return 0;
}