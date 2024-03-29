#include <vector>
#include <iostream>
#include <sstream>
#include <cstdlib>

#ifndef DISCARD_PILE_H
#define DISCARD_PILE_H

#include "Card.h"
class CardFactory;

class DiscardPile:  public std::vector<Card*>{
    public:

        DiscardPile(): std::vector<Card*>(){};

        DiscardPile(std::istream& input, const CardFactory* cf): std::vector<Card*>(){
            std::string line;
            Card* card = nullptr;
            int count = 0;
            while (std::getline(input, line))
            {
                std::istringstream iss(line);
                std::string data;
                if (!(iss >> data)) { 
                    continue;
                } 
                count++;
                if(data == "B")       card = new Blue;
                else if(data == "C")  card = new Chili;
                else if(data == "S")  card = new Stink;
                else if(data == "G")  card = new Green;
                else if(data == "s")  card = new soy;
                else if(data == "b")  card = new black;
                else if(data == "R")  card = new Red;
                else if(data == "g")  card = new garden;
                else {
                    std::cout << "(DiscardPile Constructor) Check the card name in the file. Value received : " << data << std::endl;
                    exit(1);
                }
                if(card != nullptr) this->push_back(card);

            }

            std::cout << "DiscardPile with " << count << " cards initialized from file properly." <<std::endl;

        };

        DiscardPile& operator+=(Card* c){
            this->push_back(c);
            return *this;
        };
        Card* pickUp();
        Card* top();
        void print(std::ostream&);
        friend std::ostream& operator<<( std::ostream &output, const DiscardPile& dp );
        void saveDiscardPile(std::ofstream& filename);

};

#endif