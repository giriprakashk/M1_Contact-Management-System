#include "unity.h"

#define PROJECT_NAME  "CONTACT_MANAGEMENT_SYSTEM"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for contact_management_system
 * 
 */
extern void test_contact();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_contact);
  /* Close the Unity Test Framework */
    return (UnityEnd());
}
