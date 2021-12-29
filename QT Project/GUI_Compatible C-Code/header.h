#ifndef HEADER_H
#define HEADER_H



// function declaration

// void menu(float); // declaration of  menu

int compareStrings(char*, char*);
float transaction(float);
void updateItems();
float insertMoney(float);
void returnChange(float);
int main();

struct Snacks {
	char name[50];
	float price;
	int quantity;
};

struct Snacks snack1 = { "Dorritos - Nacho Cheese",1.75,10 };
struct Snacks snack2 = { "Lay's Potato Chips - Orignal",2.15,9 };
struct Snacks snack3 = { "Snickers",1.50,5 };
struct Snacks snack4 = { "Water",1.00,15 };

float amountDeposited = .0;

#endif
