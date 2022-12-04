class CardFactory{
	
	public CardFactory(){
		int i = 0;
		while(i < 20){
			Blue blue;
			cards.push_back(blue);
		}
		i = 0;
		while(i < 18){
			Chili chili;
			cards.push_back(chili);
		}
		i = 0;
		while(i < 16){
			Stink stink;
			cards.push_back(stink);
		}
		i = 0;
		while(i < 14){
			Green green;
			cards.push_back(green);
		}
		i = 0;
		while(i < 12){
			soy soy;
			cards.push_back(soy);
		}
		i = 0;
		while(i < 10){
			black black;
			cards.push_back(black);
		}
		i = 0;
		while(i < 8){
			Red red;
			cards.push_back(red);
		}
		i = 0;
		while(i < 6){
			garden garden;
			card push_back(garden);
		}
	}
	
	public CardFactory* getFactory(){
	}
	
	public Deck getDeck(){
	}
	
	protected:
	vector<Card*> cards;
}