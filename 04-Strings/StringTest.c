#include <assert.h>
#include "String.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void testGetLength()
{
    //String long 0
    char testString2[6] = "";
    assert(getLength(testString2) == 0);

    // String long 6
    char testString1[6 + 1] = "julian";
    assert(getLength(testString1) == 6);

    // Test literal long 0
    assert(getLength("") == 0);

    // Test literal long 6
    assert(getLength("julian") == 6);
}

void testIsEmpty()
{

    // strin no vacio
    char testString1[6 + 1] = "julian";
    assert(!isEmpty(testString1));

    // string vacio
    char emptyString[6] = "";
    assert(isEmpty(emptyString));

    // literal no vacio
    assert(!isEmpty("SSL"));

    // literal vacio
    assert(isEmpty(""));
}

// Test Power
void testPower()
{
    int factor = 2;
    char testString[6 + 1] = "julian";
    char expected[12 + 1] = "julianjulian";

    assert(strcmp(power(testString, factor), expected) == 0);

    const char *result = power("julian", factor);
    assert(getLength(result) == 12);
}

void testAreEquals()
{
    char testString1[6 + 1] = "julian";
    char testString2[6 + 1] = "banana";

    //dos strings iguales
    assert(areEquals(testString1, testString1));

    //dos strings distintos
    assert(!areEquals(testString1, testString2));

    //dos literales giuales
    assert(areEquals("julian", "julian"));

    //dos literales distintos
    assert(!areEquals("julian", "banana"));
}

int main()
{
    printf("Comenzando tests...\n");

    testGetLength();
    testIsEmpty();
    testPower();
    testAreEquals();

    printf("Tests finalizados correctamente.\n");

    return 0;
}