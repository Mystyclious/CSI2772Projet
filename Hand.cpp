#include "headers/Hand.h"

Card* Hand::play(){
    Card* card = pHand.front();
    pHand.pop(); 
    return card;
}

Card* Hand::top(){
    return pHand.front();
}

int Hand::numCards(){
    return pHand.size();
}

Card* Hand::getCard(int pos){
    Card* card = nullptr; 
    if(pos > pHand.size()-1){
        std::cout << "(getCard) The index "  << pos << " can not be used. Current size of the hand = " << pHand.size() << std::endl;
    }else{
        std::queue <Card*, std::list<Card*>> temp; /
        Card* temp_card = nullptr;  
        int find_idx = 0;
        while(!pHand.empty()){

            if(find_idx++ == pos){
                card = pHand.front();
            }
            temp_card = pHand.front(); 
            pHand.pop();    
            temp.push(temp_card); 
            
        }

        while(!temp.empty()){
            
            temp_card = temp.front(); 
            temp.pop();  
            pHand.push(temp_card); 
            
        }
    }

   
    return card;  
}


std::ostream& operator<<( std::ostream& output, Hand& hand){

    for( int pos = 0; pos < hand.numCards() ; pos++ ){
        output << hand.getCard(pos) << std::endl;
    }
    return output;
};


void Hand::saveHand(std::ofstream& filename){

    Card* card = nullptr; 
    std::queue <Card*, std::list<Card*>> temp; 
    Card* temp_card = nullptr;  
    int find_idx = 0;
    while(!pHand.empty()){
        temp_card = pHand.front(); 
        temp_card -> saveCard(filename);
        filename << std::endl;
        pHand.pop();   
        temp.push(temp_card); 
    }

    while(!temp.empty()){
        
        temp_card = temp.front(); 
        temp.pop();     
        pHand.push(temp_card); 
        
    }

    std::cout << "Hand saved." << std::endl;
}

std::queue <Card*, std::list<Card*>> * Hand::getListOfCards(){
    return &pHand;
}