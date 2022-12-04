public Deck{
	
	public Deck(istream&, const CardFactory){
	}
	
	public Card* draw(){
		Card* card = cards.back();
		cards.pop_back();
		return card;
	}
	
	protected:
		vector<Card> cards;
}