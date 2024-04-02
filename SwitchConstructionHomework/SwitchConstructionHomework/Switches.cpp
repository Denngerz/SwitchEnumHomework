#include "Switches.h"
#include <iostream>
#include <map>

int Switches::Switches4(Month month) {
	switch (month)
	{
	case Month::January:
		return 31;
		break;
	case Month::February:
		return 28;
		break;
	case Month::March:
		return 31;
		break;
	case Month::April:
		return 30;
		break;
	case Month::May:
		return 31;
		break;
	case Month::June:
		return 30;
		break;
	case Month::July:
		return 31;
		break;
	case Month::August:
		return 31;
		break;
	case Month::September:
		return 30;
		break;
	case Month::October:
		return 31;
		break;
	case Month::November:
		return 30;
		break;
	case Month::December:
		return 31;
		break;

	default:
		break;
	}
}

void Switches::Switches5(Sign sign, float a, float b) {
	switch (static_cast<int>(sign))
	{
	case static_cast<int>(Sign::Add):
		std::cout << a + b << std::endl;
		break;
	case static_cast<int>(Sign::Minus):
		std::cout << a - b << std::endl;
		break;
	case static_cast<int>(Sign::Multiply):
		std::cout << a * b << std::endl;
		break;
	case static_cast<int>(Sign::Devide):
		std::cout << a / b << std::endl;
		break;
	default:
		break;
	}
}

float Switches::Switches6(float size, Length lenght) {
	switch (static_cast<Length>(lenght))
	{
	case Length::Decimetere:
		return size / 10;
		break;
	case Length::Kilometre:
		return size * 1000;
		break;
	case Length::Metre:
		return size;
		break;
	case Length::Centimeter:
		return size / 100;
		break;
	case Length::Milimetre:
		return size / 1000;
		break;
	default:
		break;
	}
}

float Switches::Switches7(float mass_of_object, Mass mass) {
	switch (static_cast<Mass>(mass)) 
	{
	case Mass::Kilogram:
		return mass_of_object;
		break;
	case Mass::Miligram:
		return mass_of_object / 1000000;
		break;
	case Mass::Gram:
		return mass_of_object / 1000;
		break;
	case Mass::Centnere:
		return mass_of_object * 100;
		break;
	case Mass::Tone:
		return mass_of_object * 1000;
		break;
	default:
		break;
	}
}

void Switches::Switches8(int day, Month month) {
	std::map<Month, int> daysInMonth = {
		{Month::January, 31},
		{Month::February, 28},
		{Month::March, 31},
		{Month::April, 30},
		{Month::May, 31},
		{Month::June, 30},
		{Month::July, 31},
		{Month::August, 31},
		{Month::September, 30},
		{Month::October, 31},
		{Month::November, 30},
		{Month::December, 31}
	};
	day--;
	int temp = static_cast<int>(month);
	switch (day)
	{
	case 0:
		temp--;
		temp < 0 ? temp = 11 : temp = temp;
		std::cout << "Day: " << daysInMonth[static_cast<Month>(temp)] << std::endl;
		std::cout << "Month: " << temp + 1 << std::endl;
		break;
	default:
		std::cout << "Day: " << day << std::endl;
		std::cout << "Month: " << static_cast<int>(month) + 1 << std::endl;
		break;
	}
}

void Switches::Switches9(int day, Month month) {
	std::map<Month, int> daysInMonth = {
		{Month::January, 31},
		{Month::February, 28},
		{Month::March, 31},
		{Month::April, 30},
		{Month::May, 31},
		{Month::June, 30},
		{Month::July, 31},
		{Month::August, 31},
		{Month::September, 30},
		{Month::October, 31},
		{Month::November, 30},
		{Month::December, 31}
	};
	day++;
	int temp = static_cast<int>(month);
	bool dayCheck = day > daysInMonth[static_cast<Month>(temp)];
	switch (dayCheck)
	{
	case 1:
		temp++;
		temp > 11 ? temp = 0 : temp = temp;
		std::cout << "Day: " << 1 << std::endl;
		std::cout << "Month: " << temp + 1 << std::endl;
		break;
	default:
		std::cout << "Day: " << day << std::endl;
		std::cout << "Month: " << static_cast<int>(month) + 1 << std::endl;
		break;
	}
}

