# Data Types:

Here, I explore several data types: int, string, double, bool, array, maps, and pointers.

Here's how you define each of these data types:

  	int integer_example = 3;
  
	string string_example = "hello";

	double double_example = 3.3;

	bool bool_example = true;

	string array_example[3] = {"array", "example", "okay"};

	map<char, int> map_example;
	map_example['a'] = 0;
	map_example['b'] = 1;
	map_example['c'] = 2;

	string* pointer_example = &string_example;
  
# Notes for discussion:

1. The naming convention for variables is to do all lowercase with underscores separating the words. Naming conventions are not enforced by the compiler,
   but are standards in the community.</br>
2. C++ is dynamically typed, which means you can redefine a variable after it's already been typed.</br>
3. There's a lot in the debate in the community about this, but I believe that C++ is strongly typed (i.e., stops you from assigning variables incorrectly),
   because it stops you from making variable assignment mistakes (like making a string var carry an int) in the compiling stage.</br>
4. For example, int x = "5" + 6 would not work, for reasons stated above. You'd have to remove the quotation marks.</br>
5. Maps are difficult here, because you have to use a for loop to iterate in order to get data out of the map. I don't go over this here. Additionally, for strings and maps,
   you have to have an #include statement at the top.</br>
6. Other than map and pointer, these data types don't seem too complex or new, as compared to Java or Python, for example.

# Works Cited:

C++ Tutorial, www.w3schools.com/cpp/default.asp.</br>
Corob-Msft. “Microsoft C/C++ DOCUMENTATION.” Microsoft C/C++ Documentation | Microsoft Docs, docs.microsoft.com/en-us/cpp/?view=msvc-160.</br>
“C++ Programming Language.” DevDocs, devdocs.io/cpp/.
