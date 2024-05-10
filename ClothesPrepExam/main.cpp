#include "Clothes.h"
#include "Evening.h"
#include "Sport.h"

int main()
{
    Clothes c("Clothes", 200, "denim", "");
    Evening e("Star", 999, "dress", "f");
    Sport s("top", "waterproof");

    c.display();
    e.display();
    s.display();

    return 0;
}
