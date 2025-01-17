#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 void
 char
 bool
 double
 float
 char
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
     //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int number = 5;
    int length = 32;
    int weight = 44;
  
    float speed = 77.1f;
    float ratio = 23.1f;
    float distance = 42.234f;
  
    double pi = 3.14159;
    double trueSize = 126.324535;
    double counter = 18.77;
  
    bool end = true;
    bool visible = false;
    bool afterdeath = false;
  
    char firstLetter = 'E';
    char lastLetter = 'S';
    char buttonName = 'X';
  
    
  
    ignoreUnused(number, length, weight, speed, ratio, distance, pi, trueSize, counter, end, visible, afterdeath, firstLetter, lastLetter, buttonName); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool eat(int pizzaSlice, char pizzaName)
{
    ignoreUnused(pizzaSlice, pizzaName);
    return {};  
}
/*
 2)
 */
void setLoopSettings(int barSize, float sampleRate = 44.1f)
{
    ignoreUnused(barSize, sampleRate);
}

/*
 3)
 */
int speedUp(int distance, int elapsed)
{
    ignoreUnused(distance, elapsed);
    return {};  
}

/*
 4)
 */
bool startAirConditioner(int temp, bool smartSaver)
{
    ignoreUnused(temp, smartSaver);
    return {};  
}
/*
 5)
 */
int checkOut(double pricing, float vatAmount)
{
    ignoreUnused(pricing, vatAmount);
    return {};  
}
/*
 6)
 */
double selectSubscriptionModel(int month, bool autoRenew)
{
    ignoreUnused(month, autoRenew);
    return {};  
}
/*
 7)
 */
double payCreditCard(int bankAccount, double minPayAmount)
{
    ignoreUnused(bankAccount, minPayAmount);
    return {};
}
/*
 8)
 */
bool setTimer(int hour, int min)
{
    ignoreUnused(hour, min);
    return{};
}
/*
 9)
 */
char selectAddress(int numbOfAddress)
{
    ignoreUnused(numbOfAddress);
    return{};
}
/*
 10)
 */
void openReaVerbSettings(double roomSize = 12.32, bool byPass = false)
{
    ignoreUnused(roomSize, byPass);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto eatedPizza = eat(3, 'V');
    //2)
    setLoopSettings(4, 44.1f);
    //3)
    auto speed = speedUp(36, 15);
    //4)
    auto airConditioner = startAirConditioner(27, false);
    //5)
    checkOut(39.90, 18.2f);
    //6)
    auto subscription = selectSubscriptionModel(7, true);
    //7)
    auto creditCard = payCreditCard(1, 390.20);
    //8)
    auto timer = setTimer(12, 30);
    //9)
    auto name = selectAddress(5);
    //10)
    openReaVerbSettings(10.40, true);
    
    ignoreUnused(carRented, eatedPizza, setLoopSettings, speed, airConditioner, checkOut, subscription, creditCard, timer, name);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
