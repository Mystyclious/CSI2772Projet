class Player{

	public:
		
		player(std::string& name){
			playerName = name;
			coins = 0;
		}
		
		std:string getName(){
			return playerName;
		}
		
		int getNumCoins(){
			return coins;
		}
		
		
		
		
	
	protected:
		string playerName;
		int coins
};
	
	