# Loops

C++ has multiple types of loops. They include a while loop, a do/while looop, a for loop, and a for each loop. I've included examples to all of them in the looptest folder.

This is a while loop:

    void whiletest(){
      int a = 0;
      while (a < 3){
        cout << a << "\n";
        a++;
      }
    }

The while statement goes through the loop as long as the parameter (in this case, a < 3), is true. If it's not true, the loop stops.

This is a do/while loop:

    void dowhiletest(){
      int b = 0;
      do {
        cout << b << "\n";
        b++;
      }
      while (b < 3);
    }

Similar to a while loop, the do statement continues as long as the parameter in the while statement (b < 3) is true.

This is a for loop:

    void fortest(){
      for (int i = 0; i < 3; i++) {
        cout << i << "\n";
      }
    }
    
In a for loop, the parameters happen after in the for statement, and the loop continues as long as the parameters are true.

This is a for/each loop:

    void foreachtest(){
      int testarray[] = {0, 1, 2};
      for (int i : testarray){
        cout << i << "\n";
      }
    }

In a for/each loop, the loop counts through an array (i.e., for _each_ item in the array, x happens).

# Functions

To declare a function, you need to specify the struct (what will the function return--void if nothing);

    void
   
the name of the function, followed by parentheses for the parameters, and curly brackets:

    void testfunc(){
    }

and the contents of the function:

    void testfunc(){
      x = 1;
      y = 2;
      x + y;
    }

That's it!

Remember that functions must _always_ be placed above your main() function (the function where you call your other functions). Otherwise, your IDE will not notice them.

C++ does allow recursive functions. Here's the code to ask the user for a factorial:

    void factorial(){

      int f;
      double factorial = 1.0;

      cout << "give me a number: ";
      cin >> f;

      for(int g = 1; g <= f; ++g) {
        factorial *= g;
      }

      cout << "the factorial of " << f << " is: " << factorial;
    }

"Recursive" means that the function calls itself. We use above to calculate a factorial using recursion.

C++ functions can accept multiple parameters as long as those parameters are called correctly. For example, if you want to pass an integer and a string through a function,
you must do this:

    void testfunc(int num, string word){
    }

The function must know what the different data types are.

C++ doesn't really allow you to return multiple values at the same time--it gives you an error through your compiler. However, you can get around this by using pointers.

Pointers directly refer to an object in your code's memory. If you use a pointer in your code, you can use cout statements to print the pointers and return a single variable,
which would look like you're returning multiple things (see the pass-by-reference and pass-by-value tests in the looptests folder).

Pass-by-reference and pass-by-value are phrases that refer to how the program stores and recalls variables. Pass-by-value means that the code would store the value and
refer to that value when it's called. Pass-by-reference means that the code would store the object's exact location to obtain the value, and refer to that value at that
location when it's called.

I did a test in the looptest folder where I looked at whether C++ was pass-by-reference or pass-by-value. What I learned was that C++ is, by default, pass-by-value, but you
can easily use pass-by-reference by using pointers.

Pointers are used more often than you'd think in code, due to C++'s nature of being pass-by-value. Many types of functions, including recursive ones, need pointers in
order to function (pun intended).

# Works Cited:
https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm

https://www.w3schools.com/cpp/default.asp

https://www.programiz.com/cpp-programming/recursion

https://www.cprogramming.com/tutorial/function-pointers.html

https://www.cplusplus.com/doc/tutorial/functions/

https://www.geeksforgeeks.org/assigning-function-to-a-variable-in-cpp/

