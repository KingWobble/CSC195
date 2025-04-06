class Scooter {
public:
	void TurnOn();// Turn on the scooter
	void Accelerate();//Speed up

private:
	string color; // Color of the scooter
	int mph; //Current Miles Per Hour
	bool IsOn; // If the scooter is currently activated

};


class TableAndChairs {
public:
	void MakeChairOccupied();// Make it so a chair is occupied
	void AdjustPosition();//Move where the table and chairs currentyl are

private:
	string color;
	bool TableIsOccupied;// does the table have stuff on it
	int numbOfItemsOnTable;//how much stuff is on the table if any

};


Scooter scooter;
scooter.color = 