void Switches::Switches10(Sides side, Commands command) {
	switch (command)
	{
	case Switches::Commands::Continue:
		std::cout << "Continue going " << static_cast<char>(side) << std::endl;
		break;
	case Switches::Commands::TurnRight:
		switch (side) {
		case Sides::North:
			side = Sides::East;
			break;
		case Sides::East:
			side = Sides::South;
			break;
		case Sides::West:
			side = Sides::North;
			break;
		case Sides::South:
			side = Sides::West;
			break;
		}
		std::cout << "Turned to " << static_cast<char>(side) << std::endl;
			break;
	case Switches::Commands::TurnLeft:
		switch (side) {
		case Sides::North:
			side = Sides::West;
			break;
		case Sides::East:
			side = Sides::North;
			break;
		case Sides::West:
			side = Sides::South;
			break;
		case Sides::South:
			side = Sides::East;
			break;
		}
		std::cout << "Turned to " << static_cast<char>(side) << std::endl;
			break;
	default:
		break;
	}

}

void Switches::Switches11(Sides side, Commands2 command1, Commands2 command2){
	Commands2 array[2]{ command1, command2 };
	for (int i = 0; i < 2; i++) {
		switch (array[i])
		{
		case Switches::Commands2::TurnArround:
			switch (side) {
			case Sides::North:
				side = Sides::South;
				break;
			case Sides::East:
				side = Sides::West;
				break;
			case Sides::West:
				side = Sides::East;
				break;
			case Sides::South:
				side = Sides::North;
				break;
			}
			break;
		case Switches::Commands2::TurnRight:
			switch (side) {
			case Sides::North:
				side = Sides::East;
				break;
			case Sides::East:
				side = Sides::South;
				break;
			case Sides::West:
				side = Sides::North;
				break;
			case Sides::South:
				side = Sides::West;
				break;
			}
			break;
		case Switches::Commands2::TurnLeft:
			switch (side) {
			case Sides::North:
				side = Sides::West;
				break;
			case Sides::East:
				side = Sides::North;
				break;
			case Sides::West:
				side = Sides::South;
				break;
			case Sides::South:
				side = Sides::East;
				break;
			}
			break;
		default:
			break;
		} 
	}
	std::cout << "Going to " << static_cast<char>(side) << std::endl;
}

void Switches::Switches12(float size, ElementsCircle element) {
	const float pi = 3.14;

	switch (element)
	{
	case Switches::ElementsCircle::Radius:
		std::cout << "D = " << size + size << std::endl;
		std::cout << "L = " << 2 * pi * size << std::endl;
		std::cout << "S = " << pi * size * size << std::endl;
		break;
	case Switches::ElementsCircle::Diameter:
		std::cout << "R = " << size / 2 << std::endl;
		std::cout << "L = " << size * size << std::endl;
		std::cout << "S = " << pi * size * size / 4 << std::endl;
		break;
	case Switches::ElementsCircle::Length:
		std::cout << "R = " << size / (2*pi) << std::endl;
		std::cout << "D = " << size / pi << std::endl;
		std::cout << "S = " << size * size / (4*pi) << std::endl;
		break;
	case Switches::ElementsCircle::Area:
		std::cout << "R = " << sqrt(size / pi) << std::endl;
		std::cout << "D = " << 2 * sqrt(size / pi) << std::endl;
		std::cout << "L = " << sqrt(size / pi) * 2 * pi << std::endl;
		break;
	default:
		break;
	}
}

