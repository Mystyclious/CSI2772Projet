class Card{
    
	
	public:
	
        
		virtual int getCardsPerCoin(int coins) = 0;
		
		virtual string getName() = 0;
		
		virtual void print(ostream& out){};

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
    		else{
    		    return 0;
    		}		
    	}
    	
    	string getName(){
    		return "blue";
    	}
    	
    	void print(ostream& out){
    	    cout << "";
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
    		else{
    		    return 0;
    		}		
    	}
    	
    	string getName(){
    		return "Chili";
    	}
    	
    	void print(ostream& out){
            cout << "";
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
    		else{
    		    return 0;
    		}		
	}
	
	string getName(){
		return "Stink";
	}
	
    void print(ostream& out){
        cout << "";
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
		else{
		    return 0;
		}
	}
	
	string getName(){
		return "green";
	}
	
	void print(ostream& out){
        cout << "";
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
		else{
		    return 0;
		}
	}
	
	string getName(){
		return "soy";
	}
	
	void print(ostream& out){
        cout << "";
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
		else{
		    return 0;
		}		
	}
	
	string getName(){
		return "black";
	}
	
	void print(ostream& out){
        cout << "";
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
		else{
		    return 0;
		}		
	}
	
	string getName(){
		return "Red";
	}
	
	void print(ostream& out){
        cout << "";
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
		else{
		    return 0;
		}		
	}
	
	string getName(){
		return "garden";
	}
	
	void print(ostream& out){
        cout << "";
	}
};