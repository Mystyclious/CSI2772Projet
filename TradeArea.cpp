#include "headers/TradeArea.h"

bool TradeArea::legal (Card* card){

    bool found = false;
    std::list<Card*>::iterator i;
    for( i = tradeAr.begin(); i != tradeAr.end(); i++){
        if( (*i)->getName() == card->getName()) found = true;
    }

    return found;
}

Card* TradeArea::trade (std::string card){

    Card* cardFound;
    std::list<Card*>::iterator i;

    for(i = tradeAr.begin(); i != tradeAr.end(); i++){
        if( (*i)->getName() == card){
            cardFound = *i;
            tradeAr.erase(i); // delete the card found
            break;
        } 
    }
    
    return cardFound;
}

int TradeArea::numCards(){ return tradeAr.size(); }


std::ostream& operator<<(std::ostream& output, const TradeArea& tr_arr){

    for(auto card : tr_arr.tradeAr){
        output << card->getName()[0] << " ";
    }

    return output;
}


void TradeArea::saveTradeArea(std::ofstream& filename){
    for(auto card: tradeAr){
        card->saveCard(filename);
        filename<<std::endl;
    }

    std::cout << "TradeArea saved." << std::endl;
}

std::list<Card*> TradeArea::getListOfCards(){
    return tradeAr;
}