###############################################################################
###          University of Hawaii, College of Engineering
### @brief   Lab 10c - Pointers - EE 205 - Spr 2022
###
### @file    Makefile
### @version 1.0 - Initial implementation
###
### Tell a "little story" about pointers.
###
### @author  @author @todo yourName <@todo yourMail@hawaii.edu>
### @@date   @todo dd_mmm_yyyy
###
### @see     https://www.gnu.org/software/make/manual/make.html
###############################################################################

TARGET = pointers

$(TARGET): pointers.cpp
	g++ -o $@ -Wall -Wextra $^

clean:
	rm -fr $(TARGET)

test: $(TARGET)
	./$(TARGET)
