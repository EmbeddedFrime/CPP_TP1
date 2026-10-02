#pragma once 
#include <map>
#include <string>

using LexiqueType = std::map<std::string, unsigned int>;


class Lexique
{
private:
    LexiqueType lexique_;
    std::string nom_;
    
public:
    Lexique(/* args */);
    ~Lexique();


    void exportTxt();

    int deleteWord(const std::string& w);
    void displayNbWord();

    int  nbOfOccurrences(std::string w);

};

