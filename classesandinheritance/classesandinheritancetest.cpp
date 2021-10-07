#include <iostream>
using namespace std;

class planet {
	public:
		string name;
		string type;
		double diameter;

		double radius() {
		      double radius = (diameter / 2);
		      return(radius);
		    }

		void setname(){
			cout << "what is the planet's name? ";
			cin >> name;
		}

		void settype(){
			cout << "what is the planet's type? ";
			cin >> type;
		}

		void setdiameter(){
			cout << "what is the planet's diameter? ";
			cin >> diameter;
		}

		string getname(){
			cout << "planet: " << name << "\n";
			return name;
		}

		string gettype(){
			cout << "type: " << type << "\n";
			return type;
		}

		double getdiameter(){
			cout << "diameter: " << diameter << "\n";
			return diameter;
		}

		planet(string n, string t, double d){
			name = n;
			type = t;
			diameter = d;
		}
};

class dwarfplanet : public planet {
	public:
		bool dwarfstatus;

		double radius(){
			planet::radius();
		}

		void setname(){
			planet::setname();
		}

		void settype(){
			planet::settype();
		}

		void setdiameter(){
			planet::setdiameter();
		}

		string getname(){
			planet::getname();
		}

		string gettype(){
			planet::gettype();
		}

		double getdiameter(){
			planet::getdiameter();
		}

		void setdwarfstatus(){
			cout << "is this planet a dwarf planet? true or false? ";
			cin >> dwarfstatus;
		}

		bool getdwarfstatus(){
			cout << "dwarf status: " << dwarfstatus << "\n";
			return dwarfstatus;
		}
};

int main() {
	planet mercury("mercury", "terrestrial", 3031.9);

	mercury.getname();
	mercury.gettype();
	mercury.getdiameter();

	planet venus("empty", "empty", 0);

	venus.setname();
	venus.settype();
	venus.setdiameter();

	venus.getname();
	venus.gettype();
	venus.getdiameter();

	dwarfplanet pluto(dwarfplanet);

	return 0;
}
