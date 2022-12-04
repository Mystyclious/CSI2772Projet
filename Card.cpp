class Card{
	
	public:
		
		virtual int getCardsPerCoin(int coins){
			
		}
		
		virtual string getName(){
		
		}
		
		virtual void print(ostream& out){
		
		}
};

class Blue: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 4;
		}
		else if(coins == 2){
			return 6;
		}
		else if(coins == 3){
			return 8;
		}
		else if(coins == 4){
			return 10;
		}
	}
	
	string getName(){
		return blue;
	}
	
	virtual void print(ostream& out){
		out.put("B");
	}
};

class Chili: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 3;
		}
		else if(coins == 2){
			return 6;
		}
		else if(coins == 3){
			return 8;
		}
		else if(coins == 4){
			return 9;
		}
	}
	
	string getName(){
		return chili;
	}
	
	virtual void print(ostream& out){
		out.put("C");
	}
};

class Stink: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 3;
		}
		else if(coins == 2){
			return 5;
		}
		else if(coins == 3){
			return 7;
		}
		else if(coins == 4){
			return 8;
		}
	}
	
	string getName(){
		return stink;
	}
	
	virtual void print(ostream& out){
		out.put("S");
	}
};

class Green: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 3;
		}
		else if(coins == 2){
			return 5;
		}
		else if(coins == 3){
			return 6;
		}
		else if(coins == 4){
			return 7;
		}
	}
	
	string getName(){
		return green;
	}
	
	virtual void print(ostream& out){
		out.put("G");
	}
};

class soy: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 2;
		}
		else if(coins == 2){
			return 4;
		}
		else if(coins == 3){
			return 6;
		}
		else if(coins == 4){
			return 7;
		}
	}
	
	string getName(){
		return soy;
	}
	
	virtual void print(ostream& out){
		out.put("s");
	}
};

class black: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 2;
		}
		else if(coins == 2){
			return 4;
		}
		else if(coins == 3){
			return 5;
		}
		else if(coins == 4){
			return 6;
		}
	}
	
	string getName(){
		return black;
	}
	
	virtual void print(ostream& out){
		out.put("b");
	}
};

class Red: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 1){
			return 2;
		}
		else if(coins == 2){
			return 3;
		}
		else if(coins == 3){
			return 4;
		}
		else if(coins == 4){
			return 5;
		}
	}
	
	string getName(){
		return Red;
	}
	
	virtual void print(ostream& out){
		out.put("R");
	}
};

class garden: public Card{
	
	public:
	
	int getCardsPerCoin(int coins){
		if(coins == 0){
			return 0;
		}
		else if(coins == 2){
			return 2;
		}
		else if(coins == 3){
			return 3;
		}
	}
	
	string getName(){
		return garden;
	}
	
	virtual void print(ostream& out){
		out.put("g");
	}
};