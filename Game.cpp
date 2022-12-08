class Game{

};
	
int main(){
	
	
	
	String name1;
	String name2;
	
	cout << "Enter name of player 1" << endl;
	cin >> name1 >> endl;
	cout << "Enter name of player 2" << endl;
	cin >> name2 >> endl;
	
	Player player1(name1);
	Player player2(name2);
	
	
	CardFactory cards;
	Deck deck = cards.getDeck();
	Hand handPlayer1(name1);
	Hand handPlayer2(name2);
	Table table;
	TradeArea tradeAR;
	
	int i = 0;
	
	for(i:i<5:i++){
		Card cardDrawn = deck.draw();
		handPlayer1.operator += cardDrawn;
		cardDraw = deck.draw();
		handPlayer2.operator += cardDrawn;
	}
	while(!deck.isEmpty()){
		
		table.operator("",table);
		handPlayer1.operator += deck.draw();
		if(tradeAR.numCards() != 0){
			
			string cardName;
			Card* t_aCard;
			cout << tradeAR.operator("", tradeAR) << endl;
			cout << "Select a card from Trade Area" << endl;
			cin >> cardName;
			t_aCard = tradeAR.trade(cardName);
			
			int selected;
			cout << "Select 1 to add to a chain" << endl;
			cout << "Select 2 to discard" << endl;
			cin >> selected;
			if(selected == 1){
				
				
			
	
	
}
	
		