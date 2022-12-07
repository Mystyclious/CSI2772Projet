#include "headers/DiscardPile.h"

Card* DiscardPile::pickUp(){
    Card* card;
    card =  this->back();
    this->pop_back();
    return card;
}

Card* DiscardPile::top(){
    return this->back();
}

void  DiscardPile::print(std::ostream& os){

    for(int i = 0; i < this->size(); i++){
        os << this->at(i)->getName()[0]<< " ";
    };
  
}


std::ostream& operator<<( std::ostream &output, const DiscardPile& dp ){

    if(dp.size() > 0)
       (dp.back())->print(output);
    else 
       output << "";

    return output;
}

void DiscardPile::saveDiscardPile(std::ofstream& filename){
    for(int i = 0;  i < this->size() ; i++){
        this->at(i)->saveCard(filename);
        filename << std::endl;
    }
    std::cout << "Discard Pile saved." << std::endl;
}