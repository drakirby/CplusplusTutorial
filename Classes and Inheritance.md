# Classes

You can create classes in C++, which store objects.

For example, you can create a Person class, and have an object which is a specific person, with all of the attributes that make a person a person.

Classes are usually written with an Uppercase letter, and camelCase or lowercase objects.

Classes must be instantiated with the security level of the class (i.e., private or public):

    class planet {
      public:
    };
    
For this code, I've made a class planet with variables name, type, and diameter. It also has a method called radius, which obtains the radius of the planet.

    class planet {
      public:
        string name;
        string type;
        double diameter;

        double radius() {
              double radius = (diameter / 2);
              return(radius);
            }
            
        planet(string n, string t, double d){
          name = n;
          type = t;
          diameter = d;
        }
    };
   
I've included several variables, a method, and a constructor, which creates the object and makes sure all the variables are contained within the object.

In order to obtain the variables from the object in the class using the main() function, you have to employ getter and setter methods:

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
    
 Like so.
 
 # Inheritance
 
 Inheritance is when you have a class that inherits code and/or variables from another class. We call the class that inherits the other class the child, and the inherited class
 the parent.
 
 In order to do this, you must create another class and set it to inherit the parent class, like so:
 
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

Notice that the instantiation statement is different. You have to use : to set the child as instantiating from the parent.

You must set the security of the class objects, just like the parent.

You must create all the new methods, and then you can set them as equal to the parent methods by using this: ::

I also created a new variable and two new functions that are unique to the child, and not the parent.

Remember that in order to actually obtain the information, you have to call the constructor and the constructor getter and setter methods in the main() function:

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
    
You do this by calling the functions. You can also create a constructor for the child class.

If you create a function in the parent class, and have that same function in the child class, and you don't use the :: symbol to inherit the function but instead make your
own function, the code will not compile because it won't be sure which version of the function you're calling. This is called overloading.

Unlike Java and Python, C++ doesn't have a dedicated string method. You can simply use cout to print statements and variables.