void Switches::Switches13(float size, ElementsTriangle element) {
	float c;
	float h;
	switch (element)
	{
	case Switches::ElementsTriangle::Side1:
		c = size * sqrt(2);
	    h = c / 2;
		std::cout << "c = " << c << std::endl;
		std::cout << "h = " << h << std::endl;
		std::cout << "s = " << c * h / 2 << std::endl;
		break;
	case Switches::ElementsTriangle::Side2:
		h = size / 2;
		std::cout << "a = " << size / sqrt(2) << std::endl;
		std::cout << "h = " << h << std::endl;
		std::cout << "s = " << h * size / 2 << std::endl;
		break;
	case Switches::ElementsTriangle::Height:
		c = size * 2;
		std::cout << "a = " << c / sqrt(2) << std::endl;
		std::cout << "c = " << c  << std::endl;
		std::cout << "s = " << size * c /2 << std::endl;
		break;
	case Switches::ElementsTriangle::Square:
		c = sqrt(size * 4);
		std::cout << "a = " << c * sqrt(2) << std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << "h = " << c / 2 << std::endl;
		break;
	default:
		break;
	}
}

void Switches::Switches15(CardsNumber number, CardsType type) {
	std::map<CardsNumber, std::string> cardsNumberStr = {
	{CardsNumber::Six, "Six "},
	{CardsNumber::Seven, "Seven "},
	{CardsNumber::Eight, "Eight "},
	{CardsNumber::Nine, "Nine "},
	{CardsNumber::Ten, "Ten "},
	{CardsNumber::Eleven, "Jack "},
	{CardsNumber::Twelve, "Queen "},
	{CardsNumber::Thirteen, "King "},
	{CardsNumber::Fourteen, "Ace "}
	};


	std::map<CardsType, std::string> cardsTypeStr = {
	{CardsType::Hearts, "hearts"},
	{CardsType::Diamonds, "diamonds"},
	{CardsType::Spades, "spades"},
	{CardsType::Clubs, "clubs"}
	};


	switch (number)
	{
	case Switches::CardsNumber::Six:
		std::cout << cardsNumberStr[CardsNumber::Six];
		break;
	case Switches::CardsNumber::Seven:
		std::cout << cardsNumberStr[CardsNumber::Seven];
		break;
	case Switches::CardsNumber::Eight:
		std::cout << cardsNumberStr[CardsNumber::Eight];
		break;
	case Switches::CardsNumber::Nine:
		std::cout << cardsNumberStr[CardsNumber::Nine];
		break;
	case Switches::CardsNumber::Ten:
		std::cout << cardsNumberStr[CardsNumber::Ten];
		break;
	case Switches::CardsNumber::Eleven:
		std::cout << cardsNumberStr[CardsNumber::Eleven];
		break;
	case Switches::CardsNumber::Twelve:
		std::cout << cardsNumberStr[CardsNumber::Twelve];
		break;
	case Switches::CardsNumber::Thirteen:
		std::cout << cardsNumberStr[CardsNumber::Thirteen];
		break;
	case Switches::CardsNumber::Fourteen:
		std::cout << cardsNumberStr[CardsNumber::Fourteen];
		break;
	default:
		break;
	}

	switch (type) 
	{
	case Switches::CardsType::Hearts:
		std::cout << cardsTypeStr[CardsType::Hearts] << std::endl;
		break;
	case Switches::CardsType::Clubs:
		std::cout << cardsTypeStr[CardsType::Clubs] << std::endl;
		break;
	case Switches::CardsType::Diamonds:
		std::cout << cardsTypeStr[CardsType::Diamonds] << std::endl;
		break;
	case Switches::CardsType::Spades:
		std::cout << cardsTypeStr[CardsType::Spades] << std::endl;
		break;
	default:
		break;
	}
}

void Switches::Switches16(int age) {
	int last_digit = age % 10;
	int first_digit = (age - last_digit) / 10;
	switch (first_digit)
	{
	case 2:
		std::cout << "Twenty ";
		break;
	case 3:
		std::cout << "Thirty ";
		break;
	case 4:
		std::cout << "Fourty ";
		break;
	case 5:
		std::cout << "Fifty ";
		break;
	case 6:
		std::cout << "Sixty ";
		break;
	default:
		break;
	}
	bool fromFiveToZero = last_digit < 5 && last_digit > 0;
	switch (fromFiveToZero)
	{
	case 1 :
		std::cout << "years" << std::endl;
		break;
	default:
		std::cout << "yearss" << std::endl;
		break;
	}
}

