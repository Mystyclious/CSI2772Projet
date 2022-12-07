#include "headers/Table.h"


bool Table::win(std::string& playerName){
    bool win = false;
    if(deck->size() == 0){
      
       if(p1->getNumCoins() > p2->getNumCoins()){
           playerName = p1->getName();
       }
       else if(p1 ->getNumCoins() < p2->getNumCoins()){
           playerName = p2->getName();
       }
       else{ //  equality
           playerName = "Equality";
       }

       win = true;
    }
    return win;
}

void Table::printHand(bool in){
     Player* current = currentPlayer == 0 ? p1 : p2; // get the current player
     current -> printHand(std::cout, in);
}


Player* Table::getPlayer(int id){
    currentPlayer = id;
    if (id==0) return p1;
    else return p2;
}

std::ostream& operator<<( std::ostream& output,  const Table&  tb){

    output << "> Player 1 : " << std::endl << std::endl << *(tb.p1) << std::endl;
    output << "> Player 2 : " << std::endl << std::endl << *(tb.p2) << std::endl;
    output << "> Discard Pile (Top) : "  << *tb.dp << std::endl << std::endl;
    output << "> Trade Area : "  << *tb.tradeAr << std::endl;
    output << "_______________________" << std::endl;
    return output;
};


void Table::saveTable(){
    
    std::ofstream file;

    file.open("Saved-Deck.txt", std::ios::trunc);
    deck->saveDeck(file);

    file.close();

    file.open("Saved-DiscardPile.txt", std::ios::trunc);
    dp->saveDiscardPile(file);
    file.close();

    file.open("Saved-TradeArea.txt", std::ios::trunc);
    tradeAr->saveTradeArea(file);
    file.close();

    p1->savePlayer(1);
    p2->savePlayer(2);

}

void Table::reloadPlayer(int p_id){
    std::ifstream file;
    char id[2];
    sprintf(id, "%d", p_id);
    std::string filename ="Saved-P"+std::string(id)+".txt";
    file.open(filename);
    if(file.is_open()){
        if(p_id == 1){
            p1 = new Player(file, cf);
        }else{ // p_id should be equal to 2
            p2 = new Player(file, cf);
        }
    }

    file.close();
    
}

void Table::reloadDeck(){
    std::ifstream deckFile("Saved-Deck.txt"); 
    if(deckFile.is_open()){
        deck = new Deck(deckFile,cf);
    }else{
        deck =  cf -> getDeck();
        std::cout << "Saved-Deck.txt not found. The deck has been generated from the CardFactory." << std::endl;
    }
}

void Table::reloadDiscardPile(){
    std::ifstream dpFile("Saved-DiscardPile.txt"); 
    if(dpFile.is_open()){
        dp = new DiscardPile(dpFile,cf);
    }else{

        dp =  new DiscardPile;
        std::cout << "Saved-DiscardPile.txt not found. Using empty discard pile." << std::endl;
    }
}

void Table::reloadTradeArea(){
    std::ifstream trArFile("Saved-TradeArea.txt");
    if(trArFile.is_open()){
        tradeAr = new TradeArea(trArFile,cf);
    }else{
        tradeAr =  new TradeArea;
        std::cout << "Saved-TradeArea.txt not found. Using empty trade area." << std::endl;
    }
}

Deck* Table::getDeck(){
    if(deck == nullptr){
        deck =  cf -> getDeck();
    }
    return deck;
}

DiscardPile* Table::getDiscardPile(){
    return dp;
}

TradeArea* Table::getTradeArea(){
    return tradeAr;
}