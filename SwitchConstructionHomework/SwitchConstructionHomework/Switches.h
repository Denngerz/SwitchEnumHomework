#pragma once
//Swithes4 and Swithes8 and Switches 9
enum class Month { January, February, March, April, May, June, July, August, September, October, November, December };
// change so I can use numbers

//Swithes5
enum class Sign { Add = 1, Minus = 2, Multiply = 3, Devide = 4 };

//Swithes6
enum class Length { Decimetere, Kilometre, Metre, Milimetre, Centimeter };

//Swithes7
enum class Mass { Kilogram, Miligram, Gram, Tone, Centnere };

//Switches10 and Switches11
enum class Commands { TurnRight = -1,  Continue = 0, TurnLeft = 1 };
enum class Sides : char { North = 'N', West = 'W', South = 'S', East = 'E' };

//Switches11
enum class Commands2 { TurnArround, TurnRight, TurnLeft };

//Switches12
enum class ElementsCircle { Radius, Diameter, Length, Area };

//Switches13
enum class ElementsTriangle { Side1, Side2, Height, Square };

//Switches15
enum class CardsNumber { Six, Seven, Eight, Nine, Ten, Eleven, Twelve, Thirteen, Fourteen };
enum class CardsType { Hearts, Diamonds, Spades, Clubs };

class Switches
{
public:
	void Switches1();
	void Switches2();
	void Switches3();
	int Switches4(int month);
	void Switches5(const int sign, float a, float b);
	float Switches6(float size, const int lenght);
	float Switches7(float mass_of_object, const int mass);
	void Switches8(int day, Month month);
	void Switches9(int day, Month month);
	void Switches10(Sides side, const int command);
	void Switches11(Sides side, Commands2 command1, Commands2 command2);
	void Switches12(float size, ElementsCircle element);
	void Switches13(float size, ElementsTriangle element);
	void Switches14();
	void Switches15(CardsNumber number, CardsType type);
	void Switches16(int age);
	void Switches17(int num);
	void Switches18(int num);
	void Switches19(int year);
	void Switches20(int day, int month);

};