void Switches::Switches17(int num) {
	std::string description;
	int units = num % 10;
	int tens = num / 10;

	switch (tens) {
	case 1:
		switch (num) {
		case 10: description = "ten educational tasks"; break;
		case 11: description = "eleven educational tasks"; break;
		case 12: description = "twelve educational tasks"; break;
		case 13: description = "thirteen educational tasks"; break;
		case 14: description = "fourteen educational tasks"; break;
		case 15: description = "fifteen educational tasks"; break;
		case 16: description = "sixteen educational tasks"; break;
		case 17: description = "seventeen educational tasks"; break;
		case 18: description = "eighteen educational tasks"; break;
		case 19: description = "nineteen educational tasks"; break;
		}
		break;
	default:
		switch (units) {
		case 1: description = "one educational task"; break;
		case 2: description = "two educational tasks"; break;
		case 3: description = "three educational tasks"; break;
		case 4: description = "four educational tasks"; break;
		case 5: description = "five educational tasks"; break;
		case 6: description = "six educational tasks"; break;
		case 7: description = "seven educational tasks"; break;
		case 8: description = "eight educational tasks"; break;
		case 9: description = "nine educational tasks"; break;
		}
		if (tens > 1) {
			switch (tens) {
			case 2: description = "twenty " + description; break;
			case 3: description = "thirty " + description; break;
			case 4: description = "forty " + description; break;
			}
		}
		break;
	}
	std::cout << description << std::endl;
}

void Switches::Switches18(int num) {
	int hundreds = num / 100;
	int tens = (num - (hundreds * 100)) / 10;
	int ones = num % 10;

	switch (hundreds)
	{
	case 1:
		std::cout << "one hundred ";
		break;
	case 2:
		std::cout << "two hundred ";
		break;
	case 3:
		std::cout << "three hundred ";
		break;
	case 4:
		std::cout << "four hundred ";
		break;
	case 5:
		std::cout << "five hundred ";
		break;
	case 6:
		std::cout << "six hundred ";
		break;
	case 7:
		std::cout << "seven hundred ";
		break;
	case 8:
		std::cout << "eight hundred ";
		break;
	case 9:
		std::cout << "nine hundred ";
		break;
	default:
		break;
	}

	switch (tens)
	{
	case 1:
		switch (ones)
		{
		case 1:
			std::cout << "eleven" << std::endl;
			break;
		case 2:
			std::cout << "twelve " << std::endl;
			break;
		case 3:
			std::cout << "thirteen" << std::endl;
			break;
		case 4:
			std::cout << "furteen " << std::endl;
			break;
		case 5:
			std::cout << "fiveteen " << std::endl;
			break;
		case 6:
			std::cout << "sixteen " << std::endl;
			break;
		case 7:
			std::cout << "seventeen " << std::endl;
			break;
		case 8:
			std::cout << "eighteen " << std::endl;
			break;
		case 9:
			std::cout << "nineteen " << std::endl;
			return;
			break;
		default:
			break;
		}
		break;
	case 2:
		std::cout << "twenty ";
		break;
	case 3:
		std::cout << "thirty ";
		break;
	case 4:
		std::cout << "fourty ";
		break;
	case 5:
		std::cout << "fifty ";
		break;
	case 6:
		std::cout << "sixty ";
		break;
	case 7:
		std::cout << "seventy ";
		break;
	case 8:
		std::cout << "eighty ";
		break;
	case 9:
		std::cout << "ninety ";
		break;
	default:
		break;
	}

	switch (ones)
	{	
	case 1:
		std::cout << "one " << std::endl;
		break;
	case 2:
		std::cout << "two " << std::endl;
		break;
	case 3:
		std::cout << "three " << std::endl;
		break;
	case 4:
		std::cout << "four " << std::endl;
		break;
	case 5:
		std::cout << "five " << std::endl;
		break;
	case 6:
		std::cout << "six " << std::endl;
		break;
	case 7:
		std::cout << "seven " << std::endl;
		break;
	case 8:
		std::cout << "eight " << std::endl;
		break;
	case 9:
		std::cout << "nine " << std::endl;
		break;
	default:
		break;

	}
}

