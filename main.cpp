#include <iostream>
#include "list/list.h"

using namespace std;

extern void iterateList();

extern void createList();

int main() {
    createList();
    iterateList();
    return 0;
}