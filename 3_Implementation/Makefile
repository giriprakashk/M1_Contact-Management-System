# Name of the project
PROJECT_NAME = CONTACT_MANAGEMENT_SYSTEM

#Doxyfile folder
DOC = documentation

#All source code files
SRC = contact.c\
src/contact_operations.c

#All test source files
TEST_SRC = src/contact_operations.c\
test/test_contact_operations.c\
unity/unity.c

TEST_OUTPUT = Test_a.out

#All include folders with header files
INC = -Iinc\
-Iunity\

#Project Output Name
PROJECT_OUTPUT = contact.out

#Document files
DOCUMENTATION_OUTPUT = documentation/html


Build:
	gcc contact.c test_contact.c unity/unity.c -Iunity
Run:
  ./a.out
