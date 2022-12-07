class Deck{
	
	public:
	
	    Deck(vector<Card*> cards){
	        cards = cards;
	    }
	    
	    Card* draw(){
		    Card* card = &cards.back();
		    cards.pop_back();
		    return card;
	    }
	
	protected:
		vector<Card> cards;
};