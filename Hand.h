#ifndef HAND_H
#define HAND_H

#include "Card.h"

#include <queue>
#include <list>
#include <sstream>
#include <cstdlib>

class CardFactory;

class Hand{
    private:
        std::queue <Card*, std::list<Card*>> pHand; // player hand
        // empty the queue pHand
        void clearHand(){
            while(!pHand.empty()){
                pHand.pop();
            }
        }
    public:
        Hand(){};
       
        Hand(std::istream& input, const CardFactory* cf){
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
                    std::cout << "(Hand Constructor) Check the card name in the file. Value received : " << data << std::endl;
                    exit(1);
                }
                //
                if(card != nullptr) pHand.push(card);

            }

            std::cout << "Hand with " << count << " cards initialized from file properly." <<std::endl;

        };
        Hand& operator+=(Card* card){
            pHand.push(card);
            return *this;
        };
        Card* play();
        Card* top();
        Card* getCard(int pos);
        std::queue <Card*, std::list<Card*>>* getListOfCards();

        Card* operator[](int pos){
            Card* card = nullptr; 
            std::queue <Card*, std::list<Card*>> temp; 
            Card* temp_card = nullptr;  
            int find_idx = 0;
            while(!pHand.empty()){
                if(find_idx++ == pos){
                    card = pHand.front();
                    pHand.pop();
                }
                else
                {
                    temp_card = pHand.front(); 
                    pHand.pop();     
                    temp.push(temp_card); 
                }
            }

            while(!temp.empty()){
              
                temp_card = temp.front(); 
                temp.pop();    
                pHand.push(temp_card); 
                
            }
            return card;  
        };
        int numCards();
        friend std::ostream& operator<<( std::ostream&,  Hand& );
        void saveHand(std::ofstream& filename);

};

#endif 