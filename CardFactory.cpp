
class CardFactory{
    
    private:
    
        vector<Card*> cards;
	
	public:
	    CardFactory(){
		    int i = 0;
		    while(i < 20){
                Blue B;
                this->cards.push_back(&B);
	    	}
    		i = 0;
    		while(i < 18){
                Chili C;
                this->cards.push_back(&C);
    		}
    		i = 0;
    		while(i < 16){
                Stink S;
                this->cards.push_back(&S);
    		}
    		i = 0;
    		while(i < 14){
                Green G;
                this->cards.push_back(&G);
    		}
    		i = 0;
    		while(i < 12){
    			soy s;
    			this->cards.push_back(&s);
    		}
    		i = 0;
    		while(i < 10){
    			black b;
    			this->cards.push_back(&b);
    		}
    		i = 0;
    		while(i < 8){
    			Red R;
    			this->cards.push_back(&R);
    		}
    		i = 0;
    		while(i < 6){
    			garden g;
    			this->cards.push_back(&g);
    		}
	    }
	
	
	    Deck getDeck(){
	        Deck deck(cards);
	        return deck;
	    }
	

};
