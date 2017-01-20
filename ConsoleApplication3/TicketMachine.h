class TicketMachine
{
public:
	TicketMachine();
	~TicketMachine();
	void showPrompt();
	void insertMoney(int money);
	void showBalance();
	void printTicket();
	void showTotal();
private:
	const int PRICE;
	int balance = 0;
	int total = 0;
};