///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Lab 10c - Pointers - EE 205 - Spr 2022
///
/// Explore pointers for fun and profit
///
/// Usage:  pointers
///
/// Result:
///   Just a little story...
///
/// Example:
///   $ pointers
///
/// Compilation:
///   $ g++ -o pointers -Wall -Wextra pointers.cpp
///   This program will only compile in C++ (with g++) not in C (with gcc)
///
/// @file pointers.cpp
/// @version 1.0
///
/// @see https://c-for-dummies.com/caio/pointer-cheatsheet.php
/// @see https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-references-and-pointers/cheatsheet
/// @see https://en.wikipedia.org/wiki/Pointer_(computer_programming)
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

// In this lab, we will use a little Hungarian Notation.
// For example, variables that start with 'p' such as 'pMyChar' means that
// it's a pointer.
// For more information, checkout:
//    https://web.mst.edu/~cpp/common/hungarian.html
//    https://en.wikipedia.org/wiki/Hungarian_notation


// Tell a story about basic datatypes
void firstStory() {
	cout << "The first story" << endl;

	// Allocate 4 variables... one char, short, int and a long
	// The first one has been done for you, it's just commented out...
//	char  myChar;
	// Now you do the other 3 (and delete this comment line)

	// Using cout and sizeof(), print the size of the 4 basic datatypes:
	//    char, short, int and long
//	cout << "  Sizeof a char is "  << sizeof( myChar )  << " byte"  << endl;

//	cout << endl;

	// Allocate 4 pointers, a pointer to a char, short, int and a long
//	char*  pMyChar;

	// Using cout and sizeof(), print the size of the 4 pointers
//	cout << "  Sizeof a char* is "  << sizeof( pMyChar )  << " bytes" << endl;

	cout << endl;
}


// Tell a story about declaring and accessing pointers.  Also, compare the
// the contents of a pointer with the address of the variable it's pointing
// to.
void secondStory() {
	cout << "The second story" << endl;

	// Allocate 4 variables (char, short, int & long).  Initialize them to
	// 100, 200, 300 and 400.
//	char  myChar  = 100;  // This is the letter 'd' in ASCII

	// Allocate 2 pointers (char & short) using the type* name notation:
//	char*  pMyChar;

	// Allocate 2 pointers (int & long) using the type *name notation;
//	int   *pMyInt;

	// Using the & (address of), set each of the pointers to point to their
	// respective variable
//	pMyChar  = &myChar;

	// Using cout and the *name notation, use the pointer to print the value
//	cout << "  The value that pMyChar points to is "  << *pMyChar  << endl;

	cout << endl;

	// Using cout, print the address of each integer datatype on one one line
	// ...and the value of each pointer on the next.
	//
	// Note:  Casting memory addresses to void* is one way to get cout to
	//        print addresses.
//	cout << "  The address of myChar is " << (void*)&myChar << endl;
//	cout << "   The value of pMyChar is " << (void*)pMyChar << endl;
//	cout << endl;
}


// INTERMISSION
//
// Create 4 pointers (the usual datatypes) in "global" space
// The 's' means static.  The 'p' means pointer.
//
// Initialize them all to NULL
//static char*  spMyChar  = NULL ;


// Let's work with dynamic memory
//
// For each of the datatypes, do the following:
//  1.  If the static pointer == NULL, then
//          Use malloc() to allocate that data on the heap
//          ...and set it to 100, 200, 300 or 400 (like above)
//      Else
//          (if we are here, then the pointer is valid)
//          So, add 5 to the data
//  2.  Print the value
void thirdStory() {
	cout << "The third story" << endl;

	// Step 1
//	if( spMyChar == NULL ) {
//		spMyChar = (char*) malloc (sizeof( char ));
//		*spMyChar = 100;  // remember, 100 maps to 'd' in ASCII
//	} else {
//		*spMyChar += 5;
//	}



	// Step 2
//	cout << "  The value pointed to by spMyChar is "  << *spMyChar  << endl;

	cout << endl;
}


// Let's cleanup our dynamic memory
//
// For each of the datatypes, do the following:
//  1.  If the static pointer == NULL, then
//          print "  foo is NULL"
//      Else
//          free the memory under the pointer
//          Set the pointer to NULL
//          Print a message
void fourthStory() {
	cout << "The fourth story" << endl;

//	if( spMyChar == NULL ) {
//		cout << "  spMyChar is NULL" << endl;
//	} else {
//		free( spMyChar );  // Release the memory from the heap
//		spMyChar = NULL;   // Set the pointer back to NULL
//		cout << "  Released memory under spMyChar" << endl;
//	}

	cout << endl;
}


// Pointers to objects are just like pointers to native data types.
void fifthStory() {
	cout << "The fifth story" << endl;

// Step 1:
// Research a class called std::stringbuf
// Add the appropriate #include at the top of the file

// Step 2:
// Instantiate an instance of std::stringbuf into a variable called myObject
//	std::stringbuf myObject;

// Step 3:
// Create a pointer object to a std::stringbuf

// Step 4:
// Set the pointer you created in Step 3 = to the address of myObject

// Step 5:
// Print the size of the pointer
// Print the address stored in the pointer (see, it's just like the other pointers)

// Step 6:
// Use the sgetc() method of std::stringbuf and the *name form of the pointer
//	cout << "  The result of sgetc() is " << (*pMyObject).sgetc() << endl;

// Step 7:
// Now, on your own use the in_avail() method of std::stringbuf (look it up online!) and
// print the result

	cout << endl;
}


// For our sixth story, we will look into passing data by reference...
// Type out the two "square" functions from the slides...  Call the first one
// square( long a ) and the second one squareRef( long* a ).

// Add the two square functions here


// Done with the two square functions



void sixthStory() {
	cout << "The sixth story" << endl;

	// long a = 4;  // This will be called by value
	// long b = 4;  // This will be called by reference

   // Write cout string that prints:
   //   The square of 4 is << 16
   //   The variable a is called by value, so it's still 4


   // Write cout string that prints:
   //   The square of 4 is << 16
	//   The variable b is called by reference, so it's now 16

	cout << endl;
}


int main() {
	firstStory()  ;
	secondStory() ;
	thirdStory()  ;
	thirdStory()  ;   // Call it again
	thirdStory()  ;   // ...and one more time
	fourthStory() ;
	fourthStory() ;   // Call it one more time
	fifthStory()  ;
	sixthStory()  ;
}
