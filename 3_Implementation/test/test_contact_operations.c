#include "unity.h"
#include "contact_operations.h"

#define PROJECT_NAME "Contact_Management_System"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for contact management system
 * 
 */

/**
 * @brief Testing function for show records for contact
 * 
 */
void test_main();
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_main);
    

    /* Close the Unity Test Framework */
    return UNITY_END;
}