void Switches::Switches19(int year) {
	int subCycle = (year - 1984) % 60;

	std::string color;
	switch (subCycle / 12) {
	case 0: 
		color = "green";
		break;
	case 1:
		color = "red"; 
		break;
	case 2: 
		color = "yellow";
		break;
	case 3: 
		color = "white";
		break;
	case 4: 
		color = "black";
		break;
	}

	std::string animal;
	switch (subCycle % 12) {
	case 0: 
		animal = "rat"; 
		break;
	case 1: 
		animal = "ox"; 
		break;
	case 2: 
		animal = "tiger";
		break;
	case 3:
		animal = "rabbit"; 
		break;
	case 4:
		animal = "dragon"; 
		break;
	case 5:
		animal = "snake"; 
		break;
	case 6:
		animal = "horse"; 
		break;
	case 7:
		animal = "sheep";
		break;
	case 8:
		animal = "monkey";
		break;
	case 9:
		animal = "rooster"; 
		break;
	case 10:
		animal = "dog"; 
		break;
	case 11:
		animal = "pig";
		break;
	}

	std::cout << "Year of the " << color << " " << animal << std::endl;
}

void Switches::Switches20(int day, int month) {
	bool dayCheck;
	std::string type;
	switch (month)
	{
	case 1:
		dayCheck = day >= 20;
		switch (dayCheck)
		{
		case 1:
			type = "Vodoley";
			break;
		case 0:
			type = "Kozerog";
			break;
		default:
			break;
		}
		break;
	case 2:
		dayCheck = day <= 18;
		switch (dayCheck)
		{
		case 1:
			type = "Vodoley";
			break;
		case 0:
			type = "Riby";
			break;
		default:
			break;
		}
		break;
	case 3:
		dayCheck = day <= 20;
		switch (dayCheck)
		{
		case 1:
			type = "Riby";
			break;
		case 0:
			type = "Oven";
			break;
		default:
			break;
		}
		break;
	case 4:
		dayCheck = day <= 19;
		switch (dayCheck)
		{
		case 1:
			type = "Oven";
			break;
		case 0:
			type = "Telec";
			break;
		default:
			break;
		}
		break;
	case 5:
		dayCheck = day <= 20;
		switch (dayCheck)
		{
		case 1:
			type = "Telec";
			break;
		case 0:
			type = "Bliznecy";
			break;
		default:
			break;
		}
		break;
	case 6:
		dayCheck = day <= 21;
		switch (dayCheck)
		{
		case 1:
			type = "Bliznecy";
			break;
		case 0:
			type = "Rak";
			break;
		default:
			break;
		}
		break;
	case 7:
		dayCheck = day <= 22;
		switch (dayCheck)
		{
		case 1:
			type = "Rak";
			break;
		case 0:
			type = "Lev";
			break;
		default:
			break;
		}
		break;
	case 8:
		dayCheck = day <= 22;
		switch (dayCheck)
		{
		case 1:
			type = "Lev";
			break;
		case 0:
			type = "Deva";
			break;
		default:
			break;
		}
		break;
	case 9:
		dayCheck = day <= 22;
		switch (dayCheck)
		{
		case 1:
			type = "Deva";
			break;
		case 0:
			type = "Vesy";
			break;
		default:
			break;
		}
		break;
	case 10:
		dayCheck = day <= 22;
		switch (dayCheck)
		{
		case 1:
			type = "Vesy";
			break;
		case 0:
			type = "Scorpion";
			break;
		default:
			break;
		}
		break;
	case 11:
		dayCheck = day <= 22;
		switch (dayCheck)
		{
		case 1:
			type = "Scorpion";
			break;
		case 0:
			type = "Strelec";
			break;
		default:
			break;
		}
		break;
	case 12:
		dayCheck = day <= 21;
		switch (dayCheck)
		{
		case 1:
			type = "Strelec";
			break;
		case 0:
			type = "Kozerog";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	std::cout << "You are " << type << std::endl;
}