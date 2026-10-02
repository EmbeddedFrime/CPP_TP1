#pragma once 
#include <map>
#include <string>



class Lexique
{
private:
    std::map<std::string, unsigned int> lexique_;
    std::string nom_;
    
public:
    Lexique(/* args */);
    ~Lexique();


    void exportTxt();
    void deleteWord(std::string w);
    void displavoidyNbWord();

    int  nbOfOccurrences(std::string w);

};

