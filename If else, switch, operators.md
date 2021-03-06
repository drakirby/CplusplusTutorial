# If else, switch, logical operators:

Boolean values in C++ are simply lowercase true and false. You can use these in several conditional statements.

There's single if/else statements:

		  int x = 3
		  if (x == 3) {
			cout << "true";
		} 
		  else {
			cout << "false";
		}
  
The spacing and bracket placement is incredibly important; it will let you know if you've spaced something wrong.

You can also have else if to add further conditions:

		  int x = 3
		  if (x == 3) {
			cout << "true";
		} 
		  else if (x == 4) {
			cout << "false";
		} 
		  else {
			cout << "false";
		}

You can use short-circuit evaluation (a statement ignoring the second part of the statement if the first is true in the if clause):

		  int y = 3;
		  int z = 5;

		  if (x == y || y == z) {
			cout << "true";
		} 
		  else {
			cout << "false";
		}

In the above example, the terminal will print "true," because the first part of the statement is true, even though the second part isn't.

You can have multiple if statements one after another with a "dangling else." It will simply regard the second if as an else if, and process each of the statements regardless
of how they're nested. For example:
  
		  int x = 3;
		  int y = 4;

		  if (x == 3){
			cout << "test";
		}

		  if (y == 6){
			cout << "test";
		}

		  else {
			cout << "false";
		}
  
The above code prints testfalse, because x is 3 (which prints true) and y is not 6, so it moves to the else.

You can also use switch statements:

		  x = 3;
		  switch (x) {
			case 1:
			    cout << "x is one";
			    break;
			case 2:
			    cout << "x is two";
			    break;
			case 3:
			    cout << "x is three";
			    break;
			default:
			    cout << "x is a variable";
		}

This allows you to have multiple conditions that each have different outcomes without the bulkiness of if/else statements. In the above example, since x is 3, the third case
is true. Keep in mind that the case name depends on the condition, not the number (i.e. you could have a case "yes" and a case "no").

You need to break; after every statement, otherwise the terminal will print every case after the one that is true.

You can also have a default case, which is the case if none of the other cases are true.

# Works Cited:

C++ Tutorial, www.w3schools.com/cpp/default.asp.</br>
Corob-Msft. ???Microsoft C/C++ DOCUMENTATION.??? Microsoft C/C++ Documentation | Microsoft Docs, docs.microsoft.com/en-us/cpp/?view=msvc-160.</br>
???C++ Programming Language.??? DevDocs, devdocs.io/cpp/.
