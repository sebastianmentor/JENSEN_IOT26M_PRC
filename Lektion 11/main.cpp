#include <iostream>
#include <string>
#include "animal.h"

int main() {
    Dog my_dog("Fido", "Laborador");
    Cat my_cat("Lucy", "Maine Coon");

    my_dog.bark();
    my_cat.meow();

    return 0;
}