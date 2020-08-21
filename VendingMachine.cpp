#include <iostream>
using namespace std;

void BuyAgain();

	int array_stocks[5] = {20, 20, 20, 20, 20};
	int n, quantity, price, insert, change, buy;
	
main()
{
	// Added comment test
	cout << "\t\t\tVending Machine\n" << endl;
	cout << "\tChoices\t\t\tPrices\t\tStocks\n";
	cout << "[1] Mineral Water\t|\t P15\t   |\t  " << array_stocks[0] << "\n"
			"[2] Coca-cola\t\t|\t P25\t   |\t  " << array_stocks[1] << "\n"
			"[3] Royal\t\t|\t P23\t   |\t  " << array_stocks[2] << "\n"
			"[4] Sprite\t\t|\t P23\t   |\t  " << array_stocks[3] << "\n"
			"[5] Pepsi\t\t|\t P20\t   |\t  " << array_stocks[4] << endl;
			
			cout << "\n\tEnter Choice : ";
			cin >> n;
			
				cout << "\tEnter Quantity: ";
				cin >> quantity;
				
			if(n == 1){
					if(array_stocks[0] <= 0){
						cout << "\tOut of Stocks!";
						BuyAgain();
					}
					
				price = 15;
				array_stocks[0] = array_stocks[0] - quantity;

			}else if(n == 2){
					if(array_stocks[1] <= 0){
						cout << "\tOut of Stocks!";
						BuyAgain();
					}
					
				price = 25;
				array_stocks[1] = array_stocks[1] - quantity;

			}else if(n == 3){
					if(array_stocks[2] <= 0){
						cout << "\tOut of Stocks!";
						BuyAgain();
					}
					
				price = 23;
				array_stocks[2] = array_stocks[2] - quantity;

			}else if(n == 4){
					if(array_stocks[3] <= 0){
						cout << "\tOut of Stocks!";
						BuyAgain();
					}
				
				price = 23;
				array_stocks[3] = array_stocks[3] - quantity;

			}else if(n == 5){
					if(array_stocks[4] <= 0){
						cout << "\tOut of Stocks!";
						BuyAgain();
					}
				
				price = 20;
				array_stocks[4] = array_stocks[4] - quantity;

			}
				price = price * quantity;
				
				cout << "\tPrice: " << price << endl;
				cout << "\tInsert Money: ";
				
				do{
					cin >> insert;
					change = insert - price;
				
					if(insert < price){
						cout << "\n\tInsufficient Money.\n"
								 "\tInsert More Money: ";
						}
				}while(insert < price);
				
					cout << "\n\tYour Change: " << change << endl;
					
					BuyAgain();
	return 0;
}

void BuyAgain(){
	
		cout << "\n\t\t[1] Buy-Again.\n"
				"\n\t\t[2] Exit." << endl;
							
				cout << "\n\tEnter Here: ";
				do{
				
				cin >> buy;
				
				if(buy == 1){
					system("cls");
					main();
				}else if(buy == 2){
							cout << "\n\t\tTransaction Closed!" << endl;
							break;
					}
						cout << "\n\tEnter Again: ";
						
				}while(buy != 1 || 2);	
				
}
